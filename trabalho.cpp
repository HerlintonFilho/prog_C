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