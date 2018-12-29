#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

/* Leitura de arquivo e contagem de linhas, outra forma */

int main(int argc,char *argv[]){
	FILE *arquivo;	
	arquivo = fopen(argv[1],"r");
    char linha[256];
    int cont = 0;
    while (fgets(linha, sizeof(linha), arquivo)) {
        cont++;
        if(cont == 1)
            printf("%s", linha);   
    }
    fclose(arquivo);
    return 0;
}