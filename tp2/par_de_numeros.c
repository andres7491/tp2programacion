#include <stdio.h>
int main()
{
    int a, b, c;
    printf("ingrese el primer numero:");
    scanf("%d", &a);
    printf("ingrese el segundo numero:");
    scanf("%d", &b);
    c = (b - a) + 1;
    printf("cantidad de numeros:%d", c);

    return 0;
}

// No calculás cuántos números son pares ni la suma de los impares
// la idea era que utilices un for o un while para obtener los resultados