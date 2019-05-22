#include <stdio.h>

int main(void) {

float a,b;
char oper;

do {
printf("Bem vindo a calculadora\n");
printf("Para sair digite 0 e 0 \n");
printf("Digite um número : ");
scanf("%f",&a);
printf("Digite a operação : ");
scanf(" %c",&oper);
printf("Digite um número : ");
scanf("%f",&b);

switch (oper) {

     case ('+') :
                  printf("%.2f\n\n\n",a+b);
                  break;
     case ('-') :
                  printf("%.2f\n\n\n",a-b);
                  break;
     case ('*') :
                  printf("%.2f\n\n\n",a*b);
                  break;
     case ('/') :
                if(a!=0)
                {
                  printf("%.2f\n\n\n",a/b);
                  break;
                 }
                else
                {
                printf("ERRO\n\n\n");
                break;
                }
      case('%') :
                printf("ERRO\n\n\n");
                break;    
}
}
  while (a!=0 && b!=0);              
  return 0;
}
