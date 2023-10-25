#include <stdio.h>
#include <math.h>

// int inverteNum(int ,int );

int main() {
    int num = 0, aux = 0;
    int tam = 0;
    int soma = 0;
    int count = 0;

    scanf("%d", &num);
    aux = num;

    while (1)
    {
        aux /= 10;
        tam++;

        if (aux <= 0) {
            break;
        }
    }



    for (int i = tam - 1; i >= 0; i--) {
        aux = num;
        aux /= pow(10, i);
        soma += aux * pow(10, count);
        num -= aux * pow(10, i);
        count++;
    }

    printf("%d", soma);
    
    return 0;

}