#include <stdio.h>
void board();

int main() {
    int a = 0;
    int b = 0;
    int table;
    int test;
    char choice;
    printf("Choose the table size\n");
    scanf("%i",&table);
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
            printf("STP choisis entre a et b la prochaine fois");
    }


    board(a,b, table);
    return 0;
}
void createSquare(table, a, b){
    int i = 0;
    int x = 0;
    int var;
    while (table > x) {
        while (table > i) {
            if(x == i ){
                var = a;
            }
            else var = b;
            printf("%d", var);
            printf(" | ");
            i += 1;
        }
        i = 0;
        printf("\n");
        x += 1;
    }

}

void board(a,b, table){
    createSquare(table, a, b);

   /* switch (table) {
        case 1:
            var = a;
            createSquare(var);
            break;
        case 2:
            var = a;
            createSquare(var);
            var = b;
            createSquare(var);
            break;
        default:
            printf("case ne marche pas");
    }*/


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