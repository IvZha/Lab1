//
//  rectangle.h
//  Lab1
//
//  Created by Админ on 09.09.2018.
//  Copyright © 2018 Admin. All rights reserved.
//

#ifndef rectangle_h
#define rectangle_h
#include "Prototypes.h"

class Rectangle
{
private:
    double x1,x2,y1,y2,o,m;
public:
   // Rectangle(double a,double b,double c,double d) : x1(a),x2(b),y1(c),y2(d) { }
    //  Rectangle():x1(2),x2(4),y1(2),y2(4) { }
   // ~Rectangle();
    Rectangle()
    {
        x1=2;
        x2=4;
        y1=2;
        y2=4;
    }
  //  Rectangle(const Rectangle &obj)
   // {
   //     cout<<"Constructor Copy"<<endl;
   // }
    void input();
    void output();
    void perimetr();
    void diagonal();
    void input2();
};

#endif /* rectangle_h */
