#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"

class Retangulo : public poligono
{
    float x, y, largura, altura;

public:
    Retangulo(float _x, float _y, float _largura, float _altura);

};

#endif // RETANGULO_H
