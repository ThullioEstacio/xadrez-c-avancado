#include <stdio.h>

// Constantes para o número de movimentos
#define MOVIMENTOS_TORRE 4
#define MOVIMENTOS_BISPO 4
#define MOVIMENTOS_RAINHA 8
#define MOVIMENTOS_CAVALO 8

// Função recursiva para movimento da Torre
void moverTorre(int casas) {
    if (casas <= 0) return; // Caso base
    
    printf("Direita\n"); // Movimento para a direita
    moverTorre(casas - 1); // Chamada recursiva
}

// Função recursiva para movimento do Bispo (diagonal superior direita)
void moverBispo(int casas) {
    if (casas <= 0) return; // Caso base
    
    printf("Diagonal Superior Direita\n");
    moverBispo(casas - 1); // Chamada recursiva
}

// Função recursiva para movimento da Rainha (combina torre e bispo)
void moverRainha(int casas) {
    if (casas <= 0) return; // Caso base
    
    // Movimento como torre (horizontal)
    printf("Direita (Rainha)\n");
    
    // Movimento como bispo (diagonal)
    printf("Diagonal Inferior Direita (Rainha)\n");
    
    moverRainha(casas - 1); // Chamada recursiva
}

// Função para movimento complexo do Cavalo (em L)
void moverCavalo() {
    // Loop complexo para simular movimento em L
    for (int i = 0; i < 2; i++) { // Duas casas para cima
        for (int j = 0; j < 1; j++) { // Uma casa para direita
            if (i == 1 && j == 0) {
                printf("Movimento em L completo\n");
                continue; // Pula para próxima iteração
            }
            printf("Movendo Cavalo: ");
            if (i < 1) printf("Cima\n");
            else printf("Direita\n");
        }
    }
}

// Função para movimento do Bispo com loops aninhados
void moverBispoComLoops() {
    // Loop externo para movimento vertical
    for (int i = 0; i < 4; i++) {
        // Loop interno para movimento horizontal
        for (int j = 0; j < 4; j++) {
            if (i == j) { // Apenas nas diagonais
                printf("Bispo movendo para diagonal %d,%d\n", i+1, j+1);
                break; // Sai do loop interno após cada movimento diagonal
            }
        }
    }
}

int main() {
    printf("Movimento da Torre (recursivo):\n");
    moverTorre(MOVIMENTOS_TORRE);
    printf("\n");
    
    printf("Movimento do Bispo (recursivo):\n");
    moverBispo(MOVIMENTOS_BISPO);
    printf("\n");
    
    printf("Movimento da Rainha (recursivo):\n");
    moverRainha(MOVIMENTOS_RAINHA);
    printf("\n");
    
    printf("Movimento do Cavalo (loops complexos):\n");
    moverCavalo();
    printf("\n");
    
    printf("Movimento do Bispo com loops aninhados:\n");
    moverBispoComLoops();
    printf("\n");
    
    return 0;
}
