#include <stdio.h>

int main()
{
    float a, b, SOMA, SUB, PRODUT, DIV;

    printf("Digite 2 valores para calcular a: SOMA, SUBTRACAO, O PRODUTO E A DIVISAO: ");
    scanf("%f %f", &a, &b);

    SOMA = a + b;
    SUB = a - b;
    PRODUT = a * b;
    DIV = a / b;

    printf("Resultado SOMA: %.2f\nResultado SUBTRACAO: %.2f\nResultado PRODUTO: %.2f\nResultado DIVISAO: %.2f\n",SOMA, SUB, PRODUT, DIV);
}