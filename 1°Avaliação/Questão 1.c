#include <stdio.h>

/*
#include <stdio.h>

int main()
{
	int s, k = 1;
	while(k <= 1000){
		s = 0;
		s = s + k;
		k = k + 2;
	}
	printf("a soma e %d \n", s);
	return 0;
}

Faça as mudanças necessárias para o programa funcionar Corretamente.

Autor: Guilherme Oliveira Desidério
Data: 15/03/2022
*/

int main()
{
	int s, k = 1;
	s = 0;
	while(k < 1000){
		s = s + k;
		k = k + 2;
	}
	printf("a soma e %d \n", s);
	return 0;
}