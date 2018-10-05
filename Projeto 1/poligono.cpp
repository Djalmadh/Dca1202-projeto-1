#include "poligono.h"
#include <iostream>
#include <math.h>

using namespace std;

poligono::poligono()
{
//cout<<"Construtor\n";
}

poligono::~poligono()
{

}

void poligono::setv(point p)
{
    float x, y;
for(int i=0; i<n ; i++)
{

    cin>>x>>y;
    p.setxy(x,y);
       vertices[i]= p;
}

}

void poligono::setn(int _n)
{
    n=_n;
}

int poligono::getn()
{
    return n;
}


void poligono::print2()
{
    for (int i=0;i<=n;i++)
    {
        if(i!=n)
        {
        cout<<"("<<vertices[i].getx()<<","<<vertices[i].gety()<<") ->";
        }
        else
        {
            cout<<"("<<vertices[0].getx()<<","<<vertices[0].gety()<<")\n";
        }
    }
}


float poligono::area()
{
    float aux=0,aux2=0;
    for (int i=0;i<=n;i++)
    {
        if(i!=n)
        {
          aux=aux+vertices[i].getx()*vertices[i+1].gety();
          aux2=aux2+vertices[i].gety()*vertices[i+1].getx();
        }
        else
        {
            aux=aux+vertices[i-1].getx()*vertices[0].gety();
            aux2=aux2+vertices[i-1].gety()*vertices[0].getx();
        }
    }

    return abs((aux-aux2)/2);
}

void poligono::translada(float _a, float _b)
{
    for (int i=0; i<n;i++)
    {

        vertices[i].translada(_a, _b);

    }
}

void poligono::rotacionar(float x1, float y1, double g)
{
point p[100], aux[100], p2[100];
g=(g/180)*3.141592654;

for(int i=0; i<n; i++)
{
    aux[i].setx((vertices[i].getx()-x1));
    aux[i].sety((vertices[i].gety()-y1));
}

for(int i=0; i<n; i++)
{
    p2[i].setx((aux[i].getx()*cos(g))-(aux[i].gety()*sin(g)));
    p2[i].sety((aux[i].getx()*sin(g))+(aux[i].gety()*cos(g)));
}

for(int i=0; i<n; i++)
{
    p[i].setx((p2[i].getx()+x1));
    p[i].sety((p2[i].gety()+y1));

}

for(int i=0; i<n; i++)
{
    vertices[i].setx(p[i].getx());
    vertices[i].sety(p[i].gety());
}

}
