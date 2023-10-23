#include <stdio.h>
#include <stdlib.h>

int functionAcker(int , int );

int main() {
    int m, n;
    int result;

    scanf("%d %d", &m, &n);

    result = functionAcker(m, n);

    printf("%d", result);

    return 0;
}

int functionAcker(int m, int n) {
    
    if (m == 0) {
        return n + 1;
    }
    else if (n == 0 && m > 0) {
        return functionAcker(m - 1, 1);
    }
    else if (n > 0 && m > 0) {
        return functionAcker(m - 1, functionAcker(m, n - 1));
    }

    return 0;

}