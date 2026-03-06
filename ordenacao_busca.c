#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int le_tamanho_vetor () {
    int t;
    printf("Digite o tamanho do vetor: ");
    scanf ("%d", &t);
    return t;
}

void le_vetor (int *v, int tamanho){
    for (int i=0; i<tamanho; i++){
        printf ("Digite o valor da %da posicao: ", i+1);
        scanf ("%d", &v[i]);
    }
} 

void mostra_vetor (int *v, int tamanho) {
    printf ("\nVeja seu vetor:\n");
    for (int i=0; i<tamanho; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

void preenche_vetor (int *v, int tamanho) {
    for (int i=0; i<tamanho; i++) {
        v[i] =  rand();
    }
}

int main () {
    srand(time(0));
    int tamanho = le_tamanho_vetor();
    int *v = (int *) malloc (tamanho * sizeof(int));
    //le_vetor (v, tamanho);
    preenche_vetor (v, tamanho);
    mostra_vetor (v, tamanho);
    
    return 0;
}


