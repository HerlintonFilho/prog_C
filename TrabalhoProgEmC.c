#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct{
	char nome[30];
	int quantidade;
	float valor;
}produtos;

float valortotal;

produtos produto,produtob;

int cardapio();
int consulta();
int alterar();
int imprimircomanda();
int lerarquivo();

FILE *arquivo;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int options;
	printf("|==============================|\n");
	printf("|     1 - Fazer Pedido         |\n");
	printf("|     2 - Mudar o Pedido       |\n");
	printf("|     3 - Consultar Pedido     |\n");
	printf("|     4 - Imprimir comanda     |\n");
	printf("|     5 - Ler comandas salvas  |\n");
	printf("|==============================|\n");
	printf("        Escolha uma opcao: ");
	scanf("%d", &options);
	switch (options)
	{
		case 1:{
		    system("cls");
			cardapio();
			break;
		}
		case 2:{
			system("cls");
			alterar();
			break;
		}
		case 3:{
            system("cls");  
			consulta();
			break;
		}
		case 4:{
			system("cls");
			imprimircomanda();
			break;
		}
		case 5:{
			lerarquivo();
			break;
		}
	}
}

int cardapio(){
	int type, choose;
	printf("|======== | Cardapio | ========|\n");
	printf("|        1 - Lanches           |\n");
	printf("|        2 - Bebidas           |\n");
	printf("|    3 - Retornar para o menu  |\n");
	printf("|==============================|\n");
	printf("|       Faca seu pedido        |\n");
	printf("|==============================|\n");
	scanf("%d", &type);
	switch(type){
		case 1: {
			printf("|========== |  Lanches   | ==========|\n");
			printf("| 1 - Hamburguer da casa    R$ 13,00 |\n");
			printf("| 2 - pastel carne/queijo   R$ 5,00  |\n");
			printf("| 3 - bomba presunto/queijo R$ 6,50  |\n");
			printf("| 4 - coxinha de frango     R$ 6,00  |\n");
			printf("| 5 - Retornar para o cardapio       |\n");
			printf("|====================================|\n");
			scanf("%d", &choose);
			printf("Informe a quantidade: ");
			scanf("%d", &produto.quantidade);
			if(choose == 1){
				strcpy(produto.nome, "Hamburguer da casa");
				produto.valor = 13.00;
			}
			else if(choose == 2){
				strcpy(produto.nome, "Pastel carne/queijo");
				produto.valor = 5.00;
			}
			else if(choose == 3){
				strcpy(produto.nome, "bomba presunto/queijo");
				produto.valor = 6.5;
			}
			else if(choose == 4){
				strcpy(produto.nome, "coxinha de frango");
				produto.valor = 6.0;
			}
			else if(choose == 5){
				return cardapio();
			}
			else{
				printf("Escolha um produto da lista\n");
			}
			system("cls");
			printf("\nVoce adicionou o lanche: %s com a quantidade de %d\n", produto.nome, produto.quantidade);
			return cardapio();
			break;
		}
		case 2: {
			int bebida;
			printf("|============ | Bebida | ============|\n");
			printf("| 1 - Suco 350ml R$ 6,00             |\n");
			printf("| 2 - Refrigerante lata R$ 5,00      |\n");
            printf("| 3 - Suco Litro R$ 10,00            |\n");
			printf("| 4 - Refrigerante Litro R$ 12,00    |\n");
			printf("| 5 - Retornar para o cardapio       |\n");
			printf("|====================================|\n");
			printf("|        Escolha uma bebida:         |\n");
			scanf("%d", &bebida);
			printf("Informe a quantidade: ");
			scanf("%d", &produtob.quantidade);
			if(bebida == 1){
				strcpy(produtob.nome, "Suco 350ml");
				produtob.valor = 6.00;
			}else if(bebida == 2){
				strcpy(produtob.nome, "Refrigerante lata");
				produtob.valor = 5.00;
			}else if(bebida == 3){
				strcpy(produtob.nome, "Suco Litro");
				produtob.valor = 10.00;
			}else if(bebida == 4){
				strcpy(produtob.nome, "Refrigerante Litro");
				produtob.valor = 12.00;
			}else if(bebida == 5){
				return cardapio();
			}else{
				printf("Escolha uma opcao valida\n");
				return cardapio();
			}
			system("cls");
			printf("\nVoce adicionou o item: %s com a quantidade de %d\n", produtob.nome, produtob.quantidade);
			return cardapio();
			break;
		}
		case 3: {
			system("cls");
			return main();
			break;
		}
	}
}

