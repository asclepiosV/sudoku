#include <stdio.h>
void board();

int main() {
    int a = 0;
    int b = 0;
    char choice;
    printf("Choose a or b\n");
    scanf("%s", &choice);
    switch (choice) {
        case 'a':
            printf("Add a number: \n");
            scanf("%d", &a);
            switch (a) {
                case 1:
                    b = 2;
                    break;
                case 2:
                    b = 1;
                    break;
            }
            break;
        case 'b':
            printf("Add a number: \n");
            scanf("%d", &b);
            switch (b) {
                case 1:
                    a = 2;
                    break;
                case 2:
                    a = 1;
                    break;
            }
            break;
        default:
            printf("STP choisi entre a et b la prochaine fois");
    }


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