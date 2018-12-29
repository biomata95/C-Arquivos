#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

/* Escrita em arquivo duas formas */

int main(int argc,char *argv[]){
	FILE *arquivo;	
	arquivo = fopen(argv[1],"r+");
    char linha[256];
    char c;
    int cont = 1;
    while (fgets(linha, sizeof(linha), arquivo)) {
    	printf("%s\n",linha);
        fprintf(arquivo,"Adiciona a linha %d \n",cont);
        cont++;
    fclose(arquivo);
    return 0;
}   

