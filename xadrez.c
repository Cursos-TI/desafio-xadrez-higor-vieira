#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    //definindo as variáveis   
    int b = 1;
    int t = 1;

   
    // Implementação de Movimentação do Bispo
   
    //Solução para o movimento do Bispo:
    printf("movimento de peças de xadrez: Bispo\n");
    
    do {
        printf("direita, cima\n");
        b++;
    } while (b <= 5);


    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    
//Solução para o movimento da Torre:    
    printf("movimento de peças de xadrez: Torre\n");
    
    while (t <= 5) {
        printf("direita\n");
        t++;
    }
  
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    
 //Solução para o movimento da Rainha:
    printf("movimento de peças de xadrez: Rainha\n");  
    
    for (int r = 1; r <= 8; r++) {
        printf("Esquerda\n");
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    
 //Solução para o movimento do Cavalo:
    printf("movimento de peças de xadrez: Cavalo\n");  
    
    for (int c1 = 1; c1 <= 1; c1++) {
        int c2 = 1;
        while (c2 <= 2) {
            printf("Baixo\n");
            c2++;
        }
        printf("Esquerda\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
