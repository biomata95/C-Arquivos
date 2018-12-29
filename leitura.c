#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

/* Leitura de arquivo */

int main(int argc,char *argv[]){
	FILE *arquivo;	
	arquivo = fopen(argv[1],"r");
	char c;
	while(c!=EOF){
		c = fgetc(arquivo);
		printf("%c",c);
	}
	fclose(arquivo);
	return 0;
}