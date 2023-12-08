/*_______________________________________________________________________________

Livro: Fundamentos da Programação de Computadores 3° Edição
Capítulo 3 - Estrutura Sequencial

Exercícios Resolvidos


4. Faça um programa que receba o salário de um funcionário, calcule e mostre
o novo salário, sabendo-se que este sofreu um aumento de 25%.

_______________________________________________________________________________*/

#include <stdio.h>

int main(void)
{   
    // Declaração daa variável
    float salario;
    
    // Entrada de dados pelo usuário
    printf("Informe o salário inicial: ");
    scanf("%f", &salario);
    
    // Calcula o aumento de 25% e exibe o novo salário
    printf("\nO novo salário é de: %.2f", salario * 1.25);
    
    return 0;
}
