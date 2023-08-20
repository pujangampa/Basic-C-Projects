#include <stdio.h>

int main() {
    int a, b;

    printf("Enter the Multiple : ");
    scanf("%d", &a);

    printf("Enter the Range : ");
    scanf("%d", &b);

    for (int i = 0; i <= b; i++) {
        printf("%d X %d = %d\n", a, i, a * i);
    }

    return 0;
}
