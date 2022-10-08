#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

typedef struct produtos{
	char nome[25];
	int quantidade;
};

produtos produto;

int cardapio();

int main(){
	setlocale(LC_ALL, "Portuguese");
	int options;
	printf("|==============================|\n");
	printf("|     1 - Fazer Pedido         |\n");
	printf("|     2 - Mudar o Pedido       |\n");
	printf("|     3 - Consultar Pedido     |\n");
	printf("|     4 - Sair                 |\n");
	printf("|==============================|\n");
	printf("Escolha uma opcao: ");
	scanf("%d", &options);
	switch (options)
	{
		case 1:{
			cardapio();
			break;
		}
	}
}
int cardapio(){
	int type;
	int choose;
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
			printf("|====================================|\n");
			scanf("%d", &choose);
			printf("Informe a quantidade: ");
			scanf("%d", &produto.quantidade);
			if(choose == 1){
				strcpy(produto.nome, "Hamburguer da casa    R$ 13,00");
			}
			else if(choose == 2){
				strcpy(produto.nome, "Pastel carne/queijo   R$ 5,00");
			}
			else if(choose == 3){
				strcpy(produto.nome, "bomba presunto/queijo R$ 6,50");
			}
			else if(choose == 4){
				strcpy(produto.nome, "coxinha de frango  R$ 6,00");
			}else{
				printf("Escolha um produto da lista\n");
				return cardapio();
			}
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
			scanf("%d", &produto.quantidade);
			if(bebida == 1){
				strcpy(produto.nome, "Suco 350ml R$ 6,00 ");
			}else if(bebida == 2){
				strcpy(produto.nome, "Refrigerante lata R$ 5,00 ");
			}else if(bebida == 3){
				strcpy(produto.nome, "Suco Litro R$ 10,00 ");
			}else if(bebida == 4){
				strcpy(produto.nome, "Refrigerante Litro R$ 12,00");
			}else if(bebida == 5){
				return cardapio();
			}else{
				printf("Escolha uma opcao valida\n");
				return cardapio();
			}
			printf("\nVoce adicionou o item: %s com a quantidade de %d\n", produto.nome, produto.quantidade);
			return cardapio();
			break;
		}
		case 3: {
			return main();
			break;
		}
	}
}
