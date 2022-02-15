#include <stdio.h>
void board();

int main() {
    int a = 0;
    int b = 0;
    int table;
    char choice;
    printf("Choose the table size\n");
    scanf("%u",&table);
    printf("Choose a or b\n");
    scanf("%s", &choice);
    printf("%u", table);
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
            printf("STP choisis entre a et b la prochaine fois");
    }


    board(a,b, table);
    return 0;
}
void createSquare(var){
    printf("__\n");
    printf("%d", var);
    printf(" |\n");
}
void board(a,b, table){
    printf("%d", table);
    int var;
    switch (table) {
        case 0:
            var = a;
            createSquare(var);
            break;
        case 2:
            printf("case marche");
            var = a;
            createSquare(var);
            var = b;
            createSquare(var);
            break;
        default:
            printf("case ne marche pas");
    }


   /* printf("  ");
    printf("%d", a);
    printf("  |  ");
    printf("%d",b);
    printf("  \n");
    printf("-----|-----\n");
    printf("  ");
    printf("%d", b);
    printf("  |  ");
    printf("%d",a);
    printf("  \n");*/
}