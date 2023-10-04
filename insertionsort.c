#include<stdio.h> 
#include<stdlib.h> 

int vetor[6] ={5, 4, 3, 2, 1, 0};
int i; 
int main() 
{
	printf("Posição inicial do vetor: \n"); 
	for (i = 1; i < 6; i++ )
	{	int chave = vetor[i]; 
		int j = i - 1; 
		while (j >= 0 && vetor[j] > chave)
				{
					vetor[j + 1] = vetor[j];
					j = j - 1; 
					vetor[j + 1] = chave;  
				}
		
	}
	printf("\n"); 
	for (i = 0; i < 6; i ++ )
	{
		printf("%d ", vetor[i]); 	
	}
	return 0;  
}
