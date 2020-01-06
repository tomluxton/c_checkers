#include <stdio.h>
#include <stdlib.h>

int main()
{
    char board[17][10];

    for (int i = 0; i < sizeof(board)/sizeof(board[0]); i++) {
        board[i][0] = '_';
    }

    for (int j = 0; j < sizeof(board)/sizeof(board[0]); j++) {
        printf("%c", board[j][0]);
    }
    printf("\n");

    // rest of board can be fitted into the for loop with
    // another layer of for loop O(n^2), with if statements

    printf("|_|o|_|o|_|o|_|o|\n");
    printf("|o|_|o|_|o|_|o|_|\n");
    printf("|_|o|_|o|_|o|_|o|\n");
    printf("|_|_|_|_|_|_|_|_|\n");
    printf("|_|_|_|_|_|_|_|_|\n");
    printf("|x|_|x|_|x|_|x|_|\n");
    printf("|_|x|_|x|_|x|_|x|\n");
    printf("|x|_|x|_|x|_|x|_|\n");
    printf("_________________\n");
    return 0;
}
