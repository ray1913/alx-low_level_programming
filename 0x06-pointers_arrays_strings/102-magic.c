#include <stdio.h>

int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
 /*
  * write your line of code here...
  * Remember:
  * - c ain't that hrad tho
  * - dont modify the p
  * - statement allowed is one
  * - dont use any code or write any except these
  * - you are not allowed to code anything else than this line of code
  */
*(p + 5) = 98;
/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}
