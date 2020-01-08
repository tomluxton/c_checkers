#include <stdio.h>
#include <stdlib.h>

int main()
{
    int boardX = 17;
    int boardY = 10;
    char board[boardY][boardX];


    for (int i = 0; i < boardY; i++) {
        for (int j = 0; j < boardX; j++) {
            if (i == 0 || i == boardY -1){
                board[i][j] = '_';
                printf("%c", board[i][j]);
            }
            if (i == 1 || i == 3) {
                if ((j % 4 == 0) || (j % 4 == 2)){
                    board[i][j] = '|';
                    printf("%c", board[i][j]);
                }
                if (j % 4 == 1) {
                    board[i][j] = '_';
                    printf("%c", board[i][j]);
                }
                if (j % 4 == 3) {
                    board[i][j] = 'o';
                    printf("%c", board[i][j]);
                }
            }
            if (i == 2) {
                if ((j % 4 == 0) || (j % 4 == 2)){
                    board[i][j] = '|';
                    printf("%c", board[i][j]);
                }
                if (j % 4 == 3) {
                    board[i][j] = '_';
                    printf("%c", board[i][j]);
                }
                if (j % 4 == 1) {
                    board[i][j] = 'o';
                    printf("%c", board[i][j]);
                }
            }
            if (i == 4 || i == 5) {
                if ((j % 4 == 0) || (j % 4 == 2)){
                    board[i][j] = '|';
                    printf("%c", board[i][j]);
                }
                if ((j % 4 == 1) || (j % 4 == 3)) {
                    board[i][j] = '_';
                    printf("%c", board[i][j]);
                }
            }
            if (i == 6 || i == 8) {
                if ((j % 4 == 0) || (j % 4 == 2)){
                    board[i][j] = '|';
                    printf("%c", board[i][j]);
                }
                if (j % 4 == 1) {
                    board[i][j] = '_';
                    printf("%c", board[i][j]);
                }
                if (j % 4 == 3) {
                    board[i][j] = 'x';
                    printf("%c", board[i][j]);
                }
            }
            if (i == 7) {
                if ((j % 4 == 0) || (j % 4 == 2)){
                    board[i][j] = '|';
                    printf("%c", board[i][j]);
                }
                if (j % 4 == 3) {
                    board[i][j] = '_';
                    printf("%c", board[i][j]);
                }
                if (j % 4 == 1) {
                    board[i][j] = 'x';
                    printf("%c", board[i][j]);
                }
            }
        }
    printf("\n");
    }

    return 0;
}
