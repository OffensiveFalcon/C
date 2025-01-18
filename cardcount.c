#include <stdio.h>

int main()
{
     int decks;
     puts("Enter the Number of cards:");
     scanf("%i", &decks);
     if (decks < 1) {
	puts("Thats is not a valid number of decks");
        return 1;
     }
     printf("There are %i cards\n", (decks * 52));
     return 0;
}
