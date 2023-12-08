/*_______________________________________________________________________________

Livro: Fundamentos da Programação de Computadores 3° Edição
Capítulo 3 - Estrutura Sequencial

Exercícios Resolvidos


1. Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números.

_______________________________________________________________________________*/

#include <stdio.h>

int main(void) {
    // Declaração das variáveis
    int n1, n2, n3, n4, soma;

    // Solicita os números ao usuário
    printf("Informe o 1° número: ");
    scanf("%d", &n1);

    printf("Informe o 2° número: ");
    scanf("%d", &n2);

    printf("Informe o 3° número: ");
    scanf("%d", &n3);

    printf("Informe o 4° número: ");
    scanf("%d", &n4);

    // Calcula a soma
    soma = n1 + n2 + n3 + n4;

    // Exibe o resultado da soma
    printf("\nA soma dos números %d, %d, %d e %d é igual a: %d\n", n1, n2, n3, n4, soma);

    return 0;
}
