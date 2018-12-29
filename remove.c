#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

/* Leitura de arquivo e contagem de linhas */

int main(int argc,char *argv[]){
	char opcao;
	printf("Deseja apagar o arquivo %s  S-sim || N-nao\n",argv[1]);
	opcao = getchar();
	if(toupper(opcao)=='S'){
		remove(argv[1]);
		printf("Arquivo %s removido\n",argv[1]);
	}
	return 0;
}