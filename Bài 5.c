#include <stdio.h>
int main(){
    int number[5] = {16, 5, 30, 4, 42};
    int max = number[0];
    int min = number[0];
    for (int i = 1; i < 5; i++) {
        if (number[i] > max) {
            max = number[i];
        }
        if (number[i] < min) {
            min = number[i];
        }
    }
    printf("Phan tu lon nhat trong mang tren la: %d\n", max);
    printf("Phan tu nho nhat trong mang tren la: %d\n", min);
    return 0;
}
