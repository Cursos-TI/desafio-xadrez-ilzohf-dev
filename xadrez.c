#include <stdio.h>

    // função movimentação bispo

    void recursivoBispo (int casasBispo){        
        if (casasBispo > 0){
            recursivoBispo(casasBispo - 1);
            printf("movendo Bispo %d casa para cima/direita.\n", casasBispo);            
        }
    }
    // função movimentação torre

    void recursivoTorre (int casasTorre){
        if (casasTorre > 0){
            recursivoTorre(casasTorre - 1);
            printf("movendo torre %d casa para direita.\n", casasTorre); 
        }
    }
    // função movimentação rainha
    void recursivoRainha (int casasRainha){
        if (casasRainha > 0){
            recursivoTorre(casasRainha - 1);
            printf("movendo torre %d casa para Esquerda.\n", casasRainha); 
        }
    }

int main() {

    // Nível Novato - Movimentação das Peças
    int torre, bispo, rainha, cavalo = 1;

    // Implementação de Movimentação do Bispo

        printf("Digite a quantidade de casas para movimentar o bispo: ");
        scanf("%d", &bispo);
        recursivoBispo(bispo);

        printf("Aguarde a proxima jogada...\n");

    // Implementação de Movimentação da Torre

        printf("Digite a quantidade de casas para movimentar a torre: ");
        scanf("%d", &torre);
        recursivoTorre(torre);

        printf("Aguarde a proxima jogada...\n");
            
    // Implementação de Movimentação da Rainha
    
        printf("Digite a quantidade de casas para movimentar a rainha: ");
        scanf("%d", &rainha);
        recursivoRainha(rainha);

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
