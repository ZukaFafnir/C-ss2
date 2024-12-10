#include <stdio.h>

int main() {
    const float PI = 3.14; // Khai bao hang cua PI
    float radius = 5.0; // Khoi tao ban kinh hinh trong

    float circumference = 2 * PI * radius; // Tinh chu vi hinh tron
    float area = PI * radius * radius; // Tinh dien tich hinh tron

    printf("Ban kinh hinh tron: %.2f\n", radius);
    printf("Chu vi hinh tron: %.2f\n", circumference);
    printf("Dien tich hinh tron: %.2f\n", area);

    return 0;
}
