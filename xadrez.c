#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    // Nível Novato - Movimentação das Peças

    int torre = 1, bispo = 1, rainha = 1, cavalo = 1;

    // Implementação de Movimentação do Bispo
    
    do {
            printf("movendo Bispo %d casa para cima/direita.\n", bispo);
            bispo++;
        } while (bispo <= 5);
        printf("Aguarde a proxima jogada...\n");

    // Implementação de Movimentação da Torre
    
    while (torre <= 5)
            {
                printf("movendo torre %d casa para direita.\n", torre);
                torre++;
            }
        printf("Aguarde a proxima jogada...\n");

    // Implementação de Movimentação da Rainha
    
    for (rainha = 1; rainha <= 8; rainha++) {
            printf("movendo Rainha %d Casa para esquerda.\n", rainha);
        }
        printf("Aguarde a proxima jogada...\n");

    // Nível Aventureiro - Movimentação do Cavalo
    
    while (cavalo--)
        {
            for (int c = 1; c < 3; c++)
            {
                printf("Cavalo %d casa a baixo\n", c);
            }
            printf("Cavalo casa a esquerda\n");
        }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
