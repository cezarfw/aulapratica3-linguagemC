#include <stdio.h>
#include<stdlib.h>


int main(void) {

    FILE *arq;
    errno_t err; //Sempre o último erro vai ficar gravado na variavel "err" nesse caso.
    int numero;


    err = fopen_s(&arq, "Texto.txt", "r");
    
    if (arq == NULL)
        printf("Erro ao abrir o arquivo!\n");
    else
        printf("Arquivo aberto!\n");

    fclose(arq);
    system("pause");
    return 0;
}