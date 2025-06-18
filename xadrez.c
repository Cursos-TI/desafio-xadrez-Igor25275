#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças

    /*
    Implementação de Movimentação do Bispo
    Mover 5 casas na diagonal para cima e a direita 
    */ 
    printf("\nMovimento Bispo.\n\n");

    int bispo = 0;

    do
    {
        printf("Cima, direita.\n");
        bispo++;

    } while (bispo < 5);
    
    /*
    Implementação de Movimentação da Torre
    Mover 5 casas para a direita
    */
    printf("\nMovimento Torre.\n\n");

    int torre = 0;

    while (torre < 5)
    {
        printf("Direita.\n");

        torre++;
    }
    

    /*
    Implementação de Movimentação da Rainha
    Mover oito casas para a esquerda
    */ 
    printf("\nMovimento Rainha.\n\n");

    for (int rainha = 0; rainha < 8; rainha++)
    {
        printf("Esquerda.\n");
    }
    
    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
