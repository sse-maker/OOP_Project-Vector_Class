//
//  Line.hpp
//  Vector_Class
//
//  Created by 세광 on 2021/08/11.
//

#ifndef Line_hpp
#define Line_hpp

#include <string>
#include <cmath>
#include "Vector.hpp"

#define Point Vector

class Line {
public:
    Line();
    Line(const Point& po1, const Point& po2);
    ~Line();
    
    Point ProjectTo(const Point& po);
    std::string ToString();
    
private:
    Vector l, l0;
};

#endif /* Line_hpp */
