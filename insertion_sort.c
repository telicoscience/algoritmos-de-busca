//Algoritmo de ordenação insertion sort 
//Professor Télico Oliveira

# include <stdio.h> 


int vetor[60] = {3, 5, 2, 1, 0, 4}; 
//cria uma função para o insertion sort
int insertionSort(int arr[], int size){
    int i, j, key;
    for (i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int size){
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int  main(){
    
  
    insertionSort(vetor, 6);
    printArray(vetor, 6);
}
