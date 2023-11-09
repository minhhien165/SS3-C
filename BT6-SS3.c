#include <stdio.h>
#include <time.h>

int main() {
    int birthYear, currentYear, age;
    printf("Nhap vao nam sinh cua ban: ");
    scanf("%d", &birthYear);

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    currentYear = tm.tm_year + 1900;

    age = currentYear - birthYear;

    printf("Tuoi cua ban la: %d\n", age);
    printf("Tuoi caa ban la %s\n", (age % 2 == 0) ? "chan" : "le");

    return 0;
}
