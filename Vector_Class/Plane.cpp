//
//  Plane.cpp
//  Vector_Class
//
//  Created by 세광 on 2021/08/11.
//

#include "Plane.hpp"

Plane::Plane() {}
Plane::Plane(const Point& po1, const Point& po2, const Point& po3) : r0(po1) {
    Vector v1 = po1.Minus(po1, po2);
    Vector v2 = po2.Minus(po2, po3);
    Vector normal = v1.OuterProduct(v1, v2);
    n = normal.Normalize();
}
Plane::~Plane() {}

Point Plane::ProjectTo(const Point& po) {
    Point proj;
    Vector v = po.Minus(po, r0);
    double temp = v.InnerProduct(v, n);
    proj = po.Plus(po, n.Multiply(temp, n));
    return proj;
}
std::string Plane::ToString() {
    return "Plane: " + n.ToString() + "(r - " + r0.ToString() + ") = 0";
}
