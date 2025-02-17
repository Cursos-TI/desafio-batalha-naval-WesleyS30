#include <stdio.h>

int main() {
  
    int TABULEIRO[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10}, 
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };

    int x = 2, y = 1;     
    int tamanho_vertical = 3;
    int tamanho_horizontal = 3;

    printf("Navio vertical (tamanho %d) posicionado nas coordenadas:\n", tamanho_vertical);
    for (int i = 0; i < tamanho_vertical; i++) {
        if (y + i < 5) { 
            printf("(%d, %d) - Valor: %d\n", y + i, x, TABULEIRO[y + i][x]);
        } else {
            printf("Erro: O navio está fora dos limites do tabuleiro.\n");
            break;
        }
    }

    printf("\nNavio horizontal (tamanho %d) posicionado nas coordenadas:\n", tamanho_horizontal);
    for (int i = 0; i < tamanho_horizontal; i++) {
        if (x + i < 5) { 
            printf("(%d, %d) - Valor: %d\n", y, x + i, TABULEIRO[y][x + i]);
        } else {
            printf("Erro: O navio está fora dos limites do tabuleiro.\n");
            break;
        }
    }

    return 0;
}
