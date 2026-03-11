#include <stdio.h>
void print_nexos_logo() {
    printf("=================================\n");
    printf("        N E X O S  System\n");
    printf("   Networked Embedded OS\n");
    printf("=================================\n\n");
}
void automate_game() {
    int values[5] = {1, 2, 4, 8, 16};
    int number = 0;
    char answer;

    printf("\nThink of a number between 1 and 31.\n");

    for(int i = 0; i < 5; i++) {
        printf("Is your number in the card starting with %d? (y/n): ", values[i]);
        scanf(" %c", &answer);

        if(answer == 'y' || answer == 'Y') {
            number = number + values[i];
        }
    }

    printf("\nYour number is: %d\n", number);
}

