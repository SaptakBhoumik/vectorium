# Vectorium - Simple and Powerful 3D Vector Library

Vectorium is a lightweight and efficient 3D vector library designed to simplify common vector operations. It provides a simple and intuitive API for working with 3D vectors, making it easier to perform tasks such as vector addition, subtraction, dot product, cross product, normalization, and more.

## Features

- **3D Vector Operations:** Vectorium supports essential 3D vector operations, including addition, subtraction, scaling, dot product, cross product, and more.

- **Efficient:** Vectorium is designed for performance and efficiency, making it suitable for real-time applications such as 3D games and simulations.

- **Easy to Use:** The library offers a clean and intuitive API that simplifies working with 3D vectors, reducing the complexity of your code.

**API Documentation can be found <a href="./docs/DOCS.MD">here</a>**

# Installation

## Requirements 
- Ninja
- Meson
- C++ compiler

## Building it
Run the following command.This command must be executed first and are compulsory
```bash
git clone https://github.com/SaptakBhoumik/vectorium.git
cd vectorium
meson buildir
cd buildir
```
## Building the lib
Run the following command
```bash
ninja
```
## Installation
Run the following command
```bash
ninja install
```
## Devoloping the lib
Modify the dev.cpp file with the content u want to run and run the following command to build and test it
```bash
ninja 
./dev.elf
```
## Usage

Here's a basic example of how to use Vectorium in your code:

```c++
#include <vectorium/vector3D.hpp>
#include <iostream>
using namespace Vectorium;
int main(){
    Vector3D a(1,2,3);
    Vector3D b(4,5,6);
    std::cout<<"a="<<a<<std::endl;
    std::cout<<"b="<<b<<std::endl;
    std::cout<<"a+b="<<a+b<<std::endl;
    std::cout<<"a-b="<<a-b<<std::endl;
    std::cout<<"a.b="<<a.dot(b)<<std::endl;
    std::cout<<"a x b="<<a.cross(b)<<std::endl;
    std::cout<<PerlinNoise(a,10)<<std::endl;
    return 0;
}
```

Compile it using ``clang++ <file>.cpp -lvectorium``

## Contributing
Contributions to Vectorium are welcome! If you encounter any bugs, have feature requests, or want to contribute improvements, please submit an issue or a pull request to the Vectorium GitHub repository.

## License
This project is licensed under the MIT License. Feel free to use, modify, and distribute Vectorium according to the terms of this license.Just give credit to the original author in your project.


If you have any questions or need further assistance, please don't hesitate to contact me at saptakbhoumik@gmail.com.
