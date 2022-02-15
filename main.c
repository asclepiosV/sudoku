#include <stdio.h>
void board();

int main() {
    int a = 0;
    int b = 0;
    printf("Add number: \n");
    scanf("%d%d", &a, &b);
    board(a,b);
    return 0;
}

void board(a,b){
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