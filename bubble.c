#include <stdio.h> 
#include <cs50.h>

//declaração de variáveis 
int A[8]  = {2, 4, 6, 1, 8, 3, 5, 7}; //vetor com inteiros desordenados 




int main(){
int i, j, z; //contadores que irão percorrer o vetor 
int aux; 
for(i = 0; i<8; i++){
printf("vetor na volta %i:", i + 1);

for (z = 0; z < 8; z++){

	printf("%i ", A[z]); 
} 

printf("\n"); 
	for(j = 1; j<8; j++){

		printf("%i < %i (%i)\n", A[j], A[j-1], A[j]<A[j-1]);
		if(A[j] < A[j-1]){
			aux = A[j]; 
			A[j] = A[j-1]; 
			A[j-1] = aux; 
			
		}
	}
printf("\n"); 


	}

	return 0; 
}
