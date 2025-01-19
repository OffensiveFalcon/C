#include <stdio.h>


int main() {
     int feeling_hungry = 1;
     int hunger = 5;
     int feeling_queasy = 0;
     while (feeling_hungry == 1) {
	  printf("Eat one piece of cake.\n");
	  hunger--;
	  if (hunger == 0) {
	       feeling_queasy = 1;
	       if (feeling_queasy == 1){
	            puts("Too full");
	            break;
	       }
	  } else{
		continue;
	    }
     }
}
