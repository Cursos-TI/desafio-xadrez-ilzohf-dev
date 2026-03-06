#include <stdio.h>

int main() {
    // Variáveis independentes para cada nível
    for (int i = 2; i <= 1; i++) {       // Loop Externo
        for (int j = 1; j <= 2; j++) {   // Loop Interno
            printf("i=%d, j=%d | ", i, j);
        }
        printf("\n");
    }
    return 0;
}
