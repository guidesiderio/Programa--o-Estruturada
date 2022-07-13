#include <stdio.h>

/*
Faça um programa em C que informa se UM candidato pode ou não participar de um 
concurso de medidas. Não precisa validar a entrada do usuário, ou seja, assuma 
que o usuário sempre digitará valores corretor. Para participar do concurso o candidato 
deve obedecer as seguintes regras: O candidato deve ter obrigatoriamente entre 18 anos(inclusive) 
e 30 anos(inclusive). Além disso, o candidato deve obedecer pelo menos um dos requisitos:
a) Pesaar mais de 100kg;
b) Medir mais de 2m.

Autor: Guilherme Oliveira Desidério
Data: 15/03/2022
*/

int main()
{
	int idade;
	float peso, altura;
	
	printf("Digite a sua idade: \n");
	scanf("%d", &idade);
	
	if(idade >= 18 && idade <= 30){
		printf("Digite o seu peso e a sua altura: \n");
		scanf("%f%f", &peso, &altura);
		
		if(peso > 100 || altura > 2)
			printf("Voce pode participar!\n");
		else
			printf("Voce nao pode participar!\n");
	}
	else
		printf("Voce nao pode participar!\n");
	return 0;
}