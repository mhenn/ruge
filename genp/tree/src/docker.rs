use std::process::Command;



pub fn docker_start(){
    let output = Command::new("sh")
        .arg("-c")
        .arg("docker run --net ref1 --ip 172.18.0.22  --rm refbox-fast")
        .output();

}

pub fn docker_kill_all(){
    let output = Command::new("sh")
        .arg("-c")
        .arg("docker container kill $(docker container ls -aq)")
        .output();
}

pub fn execute_BT(){

    let output = Command::new("sh")
        .arg("-c")
        .arg("../../../behavior/build/BTRCLL")
        .output();
}

pub fn get_result(){

    let output = Command::new("sh")
        .arg("-c")
        .arg("./getResults.bash")
        .output();
    println!("{:?}",output.unwrap());
}



#[test]
pub fn execute_cmd_test(){
    let output = Command::new("sh")
        .arg("-c")
        .arg("dir")
        .output();
    println!("{:?}",output.unwrap());
}


#[test]
pub fn execute_docker_test(){
    docker_start();
}
