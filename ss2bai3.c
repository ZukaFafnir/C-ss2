#include <stdio.h>

int main() {
    int a = 15;
    int b = 20;
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    float quotient = (float)a / b;

    printf("Tong cua %d v� %d l�: %d\n", a, b, sum);
    printf("Hieu cua %d v� %d l�: %d\n", a, b, difference);
    printf("Tich cua %d v� %d l�: %d\n", a, b, product);
    printf("Thuong cua %d v� %d l�: %.2f\n", a, b, quotient);
    return 0;
}
