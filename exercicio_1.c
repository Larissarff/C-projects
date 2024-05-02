#include <stdio.h> // Incluí as bibliotecas.
#include <stdlib.h>

void main(){  // Iniciando a função main (principal)
	
	float valor_Celsius, valor_Fahrenheit, valor_Kelvin; // Criando as variáveis no formato float (com casas decimais).
	
	printf("\n\t Insira um valor de temperatura em graus Celsius em formato (ex: 25.5) e saiba o valor em Fahrenheit e em Kelvin \n"); // Indicando para o usuário.
	scanf("\n %f", &valor_Celsius); // Lendo o valor da temperatura em Celsius.
	
	valor_Fahrenheit = (valor_Celsius * 1.8) + 32; // realizando a conversão de Celsius para Fahrenheit
	valor_Kelvin = valor_Celsius + 273; // realizando a conversão de Celsius para Kelvin
	
	printf("\n O valor de %.2f Graus Celsius eh correspondente a %.2f Graus Fahrenheit e %.2f Graus Kelvin \n", valor_Celsius, valor_Fahrenheit, valor_Kelvin);
	// Exibindo o resultado das conversões e o valor inserido, com precisão de duas casas decimais, como foi pedido.
	}
