#include "pilha.h"

int main () {
    t_pilha p1;
    struct pilha p2;
    int capacidade;
    printf ("digite a capacidade da pilha 1: ");
    scanf ("%d", &capacidade); //& - referencia
    constroi_pilha (capacidade, &p1);
    printf("digite a capacidade da pilha 2: ");
    scanf ("%d", &capacidade);
    constroi_pilha (capacidade, &p2); 

    return 0;
}
