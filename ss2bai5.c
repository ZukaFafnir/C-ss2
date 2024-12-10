#include <stdio.h>

int main() {
    int length = 10; // Khoi tao bien chieu dai hinh chu nhat
    int width = 5; // Khoi tao bien chieu rong hinh chu nhat
    int perimeter = 2 * (length + width); // Tinh chu vi hinh chu nhat
    int area = length * width; // Tinh dien tich hinh chu nhat

    printf("Chieu dai: %d\n", length);
    printf("Chieu rong: %d\n", width);
    printf("Chu vi hinh chu nhat: %d\n", perimeter);
    printf("Dien tich hinh chu nhat: %d\n", area);
    return 0;
}
