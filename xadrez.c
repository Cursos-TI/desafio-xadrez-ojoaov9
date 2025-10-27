#include <stdio.h>

int main() {
    // Quantidade de casas que o Cavalo deve se mover
    int movimentosBaixo = 2;     // Duas casas para baixo
    int movimentosEsquerda = 1;  // Uma casa para a esquerda
    
    // --- Movimento do Cavalo ---
    printf("\nMovimento do Cavalo:\n");

    // Primeiro, o cavalo move duas casas para baixo
    for (int i = 0; i < movimentosBaixo; i++) {
        printf("Baixo\n");
    }

    // Depois, move uma casa para a esquerda
    int j = 0;
    while (j < movimentosEsquerda) {
        printf("Esquerda\n");
        j++;
    }

    // --- Explicação do movimento em L ---
    // O cavalo move-se 2 casas em uma direção (vertical)
    // e 1 casa em outra direção perpendicular (horizontal)
    // formando o movimento em "L".

    return 0;
}
