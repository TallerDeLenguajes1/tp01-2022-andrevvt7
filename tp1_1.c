#include <stdio.h>

int main(){

    int num = 7, *pnum;
    pnum = &num;

    printf("Hola mundo\n\n");

    printf("Contenido del puntero: %d\nDirecci%cn de memoria almacenada por el puntero: %p\nDirecci%cn de memoria de la variable: %p\nDirecci%cn de memoria del puntero: %p\nTama%co de memoria utilizado por la variable: %d\n\n", *pnum, 162, pnum, 162, &num, 162, &pnum, 164, sizeof(num));

    return 0;
}