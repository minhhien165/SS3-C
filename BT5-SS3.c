#include <stdio.h>

int main() {
    int number;
    int thousandDigit, hundredDigit, dozenDigit, unitDigit;
    int sum = 0;

    printf("Nhap so nguyen co 4 chu so: ");
    scanf("%d", &number);

    thousandDigit = number / 1000;
    hundredDigit = (number % 1000) / 100;
    dozenDigit = (number % 100) / 10;
    unitDigit = number % 10;

    sum = thousandDigit + hundredDigit + dozenDigit + unitDigit;

    printf("Tong cac chu so la: %d\n", sum);
    printf("So nghich dao cua so do la: %d%d%d%d\n", unitDigit, dozenDigit, hundredDigit, thousandDigit);

    return 0;
}
