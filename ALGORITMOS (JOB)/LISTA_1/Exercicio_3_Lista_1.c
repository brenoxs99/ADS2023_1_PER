#include <stdio.h>

int main()
{
    float a, b, res;

    printf("Digite 2 valores para calcular a media aritmetica: ");
    scanf("%f %f", &a, &b);

    res = (a * b)/2;

    printf("A media aritmetica de (A) e (B) e de: %.2f", res);
}