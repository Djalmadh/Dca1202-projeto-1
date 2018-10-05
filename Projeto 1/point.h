#ifndef POINT_H
#define POINT_H


class point
{
private:
    float x;
    float y; 
    
public:
     point();
    ~point();
    void setx(float _x);
    void sety(float _y);
    void setxy(float _x, float _y);
    float getx(void);
    float gety(void);
    void add(point p);
    void sub(point p);
    float norma(point p);
    void translada(float a, float b);
    void print();
};

#endif 
