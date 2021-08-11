//
//  main.cpp
//  Vector_Class
//
//  Created by 세광 on 2021/08/11.
//

#include <iostream>
#include "Vector.hpp"
#include "Line.hpp"
#include "Plane.hpp"

using namespace std;

int main() {
    Point p1(0, 0, 0);
    Point p2(1, 1, 1);
    
    Point po(6, 4, 5);
    
    Line l1(p1, p2);
    cout << l1.ToString() << endl;
    cout << l1.ProjectTo(po).ToString() << endl;
    
    Point p3(1, 2, 1);
    Plane pl1(p1, p2, p3);
    cout << pl1.ToString() << endl;
    cout << pl1.ProjectTo(po).ToString() << endl;
    
    return 0;
}