int alterar(){
	int alter,choosealter,alterbebida;
	printf("|======== | Alterar o pedido  | ========|\n");
	printf("|======== | Escolha uma op??o | ========|\n");
	printf("|          1 - Alterar Lanche           |\n");
	printf("|          2 - Alterar Bebida           |\n");
	printf("|   3 - Alterar Quantidade do Lanche    |\n");
	printf("|   4 - Alterar Quantidade da Bebida    |\n");
	printf("|         5 - Rertornar ao menu         |\n");
	printf("|=======================================|\n");
	scanf("%d",&alter);
	switch(alter){
		case 1:{
			
			printf("|========== |  Lanches   | ==========|\n");
			printf("| 1 - Hamburguer da casa    R$ 13,00 |\n");
			printf("| 2 - pastel carne/queijo   R$ 5,00  |\n");
			printf("| 3 - bomba presunto/queijo R$ 6,50  |\n");
			printf("| 4 - coxinha de frango     R$ 6,00  |\n");
			printf("|          5 - Rertornar             |\n");
			printf("|====================================|\n");
			scanf("%d", &choosealter);
			if(choosealter == 1){
				strcpy(produto.nome, "Hamburguer da casa");
				produto.valor = 13.00;
				printf("Informe a quantidade: ");
		     	scanf("%d", &produto.quantidade);
			}
			else if(choosealter == 2){
				strcpy(produto.nome, "Pastel carne/queijo");
				produto.valor = 5.00;
				printf("Informe a quantidade: ");
			    scanf("%d", &produto.quantidade);
			}
			else if(choosealter == 3){
				strcpy(produto.nome, "bomba presunto/queijo");
				produto.valor = 6.5;
				printf("Informe a quantidade: ");
			    scanf("%d", &produto.quantidade);
			}
			else if(choosealter == 4){
				strcpy(produto.nome, "coxinha de frango");
				printf("Informe a quantidade: ");
				produto.valor = 6.0;
			    scanf("%d", &produto.quantidade);
			}
			else if(choosealter == 5){
				return alterar();
			}
			else{
				system("cls");
				printf("Escolha uma op??o valida\n");
				return alterar();
			}
			system("cls");
			printf("\nVoce alterou o item para: %s com a quantidade de %d\n", produto.nome, produto.quantidade);
			return alterar();
			break;
		}
		case 2:{
			printf("|============ | Bebida | ============|\n");
			printf("| 1 - Suco 350ml R$ 6,00             |\n");
			printf("| 2 - Refrigerante lata R$ 5,00      |\n");
            printf("| 3 - Suco Litro R$ 10,00            |\n");
			printf("| 4 - Refrigerante Litro R$ 12,00    |\n");
			printf("| 5 - Retornar                       |\n");
			printf("|====================================|\n");
			printf("|        Escolha uma bebida:         |\n");
			scanf("%d", &alterbebida);
			if(alterbebida == 1){
				strcpy(produtob.nome, "Suco 350ml");
				produtob.valor = 6.00;
				printf("Informe a quantidade: ");
			    scanf("%d", &produtob.quantidade);
			}else if(alterbebida == 2){
				strcpy(produtob.nome, "Refrigerante lata");
				produtob.valor = 5.00;
				printf("Informe a quantidade: ");
		    	scanf("%d", &produtob.quantidade);
			}else if(alterbebida == 3){
				strcpy(produtob.nome, "Suco Litro");
				produtob.valor = 10.00;
				printf("Informe a quantidade: ");
		    	scanf("%d", &produtob.quantidade);
			}else if(alterbebida == 4){
				strcpy(produtob.nome, "Refrigerante Litro");
				produtob.valor = 12.00;
				printf("Informe a quantidade: ");
			    scanf("%d", &produtob.quantidade);
			}else if(alterbebida == 5){
				system("cls");
				return alterar();
			}else{
				system("cls");
				printf("\nEscolha uma opcao valida\n\n");
				return alterar();
			}
			system("cls");
			printf("\nVoce alterou o item para:%s com a quantidade de %d\n", produtob.nome, produtob.quantidade);
			return alterar();
			break;
		}
		case 3:{
			printf("Informe a nova quantidade do item %s :",produto.nome);
			scanf("%d",&produto.quantidade);
			printf("Quantidade alterada\n\n");
            system("pause");
			system("cls");
			return alterar();
			break;
		}
		case 4:{
			printf("Informe a nova quantidade do item %s :",produtob.nome);
			scanf("%d",&produtob.quantidade);
			printf("Quantidade alterada\n\n");
			system("pause");
			system("cls");
			return alterar();
			break;
		}
		case 5:{
			system("cls");
			return main();
			break;
		}
	}
}

