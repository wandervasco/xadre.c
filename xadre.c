
#include <stdio.h>

// Função recursiva para movimentação da Torre
void moverTorre(int casas, char direcao) {
    if (casas <= 0) return;

    switch (direcao) {
        case 'C':
            printf("Cima\n");
            moverTorre(casas - 1, direcao);
            break;
        case 'B':
            printf("Baixo\n");
            moverTorre(casas - 1, direcao);
            break;
        case 'E':
            printf("Esquerda\n");
            moverTorre(casas - 1, direcao);
            break;
        case 'D':
            printf("Direita\n");
            moverTorre(casas - 1, direcao);
            break;
    }
}

// Função recursiva para movimentação do Bispo
void moverBispo(int casas, int diagonal) {
    if (casas <= 0) return;

    for (int i = 1; i <= casas; i++) {
        if (diagonal == 1) {
            printf("Cima\n");
        } else {
            printf("Baixo\n");
        }

        for (int j = 1; j <= casas; j++) {
            if (diagonal == 1) {
                printf("Direita\n");
            } else {
                printf("Esquerda\n");
            }
        }
    }
}

// Função para movimentação do Cavalo
void moverCavalo() {
    for (int i = 0; i < 2; i++) { // Duas casas para cima
        for (int j = 0; j < 1; j++) { // Uma casa para a direita
            printf("Cima\n");
            printf("Cima\n");
        }
        printf("Direita\n");
    }
}

// Função recursiva para movimentação da Rainha
void moverRainha(int casas, char direcao) {
    if (casas <= 0) return;

    moverTorre(casas, direcao); // Movimento em linha reta
    moverBispo(casas, 1); // Movimento diagonal
}

int main() {
    int casas = 3; // Número de casas a mover

    printf("Movimento da Torre:\n");
    moverTorre(casas, 'C'); // Cima
    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispo(casas, 1); // Diagonal
    printf("\n");

    printf("Movimento do Cavalo:\n");
    moverCavalo(); // Movimento em "L"
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(casas, 'D'); // Direita
    printf("\n");

    return 0;
}