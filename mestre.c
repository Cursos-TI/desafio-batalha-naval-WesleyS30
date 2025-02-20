#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10


void exibirTabuleiro(int tabuleiro[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}


void aplicarCone(int tabuleiro[LINHAS][COLUNAS], int x, int y) {
    int tamanho = 3; 
    for (int i = 0; i < tamanho; i++) {
        for (int j = -i; j <= i; j++) {
            if (y + i < LINHAS && x + j >= 0 && x + j < COLUNAS) {
                tabuleiro[y + i][x + j] = 1;
            }
        }
    }
}


void aplicarCruz(int tabuleiro[LINHAS][COLUNAS], int x, int y) {
    int tamanho = 2; 
    for (int i = -tamanho; i <= tamanho; i++) {
        if (y + i >= 0 && y + i < LINHAS) {
            tabuleiro[y + i][x] = 1; 
        }
        if (x + i >= 0 && x + i < COLUNAS) {
            tabuleiro[y][x + i] = 1; 
        }
    }
}


void aplicarOctaedro(int tabuleiro[LINHAS][COLUNAS], int x, int y) {
    int tamanho = 2; 
    for (int i = -tamanho; i <= tamanho; i++) {
        for (int j = -(tamanho - (i < 0 ? -i : i)); j <= (tamanho - (i < 0 ? -i : i)); j++) {
            if (y + i >= 0 && y + i < LINHAS && x + j >= 0 && x + j < COLUNAS) {
                tabuleiro[y + i][x + j] = 1;
            }
        }
    }
}

int main() {
    int tabuleiro[LINHAS][COLUNAS] = {0};

   
    printf("Habilidade: Cone\n");
    aplicarCone(tabuleiro, 4, 2);
    exibirTabuleiro(tabuleiro);


    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    printf("Habilidade: Cruz\n");
    aplicarCruz(tabuleiro, 5, 5);
    exibirTabuleiro(tabuleiro);

   
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    printf("Habilidade: Octaedro\n");
    aplicarOctaedro(tabuleiro, 3, 3);
    exibirTabuleiro(tabuleiro);

    return 0;
}
