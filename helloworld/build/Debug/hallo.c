#include <stdio.h>

// ======================================================
// FUNÇÃO RECURSIVA DA TORRE
// Move a Torre para a direita
// ======================================================
void moverTorre(int casas) {

    // Caso base:
    // quando não houver mais casas para mover
    if (casas <= 0) {
        return;
    }

    printf("Direita\n");
    printf("Esquerda\n");
    printf("Cima\n");
    printf("Baixo\n");

    // Chamada recursiva
    moverTorre(casas - 1);
}

// ======================================================
// FUNÇÃO RECURSIVA DA RAINHA
// Move a Rainha para a esquerda
// ======================================================
void moverRainha(int casas) {

    if (casas <= 0) {
        return;
    }

    printf("Esquerda\n");
    printf("Direita\n");
    printf("Cima\n");
    printf("Baixo\n");
    printf("Diagonal Esq Cima\n");
    printf("Diagonal Dir Cima\n");
    printf("Diagonal Esq Baixo\n");
    printf("Diagonal Dir Baixo\n");
    

    moverRainha(casas - 1);
}

// ======================================================
// FUNÇÃO RECURSIVA DO BISPO
// Também usa LOOPS ANINHADOS
// Movimento diagonal: cima + direita
// ======================================================
void moverBispo(int casas) {

    if (casas <= 0) {
        return;
    }

    // Loop externo = vertical
    for (int vertical = 0; vertical < 1; vertical++) {

        // Loop interno = horizontal
        for (int horizontal = 0; horizontal < 1; horizontal++) {

            printf("Diagonal Cima\n");
            printf("Diagonal Baixo\n");
            printf("Diagonal esquerda\n");
            printf("Diagonal direita\n");
        }
    }

    moverBispo(casas - 1);
}

// ======================================================
// MOVIMENTO DO CAVALO
// Duas casas para cima e uma para direita
// Utilizando loops complexos
// ======================================================
void moverCavalo() {

    // Loop externo controla movimento vertical
    for (int vertical = 1, horizontal = 1;
         vertical <= 2 || horizontal <= 1;
         vertical++, horizontal++) {

        // Movimento vertical
        if (vertical <= 2) {
            printf("Cima\n");
        }
         if (vertical <= 2) {
            printf("Baixo\n");
        }

        // Continue evita executar abaixo
        // enquanto ainda sobe
        if (vertical < 2) {
            continue;
        }

        // Movimento horizontal
        if (horizontal <= 1) {
            printf("Direita\n");
        }
         if (horizontal <= 1) {
            printf("Esquerda\n");
        }

        // Encerra após concluir movimento
        break;
    }
}

// ======================================================
// FUNÇÃO PRINCIPAL
// ======================================================
int main() {

    int casasTorre = 5;
    int casasRainha = 8;
    int casasBispo = 5;

    printf("=== MOVIMENTO DA TORRE ===\n");
    moverTorre(casasTorre);

    printf("\n");

    printf("=== MOVIMENTO DO BISPO ===\n");
    moverBispo(casasBispo);

    printf("\n");

    printf("=== MOVIMENTO DA RAINHA ===\n");
    moverRainha(casasRainha);

    printf("\n");

    printf("=== MOVIMENTO DO CAVALO ===\n");
    moverCavalo();

    return 0;
}