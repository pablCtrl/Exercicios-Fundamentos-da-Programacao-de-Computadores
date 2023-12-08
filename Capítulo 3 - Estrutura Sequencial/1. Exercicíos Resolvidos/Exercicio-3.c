/*_______________________________________________________________________________

Livro: Fundamentos da Programação de Computadores 3° Edição
Capítulo 3 - Estrutura Sequencial

Exercícios Resolvidos


3. Faça um programa que receba três notas e seus respectivos pesos,
calcule e mostre a média ponderada.

_______________________________________________________________________________*/

#include <stdio.h>

int main(void)
{   
    // Declaração das variáveis
    float nota1, nota2, nota3;
    float peso1, peso2, peso3;
    float media_ponderada;
    
    // Entrada de dados pelo usuário
    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Informe o peso da primeira nota: ");
    scanf("%f", &peso1);
    
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
    
    printf("Informe o peso da segunda nota: ");
    scanf("%f", &peso2);
    
    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);
    
    printf("Informe o peso da terceira nota: ");
    scanf("%f", &peso3);
    
    // Calcular a media ponderada
    media_ponderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
    
    // Exibir resultado
    printf("\nA media ponderada é %.2f", media_ponderada);
    
    return 0;
}
