#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

/* Escrita em arquivo duas formas */

int main(int argc,char *argv[]){
	FILE *arquivo;	
	FILE *arquivo_escrita;	
	arquivo = fopen(argv[1],"r");
	arquivo_escrita = fopen("criado-escrita.txt","w");
    char linha[256];
    char c;
    /*
    while (fgets(linha, sizeof(linha), arquivo)) {
    	printf("%s\n",linha);
        fprintf(arquivo_escrita,"%s",linha);
    }
    */
    /*
    while(c!=EOF){
		c = fgetc(arquivo);
		printf("%c",c);
		fprintf(arquivo_escrita,"%c",c);
	}
	*/
    fclose(arquivo);
    fclose(arquivo_escrita);
    return 0;
}   

