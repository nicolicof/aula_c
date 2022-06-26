///////////////////atividade_1
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c;
    printf("digite um numero: ");scanf("%d",&a);
    printf("digite um numero: ");scanf("%d",&b);
    printf("digite um numero: ");scanf("%d",&c);

    if(a > 0 && b > 0 && c > 0){
        printf("\nos numeros sao positivos");
        if(a < (b+c) && b < (a+c) && c < (a+b)){
            printf("e formam um triangulo");
            if(a == b && a == c && c == b){printf(" equilatero\n");}
            else if (a == b && a != c || c == a && c != b || b == c && b != a){printf(" isoceles\n");}
            else{printf(" escaleno\n");}
        }
        else{printf("mas nao formam um triangulo\n");}
    }
    else{printf("\num dos numeros e negativo.\n\n");}

///////////////////atividade_2

    int n1,n2,resp;
    char x1;

    printf("\n * = multiplicação \n / = divisão \n + = adição \n - = subtração\n > ");scanf("%s", &x1);
    printf("\nDigite o primeiro numero: ");scanf("%d", &n1);
    printf("Digite o segundo numero: ");scanf("%d", &n2);

    if(x1 == '*'){printf("\nA multiplicação entre %d e %d resulta em %d",n1,n2,resp = n1 * n2);}
    else if(x1 == '/'){printf("\nA divisão entre %d e %d resulta em %d",n1,n2,resp = n1 / n2);}
    else if(x1 == '+'){printf("\nA adição entre %d e %d resulta em %d",n1,n2,resp = n1 + n2);}
    else{printf("\nA subtração entre %d e %d resulta em %d",n1,n2,resp = n1 - n2);}

    return(0);
}
