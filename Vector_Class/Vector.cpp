//
//  Vector.cpp
//  Vector_Class
//
//  Created by 세광 on 2021/08/11.
//

#include "Vector.hpp"

Vector::Vector() : x(0), y(0), z(0) {}
Vector::Vector(double x, double y, double z) : x(x), y(y), z(z) {}
Vector::~Vector() {}

double Vector::InnerProduct(Vector v1, Vector v2) const {
    return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
}
Vector Vector::OuterProduct(Vector v1, Vector v2) const {
    return Vector(v1.y * v2.z - v2.y * v1.z, v2.x * v1.z - v1.x * v2.z, v1.x * v2.y - v2.x * v1.y);
}
Vector Vector::Plus(Vector v1, Vector v2) const {
    return Vector(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);
}
Vector Vector::Minus(Vector v1, Vector v2) const {
    return Vector(v1.x - v2.x, v1.y - v2.y, v1.z - v2.z);
}
Vector Vector::Multiply(double s, Vector v) const {
    return Vector(v.x * s, v.y * s, v.z * s);
}
double Vector::Magnitude() const {
    return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}
Vector Vector::Normalize() const {
    return Vector(x / Magnitude(), y / Magnitude(), z / Magnitude());
}
std::string Vector::ToString() const {
    return "(" + std::to_string(x) + ", " + std::to_string(y) + ", " + std::to_string(z) + ")";
}
