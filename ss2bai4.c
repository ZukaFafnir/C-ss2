#include <stdio.h>

int main() {
    int side = 5; // Khoi tao bien canh hình vuông và gán giá tri là 5
    int perimeter = 4 * side; // Tinh chu vi hinh vuong
    int area = side * side; // Tinh dien tich hinh vuong

    printf("Canh hinh vuong: %d\n", side);
    printf("Chu vi hinh vuong: %d\n", perimeter);
    printf("Dien tich hinh vuong: %d\n", area);
    return 0;
}
