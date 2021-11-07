//Algoritmo selection sort 
#include <stdio.h>
#include <stdlib.h>

//cria um vetor de inteiros aleatórios e depois faz a ordenação 
int vetor[1000];

int main(){
int i, j, k;
int n = 1000; 
//GERA 70 inteiros aleatórios no vetor 
for( i = 0; i < n; i++){
	vetor[i] = rand()%n; 
}


int min, aux;
for (i = 0; i  < n; i++){
	printf("volta %i\n", i + 1); 
	printf("vetor na volta %i:   ", i + 1); 

	for(k = 0; k < n; k++){ //Apenas para imprimir os valores do vetor na volta i + 1
	printf("%i   ", vetor[k]); 		
	}

//vamos atribuir o valor i à posição do menor número no vetor 
min = i; 
for (j= i+1; j < n; j++){
	if(vetor [j] < vetor[min]){// caso isso seja falso, em comparação com qualquer outro valor do vetor, fazemos a troca 
	
		min  = j; 
		
	}
}
	if(i != min){
		aux = vetor[i]; 
		vetor[i] = vetor[min]; 
		vetor[min] = aux; 
	}


printf("\n"); 
}

	return 0; 
}
