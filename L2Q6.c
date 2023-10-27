/*
        Pode-se definir uma função ¨f (n), fatorial duplo de n, com n ∈ N, como sendo o produto de todos os
    números naturais ímpares de 1 até n, inclusive este, quando ele é ímpar. Assim, por exemplo, tem-se que:

    f (1) = 1
    f (2) = 1
    f (3) = 3
    f (5) = 15    

        Você deve escrever uma função recursiva, em C, que seja capaz de, recebendo n, imprimir o valor de
    f (n).

    Entrada:

        A única linha de entrada contém o valor de n, com 1 ≤ n ≤ 100.

    Saída:

        Imprima uma única linha de saída, com o valor de f (n).

    Exemplos:
    --------------------------------
    |   Entrada        |   Saída   |
    |   1              |   1       |
    --------------------------------
    |   Entrada        |   Saída   |
    |   7              |   105     |
    --------------------------------
    |   Entrada        |   Saída   |
    |   10             |   945     |
    --------------------------------

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int result = 1;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            result *= i;
        }
        else {
            continue;
        }
    }

    printf("%d", result);

}