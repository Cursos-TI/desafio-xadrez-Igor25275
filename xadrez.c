#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movimentoTorre(int numero){
    // Irá se mover 'numero' vezes para a direita
    
    if (numero > 0)
    {
        
        movimentoTorre(numero - 1);
        printf("[%d]", numero);
    }
    
}

void movimentoRainha(int num){
    // Irá se mover 'numero' vezes para a esquerda
    if (num > 0)
    {
        printf("[%d]", num);
        movimentoRainha(num - 1);
    }   
    
}


int main() {
    // Nível Novato - Movimentação das Peças

    /*
    Implementação de Movimentação do Bispo
    Mover 5 casas na diagonal para cima e a direita 
    */ 
    printf("\nMovimento Bispo.\n\n");
    
    // Bispo vai andar 5 casas na diagonal para a direita: 
    // inicio 1 - fim 5.
    for(int fora = 5; fora >= 1; fora--)
    {   
        for(int dentro = 1; dentro <= fora; dentro++)
        {
            printf("   ");
        }

        printf("[%d]\n", fora);
    }
    
    
    /*
    Implementação de Movimentação da Torre
    Mover 5 casas para a direita
    */
    printf("\n\nMovimento Torre.\n");

    int quantidadeTorre;

    printf("Quantas casas deseja mover a torre para a direita? ");
    scanf("%d", &quantidadeTorre);

    movimentoTorre(quantidadeTorre);
    

    /*
    Implementação de Movimentação da Rainha
    Mover oito casas para a esquerda
    */ 
    printf("\n\nMovimento Rainha.\n");

    int quantidadeRainha;

    printf("Quantas casas deseja mover a rainha para a esquerda? ");
    scanf("%d", &quantidadeRainha);

    movimentoRainha(quantidadeRainha);

    // Nível Aventureiro - Movimentação do Cavalo
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("\n\nMovimento Cavalo.\n");
    
    // variavel cavalo para andar no 1 ao 3 e variavel 'l' para andar no numero 4 para a direita
    int cavalo = 3, l = 4;

    while (cavalo >= 1)
    {
        printf("[%d]", cavalo);

        while (l == 4)
        {
            printf("[%d]", cavalo + 1);
            // variavel para tornar a sentença falça e repetir o loop apenas 1 vez
            l = 1;
        }
        
        printf("\n");
        cavalo--;

    }
    
    printf("------------------\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
