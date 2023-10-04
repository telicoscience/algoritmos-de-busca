#include<stdio.h> 
#include<stdlib.h> 

static void intercala(int p, int q, int r, int* lista)
{
    int *w; 
    w = malloc ((r - p) * sizeof(int)); 
    int i = p, j = q; 
    int k = 0; 
    while (i < q && j < r) {
        if (lista[i] <= lista[j])  
            w[k++] = lista[i++];
        else 
            w[k++] = lista[j++]; 
    }
    while (i < q) 
        w[k++] = lista[i++];
    while (j < r) 
        w[k++] = lista[j++];  
    for (i = p; i < r; ++i) 
        lista[i] = w[i - p]; 
    free(w); // Libere a memória alocada para 'w'
}

void mergesort(int p, int r, int v[])
{    
    if (p < r - 1) {
        int q = (p + r) / 2;
        mergesort(p, q, v); 
        mergesort(q, r, v); // Corrigido para 'q' em vez de 'p'
        intercala(p, q, r, v); 
    }
}

int main() 
{
    int vetor[6] = {5, 4, 3, 2, 1, 0}; 
    int i;

    printf("\n Imprimindo o vetor desordenado: \n"); 
    for (i = 0; i < 6; i++) {
        printf("%d ", vetor[i]); 
    }

    // A PARTIR DAQUI, VAMOS CHAMAR AS FUNÇÕES DO ALGORITMO MERGE SORT
    mergesort(0, 6, vetor); 
    printf("\n Imprimindo o vetor ordenado: \n "); 
    for (i = 0; i < 6; i++) {
        printf("%d ", vetor[i]); 
    }

    printf("\n"); 
    return 0; 
}
