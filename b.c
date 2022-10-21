#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
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

int qtd_cedulas(int dinheiro)
{
	
	int cedula1 = 0, cedula5 = 0, cedula10 = 0, cedula50 = 0, cedula100 = 0;
	
	/*
	printf("Insira o valor (valor inteiro): ");
	scanf("%i", &dinheiro);*/
	
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
	
	printf("\n\n%i CÉDULAS DE R$ 100,00", cedula100);
	printf("\n%i CÉDULAS DE R$ 50,00", cedula50);
	printf("\n%i CÉDULAS DE R$ 10,00", cedula10);
	printf("\n%i CÉDULAS DE R$ 5,00", cedula5);
	printf("\n%i CÉDULAS DE R$ 1,00", cedula1);
}

int dsp_cedulas(int dinheiro)
{
	
	int cedula1 = 0, cedula5 = 0, cedula10 = 0, cedula50 = 0, cedula100 = 0;
	
	/*
	printf("Insira o valor (valor inteiro): ");
	scanf("%i", &dinheiro);*/
	
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
	
	printf("\n\nVERIFIQUE SE FORAM DISPENSADAS: \n\n- %i CEDULAS DE R$ 100,00\n- %i CEDULAS DE R$ 50,00\n- %i CEDULAS DE R$ 10,00\n- %i CEDULAS DE R$ 5,00\n- %i CEDULAS DE R$ 1,00.", cedula100, cedula50, cedula10, cedula5, cedula1);
}

void main() 
{
	
	setlocale(LC_ALL, "");
	
	int valor, ced, senha, tent_pwd, dig_pwd, val=13, bkp_val, sac_req, sessao=0;
	char resp1;
	
	inicio:
	
	printf("DIGITE SUA SENHA: ");
	scanf("%i", &senha);
	
	fflush(stdin);
	
	if(senha == 666)
	{
		system("cls");
		
		printf("\nOLÁ, ADMIN!");
		
		printf("\n\n-----------------INFORMAÇÕES DO CAIXA------------------");
		
			printf("\n\nVALOR TOTAL DISPONÍVEL NA MAQUINA: R$ %i", val);
	
			qtd_cedulas(val);
			
		printf("\n\n-------------------------------------------------------");
		
		printf("\nDESEJA ATUALIZAR O VALOR DE CEDULAS NA MAQUINA?\n\nPARA SIM, DIGITE 'S'\nPARA NÃO, DIGITE 'N'\n\nR: ");
		scanf("%c", &resp1);
		
		if(resp1 == 's' || resp1 == 'S')
		{
			fflush(stdin);
			
			printf("\nINSIRA OS VALORES NA MAQUINA E PRESSIONE ENTER QUANDO ACABAR");	
			getch();
			
			fflush(stdin);
			
			printf("\n\nQUANTO VOCÊ INSERIU?\n\nR: ");
			scanf("%i", &bkp_val);
			
			printf("\n\n-------------------------NOTAS------------------------------");
			
			val = val + bkp_val;
			
			printf("\n\nFORAM GRAVADOS R$ %i NO CAIXA ELETRÔNICO!\n\nTOTAL DISPONIVEL PARA SAQUE: R$ %i\n", bkp_val, val);
			
			qtd_cedulas(val);
			
			printf("\n\nPRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU INICIAL.");
			
			getch();
			
			system("cls");
			
			goto inicio;
		}
		
		else
		{
			system("cls");
			
			printf("\nVOCÊ ESCOLHEU A OPÇÃO 'NÃO'. PRESSIONE QUALQUER TECLA PARA VOLTAR AO INICIO.\n\n");
			
			getch();
			
			system("cls");
			
			goto inicio;
		}
		
	}
	
	else
	{
		val:
		
		printf("\n\nOLÁ, USUÁRIO!\n\nQUANTO VOCÊ DESEJA SACAR EM DINHEIRO?\n\nR$ ");
		scanf("%i", &sac_req);
		
		if(sac_req <= val)
		{
			printf("\n\nVALOR DIGITADO DISPONÍVEL PARA SAQUE.\n\nINSIRA SEU CARTÃO E APERTE ENTER.\n");
			getch();
			
			do
			{
				
				printf("\n\nDIGITE SUA SENHA: ");
				scanf("%i", &dig_pwd);
				
				
				if(dig_pwd != senha && tent_pwd <= 2)
				{
					tent_pwd++;
					
					printf("\n\nSENHA INCORRETA!");
					
					printf("\n\nTENTATIVAS RESTANTES: %i", 3-tent_pwd);
			
				}
				
				if(senha == dig_pwd)
				{
					
					saque:
					
					fflush(stdin);
					
					printf("\n\nVOCÊ DIGITOU O VALOR R$ %i.\n\nPARA CONFIRMAR, DIGITE 'S'\nPARA CORRIGIR, DIGITE 'N'\n\nR: ", sac_req);
					scanf("%c", &resp1);
					
					if(resp1 == 's' || resp1 == 'S')
					{
						system("cls");
						
						printf("\n\nTRANSAÇÃO CONCLUIDA!\n\nRETIRE SEU DINHEIRO E PRESSIONE ENTER PARA ENCERRAR SUA SESSÃO.\n\n");
						
						dsp_cedulas(sac_req);
						
						val = val - sac_req;
						
						getch();
						
						sessao = 1;
						
						system("cls");
						
						goto inicio;
					}
					
					if(resp1 == 'n' || resp1 == 'N')
					{
						printf("\n\nQUANTO VOCÊ DESEJA SACAR EM DINHEIRO?\n\nR: ");
						scanf("%i", &sac_req);
						
						goto saque;	
					}
					
				}
					
				
			}while(tent_pwd < 3 && sessao == 0);
			
			if(senha != dig_pwd)
			{
				printf("\n\n\nSESSÃO ENCERRADA!\n\nVOCÊ DIGITOU SUA SENHA ERRADO 3 VEZES.\n\nPRESSIONE QUALQUER TECLA.");
				getch();
				
				system("cls");
				
				goto inicio;
			}
		
		}
		
		else
		{
			printf("\n\nO VALOR DIGITADO NÃO ESTÁ DISPONÍVEL PARA SAQUE. POR FAVOR, PRESSIONE ENTER E DIGITE OUTRO VALOR.");
			getch();
			
			system("cls");
			goto val;
		}
	}
	
	getch();
}
