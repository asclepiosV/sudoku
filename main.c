#include <stdio.h>
void board();

int main() {
    board();
    return 0;
}

void board(){
    int a = 1;
    int b = 2;
    printf("  ");
    printf("%d", a);
    printf("  |  ");
    printf("%d",b);
    printf("  \n");
    printf("-----|-----\n");
    printf("  ");
    printf("%d", b);
    printf("  |  ");
    printf("%d",a);
    printf("  \n");
}