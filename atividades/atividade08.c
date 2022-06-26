#include <stdio.h>
#include <stdlib.h>

int main()
{
	char nome[40], curso[40];
	int idade;
	
	printf("Qual o seu nome? > ");
	scanf("%s", nome);
	printf("Quantos anos voce tem? > ");
	scanf("%d", &idade);
	printf("Qual curso esta cursando? > ");
	scanf("%s", curso);
	
	printf("seu nome e %s, tem %d anos e cursa %s\n", nome,idade,curso);
	
////////////////
	
	float n1,n2,n3,media;
	
	printf("\nprimeira nota: ");
	scanf("%f", &n1);
	printf("segunda nota: ");
	scanf("%f", &n2);
	printf("terceira nota: ");
	scanf("%f", &n3);
	
	media = ((n1 + n2 + n3) / 3 );
	printf("a media e %.2f\n", media);
	
//////////////////
	
	float raio, area;
	
	printf("\nraio do circulo: ");
	scanf("%f", &raio);
	
	area = 3.14 * (raio * raio);
	
	printf("A area do circulo e %.2f\n", area);
	
	return(0);
} 
	
