#include <stdio.h>
//Criança, adulto ou idoso
//0-17 menor. 18-59 adulto. >60 idoso
int main(){
	int idade = 0;
	
	printf("Informe a idade:\n");
	scanf("%d", &idade);
	
	printf("A idade informada é %d\n", idade);
	
	if(idade >=0 && idade <18){
		printf("menor de idade");

	}else{
	
	if(idade >=18 && idade <59){
		printf("adulto");
	
	}else{
	
	if(idade>60){
		printf("idoso");}
	}
	}
	
	return 0;
}
