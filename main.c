#include <stdio.h>
#include <string.h>

void board();

int main() {
    int a = 0;
    int b = 0;
    int table = 4;
    char row;
    int column;
    int position[16] = {};
    printf("Choose A => D\n");
    scanf("%s", &row);
    printf("1=>4\n");
    scanf("%d", &column);
    switch (row & column) {
        case 'A' & 1:
            printf("Add a number: \n");
            scanf("%d", &position[0]);
            break;
        case 'A' & 2:
            printf("Add a number: \n");
            scanf("%d", &position[1]);
            break;
        case 'A' & 3:
            printf("Add a number: \n");
            scanf("%d", &position[2]);
            break;
        case 'A' & 4:
            printf("Add a number: \n");
            scanf("%d", &position[3]);
            break;
        case 'B' & 1:
            printf("Add a number: \n");
            scanf("%d", &position[4]);
            break;
        case 'B' & 2:
            printf("Add a number: \n");
            scanf("%d", &position[5]);
            break;
        case 'B' & 3:
            printf("Add a number: \n");
            scanf("%d", &position[6]);
            break;
        case 'B' & 4:
            printf("Add a number: \n");
            scanf("%d", &position[7]);
            break;
        default:
            printf("STP choisis entre a et b la prochaine fois\n");
    }
    for (int i = 0; i < 16; i++) {
        printf("%d ", position[i]);
    }
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

void board(a,b, table) {
    createSquare(table, a, b);
}