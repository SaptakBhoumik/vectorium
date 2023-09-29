#ifndef __VECTORIUM__VECTOR3D__HPP__
#define __VECTORIUM__VECTOR3D__HPP__
#include <cmath>
#include <cinttypes>
#include <iostream>
namespace Vectorium{
class Vector3D{
public:
    double i, j, k;
    //innitializer
    Vector3D()=default;
    Vector3D(double _i, double _j=0, double _k=0);
    Vector3D(const Vector3D &other);
    Vector3D(Vector3D &&other);
    //operators
    Vector3D &operator=(const Vector3D &other);
    Vector3D &operator=(Vector3D &&other);
    bool operator==(const Vector3D &other) const;
    bool operator!=(const Vector3D &other) const;
    Vector3D operator+(const Vector3D &other) const;
    Vector3D operator-(const Vector3D &other) const;
    Vector3D operator-() const;
    Vector3D operator*(double other) const;
    Vector3D operator/(double other) const;
    Vector3D& operator+=(const Vector3D &other);
    Vector3D& operator-=(const Vector3D &other);
    Vector3D& operator*=(double other);
    Vector3D& operator/=(double other);
    double dot(const Vector3D &other) const;
    Vector3D cross(const Vector3D &other) const;
    double dot(double other,double angle) const;
    double cross(double other,double angle) const;
    //basic function
    double mag() const;//Magnitude
    double mag2() const;//Magnitude square
    Vector3D unit() const;
    double distance(const Vector3D &other) const;//Distance between 2 vector
    double distance2(const Vector3D &other) const;//Square of Distance between 2 vector
    double angle(const Vector3D &other) const;//Angle between 2 vector
    double angle(const Vector3D &other, const Vector3D &centre) const;//Angle between 2 vector along centre i.e centre acts as origin
    Vector3D projection(const Vector3D &other) const;//project *this on other
    Vector3D rejection(const Vector3D &other) const;//reject *this on other
    Vector3D rotatexy(double angle) const;//Rotate the vector along xy plane in anti-clockwise direction
    Vector3D rotateyz(double angle) const;//Rotate the vector along yz plane in anti-clockwise direction
    Vector3D rotatexz(double angle) const;//Rotate the vector along xz plane in anti-clockwise direction
    //Maybe add support for reflection anf refraction along a line
};
Vector3D operator*(double a,const Vector3D &b);
double dot(double a,double b,double angle);
double cross(double a,double b,double angle);
std::ostream &operator<<(std::ostream &out, const Vector3D &c);

double PerlinNoise(Vector3D v);
double PerlinNoise(Vector3D v,double seed);
}
#endif