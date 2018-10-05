#include <iostream>
#include "point.h"
#include "poligono.h"
#include "retangulo.h"
#include <stdlib.h>

using namespace std;

int main()
{
    point p;
    poligono po;
   // Retangulo ret;

    int n;

    cin>>n;
    po.setn(n);
    if(n<=2)
    {
        exit(0);
    }

    po.setv(p);


    po.print2();

    cout<<"area= "<< po.area()<<" n= "<<po.getn()<<endl<<endl<<"transladado= ";
    po.translada(1,1);
    po.print2();

   // po.print2(n);

}

