#include <stdio.h>

int main() {
	char card = 'C';
	switch(card) {
	case 'C':
		puts("Clubs");
		break;
	case 'D':
		puts("Diamonds");
		break;
	case 'H':
		puts("Hearts");
		break;
	default:
		puts("Spades");
	} 	
		
}
