#include <stdio.h>

int main() {
    // tabuleiro 10x10 inicializado com 0 (água)
    int tabuleiro[10][10] = {0};
    
    //navio horizontal: linha 2, coluna 3
    for (int j = 3; j < 6; j++) {
        tabuleiro[2][j] = 3;
    }
    
    //navio vertical: linha 5, coluna 7
    for (int i = 5; i < 8; i++) {
        tabuleiro[i][7] = 3;
    }
    
    //mostra o tabuleiro com letras e numeros
    printf("Tabuleiro de Batalha Naval:\n");
    
    // imprime o cabeçalho com letras (de A até J)
    printf("   ");
    for (char c = 'A'; c <= 'J'; c++) {
        printf("%c ", c);
    }
    printf("\n");
    
    // imprime cada linha com número no início
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i);  // numero da linha com 2 digitos
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
