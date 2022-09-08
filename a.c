#include "stdio.h"

int main() {

   printf("Hello world!\n");

   unsigned int a = 0x7FFFFFFF;
   int b = 0x80000000;
   //unsigned int a = 4294967295;
   printf("%u\n", a);
   printf("%d\n", b);
   printf("%d\n", a);

   return 0;

}
