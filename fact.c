#include <stdio.h>
     
    void fact()
    {
      int c, n, fact = 1;
     
      printf("Enter a number to calculate its factorial \n\n\n");
      scanf("%d", &n);
     
      for (c = 1; c <= n; c++)
        fact = fact * c;
     
      printf("Factorial of %d = %d\n\n\n\n", n, fact);
     
    // return 0;
    }