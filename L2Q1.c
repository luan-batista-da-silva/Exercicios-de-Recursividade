#include <stdio.h>
#include <stdlib.h>

int imprimeNaturais(int);

int main() {
    int quantNums;

    scanf("%d", &quantNums);

    if (quantNums < 1 || quantNums > 5000) {
        return 0;
    }

    imprimeNaturais(quantNums);

    return 0;
}

int imprimeNaturais(int n) {
    static int i = 1;

    if (i == n) {
        printf("%d ", i);
        i++;
        return i;
    }
    else {
        printf("%d ", i);
        i++;
        return imprimeNaturais(n);
    }
    
}