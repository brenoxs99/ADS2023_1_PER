#include <stdio.h>

int main()
{
    int cod_peca, quant_peca;
    float valor_peca, total_peca;

    printf("Digite o codigo da peca: ");
    scanf("%d", &cod_peca);

    printf("Digite o valor da peca: ");
    scanf("%f", &valor_peca);

    printf("Digite a quantidade de pecas em estoques: ");
    scanf("%d", &quant_peca);

    total_peca = quant_peca * valor_peca;

    printf("\nA peca com o codigo %d, tem um valor total de: %.2f\n", cod_peca, total_peca);
}