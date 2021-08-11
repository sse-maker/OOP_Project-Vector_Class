//
//  Plane.hpp
//  Vector_Class
//
//  Created by 세광 on 2021/08/11.
//

#ifndef Plane_hpp
#define Plane_hpp

#include <string>
#include <cmath>
#include "Vector.hpp"

#define Point Vector

class Plane {
public:
    Plane();
    Plane(const Point& po1, const Point& po2, const Point& po3);
    ~Plane();
    
    Point ProjectTo(const Point& po);
    std::string ToString();
    
private:
    Vector n, r0;
};

#endif /* Plane_hpp */
