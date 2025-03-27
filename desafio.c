#include <stdio.h>

int main() {
    int i;


    printf("Movimento da Torre:\n");
    for (i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("\n");


    printf("Movimento do Bispo:\n");
    i = 0;
    while (i < 5) {
        printf("Cima, Direita\n");
        i++;
    }
    printf("\n");


    printf("Movimento da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < 8);
    printf("\n");
    
    return 0;
}
