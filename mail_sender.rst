use std::net::TcpStream;
use std::io::Write;
use std::io::Read;

fn main() {
    let host = String::from("lecturesnet.readthedocs.io");
    let path = "/";
    let request = format!(
      "GET {} HTTP/1.1\nHost: {}\nAccept: text/html\nConnection: close\n\n",
      path,
      host
    );

    let addr = host + ":80";
    let mut socket = TcpStream::connect(addr).unwrap();

    let _ = socket.write(request.as_bytes());
    println!("{}", request);

    let mut cont = String::new();
    socket.read_to_string(&mut cont).unwrap();
    println!("{}", cont);
}
