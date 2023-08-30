#include <stdio.h>

//AREA DE UM TRIANGULO
int main()
{
    float base, altura, area_tri;

    printf("Digite a base do triangulo: ");
    scanf("%f", &base);

    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura);

    area_tri = (base * altura)/2;

    printf("\nA area do triagulo com as medidas informadas e de: %.2f\n", area_tri);
}