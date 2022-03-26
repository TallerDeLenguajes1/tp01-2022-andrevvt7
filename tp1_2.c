#include <stdio.h>
#include <math.h>

int cuadradoA(int num);
int cuadradoA(int num){
    int cuadrado;
    cuadrado = pow(num, 2);

    return cuadrado;
}

void cuadradoB();
void cuadradoB(){
    int num2, cuadrado;

    printf("Ingrese un n%cmero: ", 163);
    scanf("%d", &num2);
    cuadrado = pow(num2, 2);

    printf("El cuadrado de %d es: %d\n", num2, cuadrado);
}

void variableC();
void variableC(){
    int num;

    printf("\nIngrese un n%cmero: ", 163);
    scanf("%d", &num);

    printf("Direcci%cn de la variable: %p\nContenido de la variable: %d\n\n", 162, &num, num);
}

void invertir(int *a, int *b);
void invertir(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void orden(int *a, int *b);
void orden(int *a, int *b){
    int aux;
    if(*a > *b){
        invertir(a, b);
    }
}

int main(){
    int num, cuadrado, a, b, c, d;
    
    printf("Calcular el cuadrado de un n%cmero con funci%cn que devuelve int\n", 163, 162);
    printf("Ingrese un n%cmero: ", 163);
    scanf("%d", &num);
    fflush(stdin);
    cuadrado = cuadradoA(num);
    printf("El cuadrado de %d es: %d\n\n", num, cuadrado);

    printf("Calcular el cuadrado de un n%cmero con funci%cn void\n", 163, 162);
    cuadradoB();

    printf("\nMostrar direcci%cn y contenido de una variable\n", 162);
    variableC();

    printf("Invertir el orden de dos n%cmeros\n", 163);
    printf("Ingrese los valores de a y b\n");
    printf("a = ");
    scanf("%d", &a);
    fflush(stdin);
    printf("b = ");
    scanf("%d", &b);
    fflush(stdin);
    invertir(&a, &b);
    printf("Valor de a: %d\nValor de b: %d\n", a, b);

    printf("\nOrdenar de menor a mayor dos n%cmeros\n", 163);
    printf("Ingrese los valores de c y d\n");
    printf("c = ");
    scanf("%d", &c);
    fflush(stdin);
    printf("d = ");
    scanf("%d", &d);
    fflush(stdin);
    orden(&c, &d);
    if (c == d){
        printf("Los n%cmeros son iguales\n", 163);
    } else {
        printf("Valor menor: %d\nValor mayor: %d", c, d);
    }

    return 0;
}