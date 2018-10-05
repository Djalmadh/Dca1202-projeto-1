#ifndef POLIGONO_H
#define POLIGONO_H
#include "point.h"


class poligono
{
private:
    point vertices [100];
    int n;
public:
     poligono();
    ~poligono();
    void setv(point p);
    void setn(int n);
    void print2(void);
    int getn(void);
    float area();
    void translada(float a ,float b);
    void rotacionar (float x1, float y1, double g);

};

#endif // POLIGONO_H
