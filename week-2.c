// Project Euler, week 2

#include <stdio.h>

int main() {
    register int fibMinus2 = 1;
    register int fibMinus1 = 1;
    register int fib = 2;
    register int i = 2;
    register int sum = 0;

    const int limit = 4000000;

    while (fib < limit) {
          if (i++ % 2 == 0) sum += fib;
            fibMinus2 = fibMinus1;
              fibMinus1 = fib;
                fib += fibMinus2;
    }

    printf("Sum: %d", sum);
}
