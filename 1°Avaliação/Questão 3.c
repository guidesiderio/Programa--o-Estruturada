#include <stdio.h>

/*
Uma prefeitura fez uma pesquisa com alguns de seus funcionários coletando dados 
sobre idade(obrigue que o usuário digite apenas um dos valores de 1 a 4: 
1 - até 24 anos, 2 - de 25 a 39 anos, 3 - de 40 a 50 anos, 4 - 51 anos ou mais)
e o salário. A entrada de dados deve terminar quando o usuário digitar um número 
negativo para o salário. A prefeitura deseja saber a média dos salários das pessoas 
que possuem 51 anos ou mais.

Autor: Guilherme Oliveira Desidério
Data: 15/03/2022
*/
 
int main()
{
	int idade, x, total = 0, cont51 = 0;
	float salario, media;
	
	
	do{
		do{
			printf("Digite a sua faixa etaria: 1 - ate 24 anos, 2 - de 25 a 39 anos, 3 - de 40 a 50 anos, 4 - 51 anos ou mais\n");
			scanf("%d", &idade);
		}while(idade < 1 || idade > 4);
		
		printf("Digite o seu salario: \n");
		scanf("%f", &salario);
		
		if(idade == 4 && salario >= 0){
			total += salario;
			cont51++;
			x = 1;
		}
		else
			x = 1;
		
		if(salario < 0)
			x = 0;
		
	}while(x == 1);
	
	if(cont51 != 0){
		media = total / cont51;
		printf("A media dos salarios das pessoas que possuem 51 anos ou mais eh: R$ %.2f\n", media);
	}
	else
		printf("Ninguem na faixa etaria 4\n");
	return 0;
}
