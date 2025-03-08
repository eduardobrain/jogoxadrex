#include <stdio.h>

// Função recursiva para o movimento da Torre (direita)
void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

// Função recursiva para o movimento do Bispo (diagonal: cima e direita)
void moverBispoRecursivo(int passos, int atual) {
    if (atual > passos) return;
    printf("Cima, Direita\n");
    moverBispoRecursivo(passos, atual + 1);
}

// Função com loops aninhados para o Bispo
void moverBispoLoops(int passos) {
    for (int i = 1; i <= passos; i++) {
        for (int j = 1; j <= 1; j++) {  // Loop interno para o movimento horizontal
            printf("Cima, Direita\n");
        }
    }
}

// Função recursiva para o movimento da Rainha (esquerda)
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

// Função para o movimento do Cavalo (2 casas para cima, 1 para a direita)
void moverCavalo() {
    for (int i = 1; i <= 2; i++) {
        printf("Cima\n");
    }
    
    for (int j = 1; j <= 1; j++) {
        if (j == 1) {
            printf("Direita\n");
        }
    }
}

int main() {
    printf("Movimento da Torre:\n");
    moverTorre(5);
    
    printf("\nMovimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(5, 1);

    printf("\nMovimento do Bispo (Loops Aninhados):\n");
    moverBispoLoops(5);
    
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);
    
    printf("\nMovimento do Cavalo:\n");
    moverCavalo();
    
    return 0;
}
