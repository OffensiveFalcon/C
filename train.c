#include <stdio.h>

int main() {
    int train;
    int winnings;
    puts("Enter the Value of Train:");
    train = 65;
    winnings = 0;
    switch(train) {
    case 37:
	winnings = winnings + 50;
	printf("The winning is %i\n",winnings);
	break;
    case 65:
	puts("Jackpot!");
	printf("The winning is %i\n",winnings);
        winnings = winnings + 80;
    case 12:
	winnings = winnings + 20;
	printf("The winning is %i\n",winnings);
        break;
    default:
	winnings = 0;
	printf("The winning is %i\n",winnings);
    }
    return 0;
}
