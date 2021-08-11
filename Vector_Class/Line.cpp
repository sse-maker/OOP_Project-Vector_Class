//
//  Line.cpp
//  Vector_Class
//
//  Created by 세광 on 2021/08/11.
//

#include "Line.hpp"

Line::Line() {}
Line::Line(const Point& po1, const Point& po2) : l0(po1) { l = po1.Minus(po1, po2); }
Line::~Line() {}

Point Line::ProjectTo(const Point& po) {
    Point proj;
    Vector v = l0.Minus(po, l0);
    double temp = v.InnerProduct(v, l) / l.Magnitude();
    Vector dir_vector = l.Normalize();
    proj = l0.Plus(l0, dir_vector.Multiply(temp, dir_vector));
    return proj;
}
std::string Line::ToString() {
    return "Line: " + l.ToString() + "t + " + l0.ToString();
}
