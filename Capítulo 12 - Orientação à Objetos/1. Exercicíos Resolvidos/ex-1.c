/*_______________________________________________________________________________

Livro: Fundamentos da Programação de Computadores 3° Edição
Capítulo 3 - Estrutura Sequencial

Exercícios Resolvidos


1.Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números.

_______________________________________________________________________________*/

#include <stdio.h>

int main(void)
{
    // Declaração das variáveis
    int n1, n2, n3, n4, soma;
    // Atribuição das variáveis
    printf("Informe o 1° número: ");
    scanf("%d", &n1);
    printf("Informe o 2° número: ");
    scanf("%d", &n2);
    printf("Informe o 3° número: ");
    scanf("%d", &n3);
    printf("Informe o 4° número: ");
    scanf("%d", &n4);
    soma = n1 + n2 + n3 + n4;
    // Exibe o resultado da soma
    printf("\nA soma entre:\n%d + %d + %d + %d = %d", n1,n2,n3,n4,soma);
    return 0;
}
