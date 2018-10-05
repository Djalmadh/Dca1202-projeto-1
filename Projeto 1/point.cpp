#include "point.h"
#include <iostream>
#include <math.h>

using namespace std;


point::point()
{
   // cout<<"Construtor\n";

}

point::~point()
{
   // cout<<"Destrutor\n";

}

void point::setx(float _x)
{
    x=_x;
}

void point::sety(float _y)
{
    y=_y;
}

void point::setxy(float _x, float _y)
{
    x=_x;
    y=_y;
}

void point::add(point p)
{
    x=x+p.getx();
    y=y+p.gety();
}

void point::sub(point p)
{
    x=x-p.getx();
    y=y-p.gety();
}

float point::norma(point p)
{
    return sqrt(p.getx()*p.getx()+p.gety()*p.gety());
}

void point::translada(float a, float b)
{
    x=x+a;
    y=y+b;
}

float point::getx(void)
{
    return x;
}

float point::gety(void)
{
    return y;
}

void point::print()
{
    cout<<"("<<x<<","<<y<<")"<<endl;
}

