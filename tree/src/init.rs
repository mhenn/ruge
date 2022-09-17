use crate::{constraints::*, nodes::*, population::*, settings::*};
use rand::{rngs::ThreadRng, seq::SliceRandom, Rng};

pub fn to_list<T>(node: &Node<T>, delimeter: &(T, T)) -> Vec<T>
where
    T: Default + Debug + Copy,
{
    let mut expr: Vec<T> = vec![];
    if !node.children.is_empty() {
        expr.push(delimeter.0);
    }
    expr.push(node.value);
    for sub_t in node.children.iter() {
        expr.append(&mut to_list(sub_t, delimeter));
    }

    if !node.children.is_empty() {
        expr.push(delimeter.1);
    }
    expr
}

pub fn to_xml<T>(node: &Node<T>, delimeter: &(T, T, T)) -> Vec<T>
where
    T: Default + Debug + Copy,
{
    let mut expr: Vec<T> = vec![];
    expr.push(delimeter.0);
    expr.push(node.value);

    if node.children.is_empty() {
        expr.push(delimeter.1);
    }
    expr.push(delimeter.2);

    for sub_t in node.children.iter() {
        expr.append(&mut to_xml(sub_t, delimeter));
    }

    if node.children.is_empty() {
        return expr;
    }
    expr.push(delimeter.0);
    expr.push(delimeter.1);
    expr.push(node.value);
    expr.push(delimeter.2);

    expr
}

pub fn ramped_half_half<T>(
    size: usize,
    nodes: &Nodes<T>,
    config: &Settings,
) -> Vec<Individual<Node<T>>>
where
    T: Debug + Copy + Default,
{
    let mut chroms: Vec<Individual<Node<T>>> = vec![];
    for x in 0..size {
        let typ = x < size / 2;
        let depth = config.population.tree_depth;
        let width = config.population.tree_width;
        if let Some(tree) = gen_rnd_expr_tree(nodes, depth, width as u8, typ, 1) {
            chroms.push(Individual {
                chromosome: tree,
                fitness: 0.0,
                id: x,
            });
        }
    }
    chroms
}

pub fn gen_rnd_expr_tree<T>(
    nodes: &Nodes<T>,
    depth: usize,
    width: u8,
    is_grow: bool,
    id: usize,
) -> Option<Node<T>>
where
    T: Debug + Copy + Default,
{
    let mut expr: Node<T> = Node::new(id);
    let ind: usize = nodes.leafs.len() / (nodes.leafs.len() + nodes.intermediate.len());
    let mut rng = rand::thread_rng();
    if depth == 0 || is_grow && rng.gen_range(0..=100) < ind {
        if let Some(val) = nodes.leafs.choose(&mut rng) {
            expr.value = *val;
        }
    } else {
        let inter = nodes.intermediate.choose(&mut rng).unwrap();
        expr.value = inter.value;
        let mut arity = 1;
        if inter.random_arity {
            arity = rng.gen_range(1..=width);
        }
        for _ in 0..arity {
            if let Some(node) = gen_rnd_expr_tree(nodes, depth - 1, width, is_grow, id + 1) {
                expr.children.push(node);
            }
        }
    }
    Some(expr)
}

pub fn gen_rnd_expr<T>(
    nodes: &Nodes<T>,
    delimeter: &(T, T),
    config: &Settings,
    depth: usize,
    is_grow: bool,
) -> Vec<T>
where
    T: Copy,
{
    let mut expr: Vec<T> = vec![];
    let ind: usize = nodes.leafs.len() / (nodes.leafs.len() + nodes.intermediate.len());
    let mut rng = rand::thread_rng();
    if depth == 0 || is_grow && rng.gen_range(0..=100) < ind {
        if let Some(val) = nodes.leafs.choose(&mut rng) {
            expr.push(*val);
        }
    } else {
        if rng.gen_range(0.0..=100.0) <= config.population.empty_branch_rate * 100.0 {
            return vec![];
        }

        let inter = nodes.intermediate.choose(&mut rng).unwrap();
        expr.push(delimeter.0);
        expr.push(inter.value);
        let mut arity = 1;
        if inter.random_arity {
            arity = rng.gen_range(1..2);
        }
        for _ in 0..arity {
            expr.append(&mut gen_rnd_expr(
                nodes,
                delimeter,
                config,
                depth - 1,
                is_grow,
            ))
        }
        expr.push(delimeter.1);
    }
    expr
}

use std::{
    fmt::Debug,
    fs,
    time::{Duration, Instant},
};

//#[test]
//fn gen_full_tree_dfs() {
//    let nodes = get_nodes();
//    let start = Instant::now();
//    let depth = 3;
//    let width = 3;
//    let expr = gen_rnd_expr_tree(&nodes, depth, width, false).unwrap();
//    //print!("{:?}", expr);
////    let mut xml = to_xml(&expr, &get_xml_delims());
////    let xml: String = xml.into_iter().collect();
////    println!("{:?}", xml);
//    let duration = start.elapsed();
//    println!("Time elapsed in expensive_function() is: {:?}", duration);
//}
pub fn get_xml_delims<'a>() -> (&'a str, &'a str, &'a str) {
    ("<", "/", ">")
}
