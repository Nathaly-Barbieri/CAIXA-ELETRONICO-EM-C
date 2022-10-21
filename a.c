#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
----------------------------------------------------------------- 
 	ADS - NOITE | 2° SEMESTRE
	
	DISCIPLINA: LINGUAGEM DE PROGRAMAÇÃO | PROFESSOR: CARLOS BEZERRA
	
	DESENVOLVEDORES:
	
	NOME: SAMUEL SILVA COSTA
	NOME: NATHALY DE LIMA BARBIERI
----------------------------------------------------------------- 
*/

void main(){
	
	setlocale(LC_ALL, "");
	int dinheiro;
	int cedula1 = 0, cedula5 = 0, cedula10 = 0, cedula50 = 0, cedula100 = 0;
	
	
	printf("Insira o valor (valor inteiro): ");
	scanf("%i", &dinheiro);
	
	while(dinheiro != 0){
		if(dinheiro-100 >= 0)
		{
			dinheiro = dinheiro - 100;
			cedula100++;
		}
		else if(dinheiro-50 >= 0){
			dinheiro = dinheiro - 50;
			cedula50++;
		}
		else if(dinheiro-10 >= 0){
			dinheiro = dinheiro - 10;
			cedula10++;
		}
		else if(dinheiro-5 >= 0){
			dinheiro = dinheiro - 5;
			cedula5++;
		}
		else if(dinheiro-1 >= 0){
			dinheiro = dinheiro - 1;
			cedula1++;
		}
	}
	
	printf("\n%i cédulas de R$ 100,00", cedula100);
	printf("\n%i cédulas de R$ 50,00", cedula50);
	printf("\n%i cédulas de R$ 10,00", cedula10);
	printf("\n%i cédulas de R$ 5,00", cedula5);
	printf("\n%i cédulas de R$ 1,00", cedula1);
}
