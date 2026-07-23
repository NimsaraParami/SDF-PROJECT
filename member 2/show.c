#include <stdio.h>

#define ROWS 5
#define COLS 10

char seats[ROWS][COLS];

void initSeats() {
    for(int i=0;i<ROWS;i++)
        for(int j=0;j<COLS;j++)
            seats[i][j] = 'O';
}

void viewShows() {
    printf("Movie A - 10AM\nMovie B - 2PM\nMovie C - 6PM\n");
}

void viewSeats() {
    for(int i=0;i<ROWS;i++) {
        printf("Row %c: ", 'A'+i);
        for(int j=0;j<COLS;j++) {
            printf("%c ", seats[i][j]);
        }
        printf("\n");
    }
}
