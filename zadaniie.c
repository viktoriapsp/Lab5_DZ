#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    const double a = -10.0;
    double x, y, f;
    printf("Введите число x: ");
    scanf("%lf", &x);
    printf("Введите число y: ");
    scanf("%lf", &y);
    f = log(fabs((y + sqrt(fabs(x))) * (x - y / (a + pow(x, 2) / 4))));
    printf("Результат: %lf", f);
    return 0;
}