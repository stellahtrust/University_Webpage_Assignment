int main() {
    int choice;

    print_nexos_logo();
    printf("System: NEXOS Embedded Controller\n");
    printf("Status: Ready\n\n");

    
    while (1) {
        printf("1. Run Automation Test\n");
        printf("2. Exit System\n");
        printf("Select Option: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid Input. Clearing buffer...\n");
            while(getchar() != '\n');
            continue;
        }

        if (choice == 1) {
            automate_game();
        }
        else if (choice == 2) {
            printf("Shutting down NEXOS System...\n");
            break;
        }
        else {
            printf("Invalid Option.\n");
        }

        printf("\n-----------------------\n");
        printf("\nCard 1:\n");
        printf("1 3 5 7\n");
        printf("9 11 13 15\n");
        printf("17 19 21 23\n");
        printf("25 27 29 31\n");
    }

    return 0;
}