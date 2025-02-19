#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main() {
    int TABULEIRO[LINHAS][COLUNAS] = {0}; 

 

 //vertical   
    int x1 = 2, y1 = 1;
    for (int i = 0; i < 4; i++) {
        TABULEIRO[y1 + i][x1] =3;
    }
 //horizontal
    int x2 = 5, y2 = 3;
    for (int i = 0; i < 4; i++) {
        TABULEIRO[y2][x2 + i] =3;
    }
 //diagonal1
    int x3 = 0, y3 = 0;
    for (int i = 0; i < 4; i++) {
        TABULEIRO[y3 + i][x3 + i] =3;
    }

 //diagonal2
    int x4 = 6, y4 = 3;
    for (int i = 0; i < 4; i++) {
        TABULEIRO[y4 + i][x4 - i] =3;
    }

   
    printf("Tabuleiro 10x10:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", TABULEIRO[i][j]);
        }
        printf("\n");
    }

    return 0;
}
