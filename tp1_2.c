#include <stdio.h>

int cuadradoNum(int num); 
void procedCuadrado(int num);
void valorYdirec(int x);
void invertir(int a, int b);
void ordenar(int a, int b);

int main() {

    int a, b, c;
    printf("Ingrese a\n");
    scanf("%d", &a);
    printf("Ingrese b\n");
    scanf("%d", &b);
    c = cuadradoNum(a);
    printf("\nEl cuadrado de %d es %d \n", a, c);
    procedCuadrado(a);
    valorYdirec(a);
    invertir(a, b);
    ordenar(a, b);
}


//FUNCIONES 

int cuadradoNum(int num) 
{
    return num * num;
} 

void procedCuadrado(int num)
{
    printf("\nEl cuadrado de %d es : %d\n", num, num * num);
    return;
} 

void valorYdirec(int x) 
{
    printf("\nValor de la variable: %d", x);
    printf("\nDireccion de la variable: %p",&x);
}

void invertir(int a, int b) 
{
    int aux = a;
    a = b;
    b = aux;
    printf("\nValor de a = %d \n Valor de b = %d \n", a, b);
    return;
}

void ordenar(int a, int b)
{
    int aux = a;
    if (a<b || a==b )  {
    printf("\nValor de a = %d \n Valor de b = %d\n", a, b);
    } else if (b < a )
    {
    a = b;
    b = aux;
    printf("\nValor de a = %d \n Valor de b = %d\n", a, b);

    }  
}