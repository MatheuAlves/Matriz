#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"


void criarMatriz(int tamanho,int matriz[TAMANHOMATRIZ][TAMANHOMATRIZ])
{
    int linha=0;
    int coluna=0;

    for(linha=0;linha<tamanho;linha++)
	{
		for(coluna=0;coluna<tamanho;coluna++)
		{
			matriz[linha][coluna]=rand()%100;//Insere números aleatórios.
		}
	}
}

void imprimirMatriz(int tamanho, int matriz[TAMANHOMATRIZ][TAMANHOMATRIZ])
{
    int linha=0;
    int coluna=0;

	printf("\n");

    for(linha=0;linha<tamanho;linha++)
	{
		printf("\t");
		for(coluna=0;coluna<tamanho;coluna++)
		{
			printf("%d ",matriz[linha][coluna]);//Imprime.
		}
		printf("\n");
	}

}

void ordenaMatriz(int tamanho, int matriz[TAMANHOMATRIZ][TAMANHOMATRIZ])
{
    int somaFinal=matriz[0][0];
	int linha=0;
	int coluna=0;
    int valor=0;
    int valorTesteDireita; 
    int valorTesteEsquerda;
    int valorTesteAbaixo;

	while (linha != tamanho && coluna != tamanho)
	{
		valor = 0;

		if (coluna == tamanho-1 && linha == tamanho-1)
		{
			somaFinal=somaFinal;
			matriz[linha][coluna]=-1;
			linha++;
			coluna++;
			valor++;
		}

		else if (linha == 0 && valor == 0 && coluna != tamanho-1)
		{
			valor = matriz[linha][coluna];
			valorTesteDireita = matriz[linha][coluna+1];
			valorTesteAbaixo = matriz[linha+1][coluna];
			
			if(valorTesteDireita >= valorTesteAbaixo)
			{
				somaFinal+=valorTesteDireita;
				matriz[linha][coluna]=-1;
				coluna++;
			}
			else
			{
				somaFinal+=valorTesteAbaixo;
				matriz[linha][coluna]=-1;
				linha++;
			}

			//direita ou baixo;
		}

		else if (linha == tamanho-1 && valor == 0)
		{
			valorTesteDireita=matriz[linha][coluna+1];
			somaFinal+=valorTesteDireita;
			matriz[linha][coluna]=-1;
			coluna++;

			//direita;
		}

		else if(coluna == 0 && valor == 0)
		{
			valor = matriz[linha][coluna];
			valorTesteDireita = matriz[linha][coluna+1];
			valorTesteAbaixo = matriz[linha+1][coluna];

			if(valorTesteDireita >= valorTesteAbaixo)
			{
				somaFinal+=valorTesteDireita;
				matriz[linha][coluna]=-1;
				coluna++;
			}
			else
			{
				somaFinal+=valorTesteAbaixo;
				matriz[linha][coluna]=-1;
				linha++;
			}

			//direita, baixo(desde que não seja a última);
		}

		else if(coluna == tamanho-1 && valor == 0)
		{
			valor = matriz[linha][coluna];
			valorTesteEsquerda = matriz[linha][coluna-1];
			valorTesteAbaixo = matriz[linha+1][coluna];
			
			if(valorTesteEsquerda >= valorTesteAbaixo)
			{
				somaFinal+=valorTesteEsquerda;
				matriz[linha][coluna]=-1;
				coluna--;
			}
			else
			{
				somaFinal+=valorTesteAbaixo;
				matriz[linha][coluna]=-1;
				linha++;
			}

			//esquerda, baixo;
		}

		else
		{
			valor = matriz[linha][coluna];
			valorTesteDireita = matriz[linha][coluna+1];
			valorTesteAbaixo = matriz[linha+1][coluna];
			valorTesteEsquerda = matriz[linha][coluna-1];

			if(valorTesteDireita >= valorTesteAbaixo && valorTesteDireita >= valorTesteEsquerda)
			{
				somaFinal+=valorTesteDireita;
				matriz[linha][coluna]=-1;
				coluna++;
			}
			else if(valorTesteEsquerda >= valorTesteAbaixo && valorTesteEsquerda > valorTesteDireita)
			{
				somaFinal+=valorTesteEsquerda;
				matriz[linha][coluna]=-1;
				coluna--;
			}
			else
			{
				somaFinal+=valorTesteAbaixo;
				matriz[linha][coluna]=-1;
				linha++;
			}

			//esquerda, direita ou baixo;

		}

	}

	printf ("\nA soma dos maiores elementos é igual a: %d\n",somaFinal);
	
}