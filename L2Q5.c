#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
    Num 4
        - Divide por 2
        - Resto 0
        - Multiplica por 1
        - Soma 0
        - Result = 0
    Nums = 2
        - Divide por 2
        - Resto 0
        - Multiplica por 10
        - Soma 0
        - Result = 0
    Num = 1
        - Multiplica por 100
        - Soma no result 100
        - Result = 100
*/

int main() {
    int qntNums;
    int num = 0, resto = 0;
    long double result = 0;
    int count = 0;

    scanf("%d", &qntNums);

    if (qntNums < 1 || qntNums > 1000) {
        return 0;
    }

    int nums[qntNums];

    for (int i = 0; i < qntNums; i++) {
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < qntNums; i++) {
        num = nums[i];
        while (1) {
            resto = num % 2;
            num /= 2;
            
            result += resto * pow(10, count);
            count++;

            if (num < 2) {
                result += num * pow(10, count);
                break;
            }
        }
        printf("%0.Lf\n", result);
        result = 0;
        count = 0;
    }
}