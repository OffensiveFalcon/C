#include <stdio.h>

int main() {
   int x = 0;
   int y = 0;
   while (x<5) {
      y = y + 2;
      if (y > 4)
          y = y - 1;
      printf("%i%i ", x, y);
      x = x + 1;
   }
   return 0;
}
