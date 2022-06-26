////////////////////////
#include <stdlib.h>
#include <stdio.h>

int main()
{
	char nome[30] = "Nícolas";
	char curso[16] = "Informática";
	int idade = 21;
	
	printf("\nMeu nome é %s, minha idade é %d, estou cursando %s\n", nome, idade, curso);
	
////////////////////////

	float n1, n2, n3, media;
	
	n1 = 10.0;
	n2 = 9.0;
	n3 = 7.0;
	media = (n1 + n2 + n3) / 3;
	
	printf("\nAs notas do aluno são:\n %.2f\n %.2f\n %.2f\nE a sua média é %.2f\n", n1, n2, n3, media);
	
////////////////////////

	float raio, delta, area;
	
	raio = 10.0;
	delta = 3.14;
	area = delta * (raio * raio);
	
	printf("\n---> Raio  = %.2f\n---> Delta = %.2f\n---> Área  = %.2f\n\n", raio, delta, area);
	
	return 0;
}
////////////////////////
