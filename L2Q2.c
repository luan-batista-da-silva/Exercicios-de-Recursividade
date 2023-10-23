#include <stdio.h>
#include <stdlib.h>


int calcFibonacci(int );

int main() {
    int casaDesejada;
    // int i = 0;

    scanf("%d", &casaDesejada);

    if(casaDesejada < 0 || casaDesejada > 1000) {
        return 0;
    }

    for (int i = 0; i <= casaDesejada; i++) {
        printf("%d ", calcFibonacci(i));
    }
    
    return 0;
}

int calcFibonacci(int n) {

    if (n == 0) {
        return 0;
    }
    else if (n ==  1) {
        return 1;
    }
    else {
        return calcFibonacci(n - 2) + calcFibonacci(n - 1);
    }
 
    
}