#include<stdlib.h>
#include<stdio.h>

int main() {

    int saque = 0, opcao, totalval = 0, saldo = 1000, totalmont = 0; // Valores para saque, switch case, ver saldo, total de cedulas, montante total
    int resto100,resto50,resto20,resto10;		//Valores utilizados para realizar a
    int nota100,nota50,nota20,nota10;			// contagem das cedulas a serem sacadas
    int quant100, quant50, quant20, quant10;			// Valores utilizados para registrar tipo de cedulas inseridas
    int val100 = 0, val50 = 0, val20 = 0, val10 = 0;	//quantiadade de cada cedula
    int mont100 = 0, mont50 = 0, mont20 = 0, mont10 = 0;	// valor de gerado por cada adicao de cedula
    	
    	
    	printf ("Area destinada a manutencao dos caixas eletronicos\n\n");
    	printf ("Para habilitar transacoes insira cedulas na maquina\n");
    		printf ("Total de cedulas ate o momento: %i\n\n", totalval);
    		printf("Quantas notas de 100 deseja inserir?\n");
    		scanf("%i",&quant100);
    		val100 += quant100;
    		printf("Quantas notas de 50 deseja inserir?\n");
    		scanf("%i",&quant50);
    		val50 +=quant50;
    		printf("Quantas notas de 20 deseja inserir?\n");
    		scanf("%i",&quant20);
    		val20 += quant20;
    		printf("Quantas notas de 10 deseja inserir?\n");
    		scanf("%i",&quant10);
    		val10 += quant10;
    		
    		mont100 += val100 * 100;
    		mont50 += val50 * 50;
    		mont20 += val20 * 20;
    		mont10 += val10 * 10;
    		
    		totalval = totalval + val100 + val50 + val20 + val10;
    		totalmont = totalmont + mont100 + mont50 + mont20 + mont10;
    		
    		
    		printf ("\nAbastecimento realizado com sucesso\n");
    		printf ("Foram inseridas %i cedulas para saque\n", totalval);
    		printf ("O valor disponivel para saque eh de: %i \n\n", totalmont);
	
    printf("\t\t\tBem-vindo ao Banco SIRIUS\t\n");
    printf("\t\t1. Ver Saldo disponivel na conta\n");
    printf("\t\t2. Sacar dinheiro da conta\n");
    printf("\t\t3. Sair  \n\n");
    printf("Selecione a opcao desejada:  ");
    scanf("%i",&opcao);

    switch (opcao) {   	
    		
    		case 1: 
    		
    		printf("Seu Saldo eh de %i\n", saldo);
    		
				printf("Aguarde, em instantes voce podera realizar o seu saque");
				printf(".");
            		sleep(4);
            		printf(".");
            		sleep(2);
            		printf(".\n");
            		sleep(2);
		  		
    		case 2: 
    		
    		do {
        		printf("Digite o valor a ser sacado: ");
        		scanf("%d",&saque);
        		printf("\n");
        			if (saque % 5 == 0 && saque <= totalmont) {
            		printf("Checando o saldo"); 
            		printf(".");
            		sleep(4);
            		printf(".");
            		sleep(4);
            		printf(".\n");
            		sleep(3);
            		if (saque > saldo){
    			printf("Saldo insuficiente sessao expirada!\n");
    			exit (1);
    			
			} else if (saque <= saldo){
					printf ("Saque aprovado\n");
        			printf("Contando Cedulas");
            		printf(".");
            		sleep(4);
            		printf(".");
            		sleep(4);
            		printf(".\n\n");
            		sleep(2);

            		nota100 = saque / 100;
            		resto100 = saque % 100;
            		nota50 = resto100 / 50;
            		resto50 = resto100 % 50;
            		nota20 = resto50 / 20;
            		resto20 = resto50 % 20;
            		nota10 = resto20 / 10;
            		resto10 = resto20 % 10;
        }}
        else if (saque % 5 == 0 && saque > totalmont){
        	printf("Voce digitou um valor de saque nao permitido.\n\n");
            exit (1);
		} else if (saque % 5 != 0 || saque > totalmont)
		{ printf("Voce digitou um valor de saque nao permitido. Tente novamente.\n\n");
            
		}
            
    }
    while (saque % 5 != 0 || saque > totalmont);

    printf("%d notas 100\n",nota100);
    printf("%d notas 50\n",nota50);
    printf("%d notas 20\n",nota20);
    printf("%d notas 10\n",nota10);
    printf("\n");
    printf("Retire seu dinheiro.");

    getchar();
    getchar();
    break;
    
    case 3: ; break;
    		default: printf("A opcao nao existe");
    		
    
    return 0;
    	
}}
 

