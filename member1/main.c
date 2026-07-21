#include <stdio.h>

void initSeats();
void viewShows();
void viewSeats();
void bookSeat();
void cancelSeat();
void searchBooking();
void revenueReport();

int main() {
    int choice;

    initSeats();

    while(1) {
        printf("\n===== Movie Ticket Booking System =====\n");
        printf("1. View Showtimes\n");
        printf("2. View Seat Map\n");
        printf("3. Book a Seat\n");
        printf("4. Cancel Booking\n");
        printf("5. Search Booking\n");
        printf("6. Revenue Report\n");
        printf("7. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: viewShows(); break;
            case 2: viewSeats(); break;
            case 3: bookSeat(); break;
            case 4: cancelSeat(); break;
            case 5: searchBooking(); break;
            case 6: revenueReport(); break;
            case 7: return 0;
            default: printf("Invalid choice!\n");
        }
    }
}
