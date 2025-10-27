#include <stdio.h>

int main() {
    // ==============================
    // Simulação de Movimentação das Peças de Xadrez
    // Torre -> usa for
    // Bispo -> usa while
    // Rainha -> usa do-while
    // ==============================

    // ------------------------------
    // Movimento da Torre
    // ------------------------------
    int casasTorre = 5;
    printf("Movimento da TORRE:\n");

    // Torre anda 5 casas para a direita
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (%d casa)\n", i);
    }

    printf("\n"); // linha em branco para separar as peças

    // ------------------------------
    // Movimento do Bispo
    // ------------------------------
    int casasBispo = 5;
    int contadorBispo = 1;
    printf("Movimento do BISPO:\n");

    // Bispo anda 5 casas na diagonal superior direita
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita (%d casa)\n", contadorBispo);
        contadorBispo++;
    }

    printf("\n"); // separador

    // ------------------------------
    // Movimento da Rainha
    // ------------------------------
    int casasRainha = 8;
    int contadorRainha = 1;
    printf("Movimento da RAINHA:\n");

    // Rainha anda 8 casas para a esquerda
    do {
        printf("Esquerda (%d casa)\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    printf("\nSimulação finalizada!\n");

    return 0;
}
