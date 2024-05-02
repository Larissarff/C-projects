#include <stdio.h>
#include <stdlib.h>

void ordenarVetor(int array[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (array[j] > array[j+1]) {
                // Troca os elementos se estiverem fora de ordem
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int main(){
	
	int tamanho;
	
	printf("\n\t Digite o tamanho do seu array : ");
	scanf("%d", &tamanho);
	
	if(tamanho <= 0){ // Corrigindo o operador aqui
	    printf("\n Numero deve ser maior que 0 "); // Corrigindo a mensagem de erro
	    return 1;	
	}
	
	int vetor[tamanho];
	printf("Digite %d numeros inteiros:\n", tamanho);
	 
	int i;
    for ( i = 0; i < tamanho; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
	
	ordenarVetor(vetor, tamanho);
	
	printf("\n Exibindo vetor em ordem crescente: \n");
	
	int cont;
	for(cont =0; cont <tamanho; cont++){
		printf("%d ", vetor[cont]); // Corrigindo a leitura e exibição do vetor
	}
	printf("\n"); // Adicionando uma nova linha no final
	
	return 0;
}
