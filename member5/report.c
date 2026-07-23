#include <stdio.h>

#define ROWS 5
#define COLS 10

extern char seats[ROWS][COLS];

// Calculate revenue
int calculateRevenue() {
    int total = 0;

    for(int i=0;i<ROWS;i++) {
        for(int j=0;j<COLS;j++) {
            if(seats[i][j]=='X') {
                if(i==0 || i==1) total += 500;
                else if(i==2 || i==3) total += 750;
                else total += 1000;
            }
        }
    }
    return total;
}

// Show revenue
void revenueReport() {
    printf("Total Revenue: Rs.%d\n", calculateRevenue());
}
