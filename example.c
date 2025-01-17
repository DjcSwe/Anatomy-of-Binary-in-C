#include <stdio.h>

void say_hello() {
   printf("Hello, World!\n");
}

int add_numbers(int a, int b) {
   return a + b;
}

int sub_numbers(int a, int b) {
   return a - b;
}

int main() {
   int add_result = add_numbers(10, 3);
   int sub_result = sub_numbers(10, 3);

   say_hello();
   printf("Addition Result: %d\n", add_result);
   printf("Subtraction Result: %d\n", sub_result);

   return 0;
}