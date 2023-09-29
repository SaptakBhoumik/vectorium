#include "vector3D.hpp"
namespace Vectorium{
Vector3D::Vector3D(double _i, double _j, double _k){
    this->i = _i;
    this->j = _j;
    this->k = _k;
}
Vector3D::Vector3D(const Vector3D &other){
    this->i = other.i;
    this->j = other.j;
    this->k = other.k;
}
Vector3D::Vector3D(Vector3D &&other){
    this->i = other.i;
    this->j = other.j;
    this->k = other.k;
}
Vector3D &Vector3D::operator=(const Vector3D &other){
    this->i = other.i;
    this->j = other.j;
    this->k = other.k;
    return *this;
}
Vector3D &Vector3D::operator=(Vector3D &&other){
    this->i = other.i;
    this->j = other.j;
    this->k = other.k;
    return *this;
}
bool Vector3D::operator==(const Vector3D &other) const{
    return (this->i == other.i && this->j == other.j && this->k == other.k);
}
bool Vector3D::operator!=(const Vector3D &other) const{
    return !(*this == other);
}
Vector3D Vector3D::operator+(const Vector3D &other) const{
    return Vector3D(this->i + other.i, this->j + other.j, this->k + other.k);
}
Vector3D Vector3D::operator-(const Vector3D &other) const{
    return Vector3D(this->i - other.i, this->j - other.j, this->k - other.k);
}
Vector3D Vector3D::operator-() const{
    return Vector3D(-this->i, -this->j, -this->k);
}
Vector3D Vector3D::operator*(double other) const{
    return Vector3D(this->i * other, this->j * other, this->k * other);
}
Vector3D Vector3D::operator/(double other) const{
    return Vector3D(this->i / other, this->j / other, this->k / other);
}
Vector3D& Vector3D::operator+=(const Vector3D &other){
    *this = (*this) + other;
    return *this;
}
Vector3D& Vector3D::operator-=(const Vector3D &other){
    *this = (*this) - other;
    return *this;
}
Vector3D& Vector3D::operator*=(double other){
    *this = (*this) * other;
    return *this;
}
Vector3D& Vector3D::operator/=(double other){
    *this = (*this) / other;
    return *this;
}
double Vector3D::dot(const Vector3D &other) const{
    return this->i * other.i + this->j * other.j + this->k * other.k;
}
Vector3D Vector3D::cross(const Vector3D &other) const{
    return Vector3D(this->j * other.k - this->k * other.j, 
                    this->k * other.i - this->i * other.k, 
                    this->i * other.j - this->j * other.i);
}
double Vector3D::dot(double other,double angle) const{
    return mag()*other*std::cos(angle);
}
double Vector3D::cross(double other,double angle) const{
    return mag()*other*std::sin(angle);
}
double Vector3D::mag() const{
    return std::sqrt(mag2());
}
double Vector3D::mag2() const{
    return this->i * this->i + this->j * this->j + this->k * this->k;
}
Vector3D Vector3D::unit() const{
    return (*this) / mag();
}
double Vector3D::distance(const Vector3D &other) const{
    return (*this - other).mag();
}
double Vector3D::distance2(const Vector3D &other) const{
    return (*this - other).mag2();
}
double Vector3D::angle(const Vector3D &other) const{
    return std::acos(dot(other) / (mag() * other.mag()));
}
double Vector3D::angle(const Vector3D &other, const Vector3D &centre) const{
    auto ac=(*this)-centre;
    auto bc=other-centre;
    return std::acos(ac.dot(bc)/(ac.mag() * bc.mag()));
}
Vector3D Vector3D::projection(const Vector3D &other) const{
    auto other_unit=other.unit();
    return other_unit * dot(other_unit);
}
Vector3D Vector3D::rejection(const Vector3D &other) const{
    return (*this) - projection(other);
}
Vector3D Vector3D::rotatexy(double angle) const{ 
    return Vector3D(this->i * std::cos(angle) - this->j * std::sin(angle), 
                    this->i * std::sin(angle) + this->j * std::cos(angle), 
                    this->k);  
}
Vector3D Vector3D::rotateyz(double angle) const{ 
    return Vector3D(this->i, 
                    this->j * std::cos(angle) - this->k * std::sin(angle), 
                    this->j * std::sin(angle) + this->k * std::cos(angle));  
}
Vector3D Vector3D::rotatexz(double angle) const{ 
    return Vector3D(this->i * std::cos(angle) - this->k * std::sin(angle), 
                    this->j, 
                    this->i * std::sin(angle) + this->k * std::cos(angle)); 
}
Vector3D operator*(double a,const Vector3D &b){
    return b*a;
}
double dot(double a,double b,double angle){
    return a*b*cos(angle);
}
double cross(double a,double b,double angle){
    return a*b*sin(angle);
}
std::ostream &operator<<(std::ostream &out, const Vector3D &c){
    out<<c.i<<"î";
    if(c.j>=0){
        out<<"+";
    }
    out<<c.j<<"ĵ";
    if(c.k>=0){
        out<<"+";
    }
    out<<c.k<<"k̂";
    return out;
}
}