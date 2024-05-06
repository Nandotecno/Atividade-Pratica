#include <iostream>

int main() {
    int opc;
    float num1, num2, result;
       
    do{
    	printf("1 - Somar dois valores \n");
    	printf("2 - Subtrair dois valores \n");
    	printf("3 - Sair \n");
    	scanf("%d", &opc);
    	
    	switch(opc){
    		case 1:
    			printf("Digite o primeiro valor: ");
    			scanf("%f", &num1);
    			printf("Digite o segundo valor: ");
    			scanf("%f", &num2);
    			
    			result = num1 + num2;
    			
    			printf("Resultado da soma: %.2f\n", result);
    			
				break;
    		case 2:
    				printf("Digite o primeiro valor: ");
    			scanf("%f", &num1);
    			printf("Digite o segundo valor: ");
    			scanf("%f", &num2);
    			
    			result = num1 - num2;
    			
    			printf("Resultado da subtração: %.2f\n", result);
    			    			
    			break;
    		case 3:
    			printf("Até mais\n");
    			break;
    			
    			defaut:
    				printf("Opção inválida \n");
    				
    			}
    		}while(opc != 3);
    		
    		return 0;
    	}
    
	
	
			   	
