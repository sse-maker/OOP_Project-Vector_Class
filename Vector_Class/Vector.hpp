//
//  Vector.hpp
//  Vector_Class
//
//  Created by 세광 on 2021/08/11.
//

#ifndef Vector_hpp
#define Vector_hpp

#include <string>
#include <cmath>

class Vector {
public:
    Vector();
    Vector(double x, double y, double z);
    ~Vector();
    
    double InnerProduct(Vector v1, Vector v2) const;
    Vector OuterProduct(Vector v1, Vector v2) const;
    Vector Plus(Vector v1, Vector v2) const;
    Vector Minus(Vector v1, Vector v2) const;
    Vector Multiply(double s, Vector v) const;
    double Magnitude() const;
    Vector Normalize() const;
    std::string ToString() const;
    
private:
    double x, y, z;
};

#endif /* Vector_hpp */
