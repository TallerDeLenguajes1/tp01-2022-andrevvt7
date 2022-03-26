#include <stdio.h>
#include <math.h>

int cuadradoA(int num);
void cuadradoB(int num);
void variableC();
void invertir(int *a, int *b);
void orden(int *a, int *b);

int main(){
    int num = 4, cuadrado, a, b;
    
    cuadrado = cuadradoA(num);
    printf("El cuadrado de %d es: %d\n\n", num, cuadrado);

    cuadradoB(num);
    variableC();

    printf("Invertir los valores entre dos n%cmeros\n", 163);
    printf("Ingrese los valores de a y b\n");
    printf("a = ");
    scanf("%d", &a);
    fflush(stdin);
    printf("b = ");
    scanf("%d", &b);
    fflush(stdin);
    invertir(&a, &b);
    printf("Nuevo valor de a: %d\nNuevo valor de b: %d\n", a, b);

    printf("\nOrdenar de menor a mayor los n%cmeros a y b\n", 163);
    orden(&a, &b);
  
    return 0;
}

int cuadradoA(int num){
    int cuadrado;
    printf("Calcular el cuadrado de %d\n", num);
    cuadrado = pow(num, 2);

    return cuadrado;
}

void cuadradoB(int num){
    int cuadrado;
    printf("Calcular el cuadrado de %d con funci%cn void\n", num, 162);
    cuadrado = pow(num, 2);

    printf("El cuadrado de %d es: %d\n", num, cuadrado);
}

void variableC(){
    int num;
    printf("\nMostrar direcci%cn y contenido de una variable", 162);
    printf("\nIngrese un n%cmero: ", 163);
    scanf("%d", &num);

    printf("Direcci%cn de la variable: %p\nContenido de la variable: %d\n\n", 162, &num, num);
}

void invertir(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void orden(int *a, int *b){
    int aux;
    if(*a > *b){
        invertir(a, b);
    }
    if (*a == *b){
        printf("Los n%cmeros son iguales\n", 163);
    } else {
        printf("Valor menor: %d\nValor mayor: %d", *a, *b);
    }
}