#include <stdio.h>

/*
Uma empresa decidiu sortear brindes na entrada de uma festa. Como não há E
brinde para todos, serão premiados apenas os primeiros convidados cujo mês
de aniversário é divisor do dia do aniversário. Escreva um programa em C para
controlar a distribuição de brindes. Inicialmente o programa deve receber o
número de brindes que serão distribuídos. Em seguida, cada convidado que
ingressar na festa deve informar o dia e o mês do seu aniversário. Não precisa
Validaressas datas, ou seja, assuma que o usuário sempre digitará valores
corretos. Se o convidado tem direito ao brinde, o sistema deve exibir a
mensagem “PARABENS”. Quando não há mais brindes para distribuir, o sistema
deve exibir a mensagem “PROMOÇÃO ENCERRADA”, informar a quantidade de
pessoas que não receberam o brinde enquanto a promoção estava ativa e ser encerrado.

Autor: Guilherme Oliveira Desidério
Data 15/03/2022
*/

int main()
{
	int brindes, dia, mes, cont = 0;
	
	printf("Digite o numero de brindes que serao dstribuidos: \n");
	scanf("%d", &brindes);
	
	while(brindes > 0){
		printf("Digite o dia e o mes do seu aniversario: \n");
		scanf("%d%d", &dia, &mes);
		
		if(dia % mes == 0){
			printf("PARABENS!\n");
			brindes--;
		}
		else
			cont++;
	}
	printf("PROMOCAO ENCERRADA!\n");
	printf("%d pessoas ficaram sem brinde\n", cont);
	return 0;
}