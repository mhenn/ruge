use crate::{init::*, settings::*};

#[test]
fn get_grow_iter() {
    let nodes = get_nodes();
    let mut settings = Settings::new().unwrap();
    settings.population.tree_depth = 3;
    settings.population.tree_width = 3;
    let expr = gen_rnd_expr_iter(&nodes, &get_delim(), &settings,  false);
    println!("{:?}", expr);
}


