#include <stdio.h> // Inclu� as bibliotecas.
#include <stdlib.h>

void main(){
	
	int opcao;
	float quilo_hora, milha_hora;
	
	printf("\n\t Digite uma das opcoes abaixo (O numeral correspondente): \n (1) Transformar KPH para MPH \n (2) Transformar MPH para KPH \n\n");
	scanf("%d", &opcao);
	printf("\n ");
	
	switch (opcao){
		case 1:
			printf("\n\t Insira o valor de KPH (ex: 2.45)\n");
			scanf("%f", &quilo_hora);
			milha_hora = (quilo_hora * 0.621371);
			printf("\n o valor correspondente a %.2f Quilometros por Hora em Milhas por Hora eh: %.2f ", quilo_hora, milha_hora);
			break;
		case 2: 
			printf("\n\t Insira o valor de MPH (ex: 2.45)\n");
			scanf("%f", &milha_hora);
			quilo_hora = (milha_hora * 1.60934);
			printf("\n o valor correspondente a %.2f  Milhas por Hora em Quilometros por Hora eh: %.2f ", milha_hora, quilo_hora);
			break;
		default:
			printf("\n\t Opcao Incorreta \n");
			break;
	}
}
