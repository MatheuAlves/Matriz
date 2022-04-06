<h1>MATRIZ</h1>

>Status: Finalizado

### Programa que soma os maiores valores do caminho de uma matriz quadrada.

# A lógica utilizada:

## Inicialização:

+ Criar uma matriz e preenchê-la com números randômicos;
+ Imprimir a matriz;

## Ordenação:

+ Testar a última posição possível n,n.(Sair do while);
+ Testar o maior número em relação a posição 0,0.(Seguir para direita ou para baixo);
+ Testar o maior número em relação a última linha n,x.(Seguir para direita);
+ Testar o maior número em relação a primeira coluna x,0.(Seguir para direita ou para baixo);
+ Testar o maior número em relação a última coluna x,n.(Seguir para esquerda ou para baixo);
+ Testar o maior número em relação aos outros casos que não sejam especificados x,x.(Seguir para direita, esquerda ou para baixo);

## Observações:

+ Antes de alterar a posição da linha e/ou coluna alterar o valor para -1, impossibilitando o programa cair em algum loop;
+ Foi usada a variável VALOR como condição de entrada nos IF's e ELSE's, para fazer somente uma operação por vez.

## Finalização:

+ Imprimir o resultado da soma, e a matriz já alterada.
