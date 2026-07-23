#include <stdio.h>

#define ROWS 5
#define COLS 10

extern char seats[ROWS][COLS];

// Cancel booking
void cancelSeat() {
    int r,c;

    printf("Enter seat to cancel (row col): ");
    scanf("%d %d",&r,&c);

    if(r<0 || r>=ROWS || c<0 || c>=COLS) {
        printf("Invalid seat!\n");
        return;
    }

    if(seats[r][c]=='O') {
        printf("Seat is not booked!\n");
        return;
    }

    seats[r][c] = 'O';
    printf("Booking cancelled!\n");
}

// Search booking
void searchBooking() {
    int r,c;

    printf("Enter seat to search (row col): ");
    scanf("%d %d",&r,&c);

    if(seats[r][c]=='X')
        printf("Seat is BOOKED\n");
    else
        printf("Seat is FREE\n");
}
