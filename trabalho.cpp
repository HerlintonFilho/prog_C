#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

struct produtos{
	char nome[25];
	float preco;
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
}
int cardapio(){
	int type;
	printf("|======== | Cardapio | ========|\n");
	printf("|        1 - Entradas          |\n");
	printf("|        2 - Bebidas           |\n");
	printf("|==============================|\n");
	printf("|       Faca seu pedido        |\n");
	printf("|==============================|\n");
	scanf("%d", &type);
	switch(type){
		case 1: {
			printf("|=========== | Entradas | ===========|");
			printf("| 1 - Hamburguer da casa    R$ 13,00 |");
			printf("| 2 - pastel carne/queijo   R$ 5,00  |");
			printf("| 3 - bomba presunto/queijo R$ 6,50  |");
			printf("| 4 - coxinha de frango     R$ 6,00  |");
			break;
		}
		case 2: {
			printf("|============ | Bebida | ============|");
			printf("| 1 - Suco 350ml R$ 6,00             |");
			printf("| 2 - Refrigerante lata R$ 5,00      |");
            printf("| 3 - Suco Litro R$ 10,00            |");
			printf("| 4 - Refrigerante Litro R$ 12,00    |");
			printf("|====================================|");	
			break;
		}
	}
}
