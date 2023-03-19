#include <stdio.h>

int main() {

    printf("Hola mundo\n");    
    int num;
    int *p_num = &num;
    float tama;
    printf("Ingrese el numero\n");    
    scanf("%d", &num);
    printf("\nContenido del puntero: %d", *p_num);
    printf("\nDireccion de memoria almacenada en el puntero: %p", p_num);
    printf("\nDireccion de memoria de la variable: %p", &num);
    printf("\nDireccion de memoria del puntero: %p\n", &p_num);
    tama = sizeof(num);
    printf("Tamanio que ocupa: %.2f", tama);
}

