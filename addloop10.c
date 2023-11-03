#include <stdio.h>

int main() {
    int sum = 0;
    int number = 1;
    int count = 0;

    while (count < 10) {
        sum += number;
        number++;
        count++;
    }

    printf("The sum of 10 consecutive numbers starting from 1 is: %d\n", sum);

    return 0;
}