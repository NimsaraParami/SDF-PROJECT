#include <stdio.h>

#define ROWS 5
#define COLS 10

extern char seats[ROWS][COLS];

// Pricing rules
int getPrice(int row) {
    if(row == 0 || row == 1) return 500;     // A-B
    else if(row == 2 || row == 3) return 750; // C-D
    else return 1000;                        // E
}

void bookSeat() {
    int r,c;

    printf("Enter row (0=A ... 4=E) and column (0-9): ");
    scanf("%d %d",&r,&c);

    if(r<0 || r>=ROWS || c<0 || c>=COLS) {
        printf("Invalid seat!\n");
        return;
    }

    if(seats[r][c]=='X') {
        printf("Seat already booked!\n");
        return;
    }

    int price = getPrice(r);
    seats[r][c] = 'X';

    printf("Seat booked!\n");
    printf("Row %c Seat %d\n", 'A'+r, c);
    printf("Price: Rs.%d\n", price);
}

