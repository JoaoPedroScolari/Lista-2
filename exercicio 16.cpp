#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char conceito;
	printf("Digite o conceito:\n");
	scanf("%c", & conceito);
	
	switch(conceito){
		case 'A':
			printf("Aprendizagem Plena");
			break;
		case 'B':
	    	printf("Parcialmente Plena");
		    break;
		case 'C':
			printf("Suficiente");
			break;
		case 'D':
			printf("Insuficiente");
			break;
		default:
			printf("conceito invalido");
			
	}
	
	
	
	
	
	
	
}
