#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

/* Leitura de arquivo e contagem de linhas */

int main(int argc,char *argv[]){
	FILE *arquivo;	
	arquivo = fopen(argv[1],"r");
	char c;
	int linhas = 0;
	while(!feof(arquivo))
	{
		c = fgetc(arquivo);
		printf("%c",c);
	  	if(c == '\n')
	    	linhas++;
	}
	printf("Numero de linhas do arquivo: %d\n",linhas);
	fclose(arquivo);
	return 0;
}