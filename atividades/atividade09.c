//////////////////////////////_1
#include <stdio.h>
#include <stdlib.h>

int main(){
	char nome[30];
	float n1,n2,n3,media;

	printf("Qual o seu nome? > ");scanf("%s", nome);
	printf("Digite a nota da atividade: ");scanf("%f", &n1);
	printf("Digite a nota do trabalho: ");scanf("%f", &n2);
	printf("Digite a nota da prova: ");scanf("%f", &n3);

	media = ((n1 + n2 + n3) / 3);

	if(media >= 6){printf("O aluno %s, foi aprovado na disciplina com %.2f\n",nome, media);}
	else{printf("O aluno %s, foi reprovado na disciplina com %.2f\n",nome,media);}
//////////////////////////////_2

	int idade;
	float peso;

	printf("\nsua idade: ");scanf("%d", &idade);
	printf("seu peso: ");scanf("%f", &peso);

	if(idade <= 17){
		if(peso <= 50){printf("Insuficiente para participar\n");}
		else{printf("Junior\n");}
	}
	else{
		if(peso <= 50){printf("Mini\n");}
		else{printf("Pleno\n");}
	}

/////////////////////////////_3

	int num1,num2,num3;

	printf("\nprimeiro numero: ");scanf("%d", &num1);
	printf("segundo numero: ");scanf("%d", &num2);
	printf("terceiro numero: ");scanf("%d", &num3);

	if(num1 < num2 && num2 < num3){
		if(num2 < num3){printf("%d - %d - %d",num1,num2,num3);}
		else{printf("%d - %d - %d",num1,num3,num2);}
	}
	else if(num2 < num1 && num2 < num3){
		if(num1 < num3){printf("%d - %d - %d",num2,num1,num3);}
		else{printf("%d - %d - %d",num2,num3,num1);}
	}
	else{
		if(num2 < num1){printf("%d - %d - %d",num3,num2,num1);}
		else{printf("%d - %d - %d",num3,num1,num2);}
	}

	return(0);
}
