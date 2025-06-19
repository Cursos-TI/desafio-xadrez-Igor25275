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
    int fora, dentro;
    char letra;

    for (fora = 1; fora <= 5; fora++)
    {
        for (dentro = 1; dentro <= 5; dentro++)
        {
            printf("%d", fora);

        }
        
        printf("\n");
    }
    
    
    /*
    Implementação de Movimentação da Torre
    Mover 5 casas para a direita
    */
    printf("\n\nMovimento Torre.\n");

    int torre = 1;

    while (torre <= 5)
    {   
        // andar 5 casas para a direita
        // Inico 1 - fim 5.
        printf("[%d]", torre);

        torre++;
    }
    

    /*
    Implementação de Movimentação da Rainha
    Mover oito casas para a esquerda
    */ 
    printf("\n\nMovimento Rainha.\n");

    for (int rainha = 8; rainha >= 1; rainha--)
    {   
        // andar 8 casas para a direita
        //inicio 1 - fim 8.
        printf("[%d]", rainha);
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("\n\nMovimento Cavalo.\n");
    int i, j;

    for ( i = 1; i < 2; i++)
    {
        j = 1;
        while (j <= 2)
        {
            printf("Cima.\n");
            j++;
        }
        
        printf("Direita.\n");
    }
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
