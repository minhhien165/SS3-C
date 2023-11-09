#include <stdio.h>

int main() {
    int number1, number2, number3;
    int max, min;

    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &number1);

    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &number2);

    printf("Nhap so nguyen thu ba: ");
    scanf("%d", &number3);

    max = number1;
    min = number1;

    if (max < number2) {
        max = number2;
    }

    if (max < number3) {
        max = number3;
    }

    if (min > number2) {
        min = number2;
    }

    if (min > number3) {
        min = number3;
    }

    printf("So nguyen lon nhat la: %d\n", max);
    printf("So nguyen nho nhat la: %d\n", min);

    return 0;
}