int consulta(){
	printf("Seu pedidos: \n");
	printf("Lanche: %d %s\nBebida: %d %s",produto.quantidade, produto.nome, produtob.quantidade, produtob.nome);
	valortotal = (produto.quantidade * produto.valor) + (produtob.quantidade * produtob.valor);
	printf("O valor total fica %0.2f\n\n",valortotal);
		main();
}

int imprimircomanda(){
    valortotal = (produto.quantidade * produto.valor) + (produtob.quantidade * produtob.valor);
    int oparqv;
	printf("____________________________________\n");
	printf("|             COMANDA               \n");
	printf("| Lanche: %s , Qntd: %d \n| Valor unitario: R$%0.2f\n",produto.nome,produto.quantidade,produto.valor);
	printf("| Bebida: %s , Qntd: %d \n| Valor unitario: R$%0.2f\n",produtob.nome,produtob.quantidade,produtob.valor);
	printf("|===================================\n");
	printf("| Valor Total a pagar: R$%0.2f\n",valortotal);
	printf("|===================================\n");
	printf("\n\nInserir comanda no arquivo de comandas?\n1-sim 2-n?o(retorna ao menu)");
	scanf("%d",&oparqv);
	if(oparqv==1){
	arquivo = fopen("comandas.txt","a");
	fprintf(arquivo,"____________________________________\n");
	fprintf(arquivo,"|             COMANDA               \n");
	fprintf(arquivo,"| Lanche: %s , Qntd: %d \n| Valor unitario: R$%0.2f\n",produto.nome,produto.quantidade,produto.valor);
	fprintf(arquivo,"| Bebida: %s , Qntd: %d \n| Valor unitario: R$%0.2f\n",produtob.nome,produtob.quantidade,produtob.valor);
	fprintf(arquivo,"|===================================\n");
	fprintf(arquivo,"| Valor Total a pagar: R$%0.2f\n",valortotal);
	fprintf(arquivo,"|===================================\n");
	fflush(stdout);
	fflush(stdin);
	fclose(arquivo);
	printf("\n\nComanda salva\nPressione qualquer tecla para continuar");
    getchar();
	system("cls");
	return main();
	}
	else if(oparqv==2){
		system("cls");
		return main();
	}
	
}

int lerarquivo(){
	char cmda;
	arquivo = fopen("comandas.txt","r");
	if(arquivo == NULL){
     printf("Erro, nao foi possivel abrir o arquivo\n");}
 else{
     while((cmda=fgetc(arquivo))!=EOF){
  putchar(cmda);
}
}
 fclose(arquivo);
 getchar();
 system("cls");
 return main();
}
