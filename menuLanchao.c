#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<ctype.h>
#include<locale.h>

typedef struct{
	int codigo;
	char tipoPao[20];
	char nome[20];
	float valor;
}LANCHE;

int menu(){
	int opcao;
	system("cls");
	printf("MENU PRINCIPAL DO LANCHÃO\n\n");
	printf("1 - Cadastrar\n");
	printf("2 - Exibir\n");
	printf("3 - Alterar\n");
	printf("4 - Excluir\n");
	printf("5 - Sair\n");
	printf("Digite uma opção: ");
	scanf("%d",&opcao);
	return opcao;
}

void cadastro(){
	FILE *arquivo;
	arquivo = fopen("lanchao.bin", "wb");
	LANCHE lanche;
	system("cls");
	printf("CADASTRO DO LANCHÃO\n\n");
	if(arquivo = NULL)
		printf("\nErro no arquivo...");
	else{
		printf("Código: ");
		scanf("%d",&lanche.codigo);
		printf("Nome do lanche:"); fflush(stdin);
		gets(lanche.nome);
		printf("Tipo do pão:"); fflush(stdin);
		gets(lanche.tipoPao);
		printf("Valor R$:");
		scanf("%f",&lanche.valor);
	}
	system("pause");
	fclose(arquivo);
}

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int opcao;
	do{
		opcao = menu();
		switch(opcao){
			case 1:cadastro();
				break;
			case 2://exibir
				break;
			case 3://alterar
				break;
			case 4://excluir
				break;
			case 5:system("cls");
				   printf("Saindo do sistema...");
				break;
			default:printf("\nOpção inválida...\n\n");
					system("pause");
				break;
		}
	}while(opcao != 5);
}
