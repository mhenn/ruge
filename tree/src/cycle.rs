use rand::Rng;

use crate::{
    constraints::get_nodes,
    init::ramped_half_half,
    nodes::Nodes,
    population::{roulette_wheel, tree_crossover, Generation, Individual, IndividualTuple},
    settings::Settings,
};

pub fn evolution_cycle<T>(
    init: fn(usize, &Nodes<T>, &Settings) -> Vec<Individual<T>>,
    nodes: &Nodes<T>,
    pop_size: usize,
    elite_percentage: f64,
    evaluate: fn(&mut Vec<Individual<T>>),
    //    crop: fn(f64, &Individual<T>) -> bool,
    //    mutation: fn(&Individual<T>) -> Individual<T>,
    combine: fn(Individual<T>, Individual<T>, usize) -> Vec<Individual<T>>,
    selection: fn(&Vec<Individual<T>>) -> IndividualTuple<T>,
) where
    T: Copy + Clone + Default,
{
    //Todo: settings & get_nodes
    let settings = Settings::new().unwrap();
    let mut pop = Generation::new(pop_size);
    pop.populate(nodes, &settings, init);
    evaluate(&mut pop.individuals);
    pop.set_fitness_percentages();
    pop.handle_generation_update(2, combine, selection, elite_percentage)
    //    pop.mutate(mutation);
}

pub fn evaluate<T>(inds: &mut Vec<Individual<T>>) {
    for chromosome in inds.iter_mut() {
        chromosome.fitness = rand::thread_rng().gen_range(1..100) as f64;
        println!("R: {:?}", chromosome.fitness);
    }
}
pub fn crop<T>(pop_fitness: f64, ind: &Individual<T>) -> bool {
    ind.fitness > pop_fitness
}

fn ramped_hh() {
    let nodes = get_nodes();
    let size = 10;
    let config = Settings::new().unwrap();
    let _ret = ramped_half_half(size, &nodes, &config);
}

#[test]
fn evolve() {
    let nodes = get_nodes();
    evolution_cycle(
        ramped_half_half,
        &nodes,
        10,
        0.25,
        evaluate,
        tree_crossover,
        roulette_wheel,
    );
}
