#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "matriz.h"




int main(){
	
	setlocale (LC_ALL,"portuguese");
	
	int matriz[TAMANHOMATRIZ][TAMANHOMATRIZ];

	criarMatriz(TAMANHOMATRIZ, matriz);
	printf("\nAqui está a Matriz de tamanho %d:\n",TAMANHOMATRIZ);
	imprimirMatriz(TAMANHOMATRIZ, matriz);
	ordenaMatriz(TAMANHOMATRIZ, matriz);
	printf("\nAqui está a Matriz ordenada:\n");
	imprimirMatriz(TAMANHOMATRIZ, matriz);

	return 0;
}