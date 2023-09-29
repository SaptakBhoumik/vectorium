#include "vector3D.hpp"
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