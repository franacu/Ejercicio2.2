#include <stdio.h>
#include<math.h>
typedef struct punto
{
    int x,y,z;

}Punto;

void prod_vectorial(struct punto punto1, struct punto punto2);
void suma(struct punto punto1, struct punto punto2);
float distancia(struct punto punto1, struct punto punto2);

int main ()
{
    struct punto p1={1,2,2};
    struct punto p2={3,4,4};
    prod_vectorial(p1,p2);
    suma(p1,p2);
    distancia(p1,p2);
    return 0;
}
void prod_vectorial(Punto punto1,Punto punto2)
{
    Punto r;
    r.x=punto1.y * punto2.z - punto1.z * punto2.y;
    r.y = punto1.z * punto2.x - punto1.x * punto2.z;
    r.z = punto1.x * punto2.y - punto1.y * punto2.x;
    printf("El producto vectorial es:(%d,%d,%d)\n",r.x,r.y,r.z);
}
void suma(Punto punto1,Punto punto2)
{
    Punto r;
    r.x=punto1.x+punto2.x;
    r.y=punto1.y+punto2.y;
    r.z=punto1.z+punto2.z;
    printf("La suma es:(%d,%d,%d)\n",r.x,r.y,r.z);
}

float distancia(Punto punto1,Punto punto2) {
    float r1, r2;
    r1 = sqrt(pow(punto1.x, 2) + pow(punto1.y, 2) + pow(punto1.z, 2));
    r2 = sqrt(pow(punto2.x, 2) + pow(punto2.y, 2) + pow(punto2.z, 2));
    printf("La distancia en 1 es:%f\n", r1);
    printf("La distancia en 2 es:%f\n", r2);
}