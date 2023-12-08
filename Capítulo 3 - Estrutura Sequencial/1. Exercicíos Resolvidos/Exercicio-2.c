/*_______________________________________________________________________________

Livro: Fundamentos da Programação de Computadores 3° Edição
Capítulo 3 - Estrutura Sequencial

Exercícios Resolvidos


2. Faça um programa que receba três notas, calcule e mostre a média aritmética.

_______________________________________________________________________________*/

#include <stdio.h>

int main(void) {
    // Declaração das variáveis
    float n1, n2, n3, media;

    // Solicita os números ao usuário
    printf("Informe o 1° número: ");
    scanf("%f", &n1);

    printf("Informe o 2° número: ");
    scanf("%f", &n2);

    printf("Informe o 3° número: ");
    scanf("%f", &n3);

    // Calcula a média corretamente usando a divisão por 3.0
    media = (n1 + n2 + n3) / 3.0;

    // Exibe o resultado da média
    printf("\nA média entre os números %.2f, %.2f e %.2f é igual a: %.2f\n", n1, n2, n3, media);

    return 0;
}
