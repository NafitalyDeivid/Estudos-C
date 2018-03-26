#include <stdio.h>
#include <stdlib.h>

 void IdnetLetras(void ){
       printf(" Voce entrou na funcao Identificador de Letras \n");
      }
 void ConverMascMinusc(void ){
      printf(" Voce entrou na funcao Converssor Minusculo-Maiúsculo \n");
      }
 void IdentParOuiMPAR(void ){
      printf(" Voce entrou na funcao Identificador de Números pares e impares \n");
      }
 
int main(int argc, char *argv[])
{
    int  opcao;
    printf(" Escolha uma das opções abaixo:\n" );
    printf(" 1- Identificador de Letras \n");
    printf(" 2- Converssor Minusculo-Maiúsculo \n");
    printf(" 3- Identificador de Números pares e impares \n");
    
    scanf("%d", &opcao);
    fflush(stdin);
    
    switch(opcao)
    {
          case 1: printf(" Voce escolheu a opcao 1 \n");
          IdnetLetras();
          break;  
          case 2: printf(" Voce escolheu a opcao 2 \n");
          ConverMascMinusc();
          break;        
          case 3: printf(" Voce escolheu a opcao 3 \n");
          break;
          IdentParOuiMPAR();
          default: printf(" Voce escolheu uma opcao invalida \n");
          break;
    }
                   
  system("PAUSE");
  	
  return 0;
}




















