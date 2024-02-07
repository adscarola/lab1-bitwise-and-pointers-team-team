#include <stdio.h>
#include <stdlib.h>

#include "DoubleLL.h"
#include "bitwise_f.h"

int main(void) {
  // Double linked list
  int keys[] = {1, 2, 3, 4, 5};
  int n = sizeof(keys) / sizeof(keys[0]);
  list_t *LL = (list_t *)malloc(sizeof(list_t));

  for (int i = n - 1; i >= 0; i--) push(LL, keys[i]);

  printf("Ascending...\n");
  print_LL(LL, ASC);

  printf("Descending...\n");
  print_LL(LL, DESC);

  // Print numbers
  for (unsigned char number = 0; number <= 9; ++number) {
    printf("Drawing number %d\n", number);
    print_number(number, 0);
  }

  return 0;
}
int in = 0b101010; // 42 in binary
 short k = 3; // Bit position to manipulate

 // Test bitwise operations
 printf("Original n: ");
 print_binary(in);
 in = turn_k_bit_off(in, k);
 printf("\nturn_k_bit_off at position %d:", k);
 print_binary(in);
 printf("k_bit_is_on at position %d: %s\n", k, k_bit_is_on(in, k) ? "ON" : "OFF");
 in = toggle_k_bit(in, k);
 printf("toggle_k_bit at position %d:", k);
 print_binary(in);
 // Test swap without a third variable
 short n1 = 10, n2 = 20;
 printf("\nBefore swap: \nn1 = ");
 print_binary(n1);
 printf("n2 = ");
 print_binary(n2);
 swap(&n1, &n2);
 printf("\nAfter swap: \nn1 = ");
 print_binary(n1);
 printf("n2 = ");
 print_binary(n2);
 // Test parity
 int odd_bits = 0b1010101; // 85 in binary
 printf("\nNumber ");
 print_binary(odd_bits);
 printf("has odd number of bits set: %s\n", has_odd_number_of_bits_set(odd_bits) ? "Yes" : "No");
 // Test palindrome
 int palindrome = 0b100001; // 33 in binary, not a palindrome
 printf("\nNumber ");
 print_binary(palindrome);
 printf("is a palindrome: %s\n", is_palindrome(palindrome) ? "Yes" : "No");
 // Test copy reverse bits
 short reverse_bits = copy_reverse_bits((short)odd_bits);
 printf("\nReverse of ");
 print_binary(odd_bits);
 print_binary(reverse_bits);
 char unique_str[] = "abcde";
 char non_unique_str[] = "hello";
 printf("\nString \"%s\" has all unique characters: %s\n", unique_str, is_unique(unique_str) ? "Yes" : "No");
 printf("String \"%s\" has all unique characters: %s\n", non_unique_str, is_unique(non_unique_str) ? "Yes" : "No");
 // Test print_number function
 // Note: This test's output needs to be visually inspected in a terminal.
 printf("\nPrinting number 2 with no reflection:\n");
 print_number(2, NO); // 'NO' is a valid enum for no reflection
 printf("\nPrinting number 2 with x-axis reflection:\n");
 print_number(2, x_axis); // Assuming 'x_axis' is a valid enum value for reflection along the x-axis
 