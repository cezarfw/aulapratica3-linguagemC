#include<stdio.h>
#include<stdlib.h>

int main() {

	FILE* arquivo;
	errno_t err;
	int numero;

	err = fopen_s(&arquivo, "arquivo.txt", "a");
	if (err == 0) {
		printf("Digite um numero inteiro: ");
		do
		{
			numero = getchar();
			fputc(numero, arquivo);
		} while (numero != '\n');

	}

	else
	{
		printf("ERRO, arquivo nao existe!\n\n");
	}


	if (arquivo) {
		err = fclose(arquivo);
		if (err == 0) {
			printf("\nArquivo fechado!\n\n");
		}
		else
		{
			printf("Arquivo nao foi fechado!\n\n");
		}
	}


	system("pause");
	return 0;

}