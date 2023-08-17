#include <stdio.h>

#include "s21_decimal.h"

int main() {
  s21_deciamal val1 = {0, 0, 15, 393216};
  s21_deciamal val1 = {0, 0, 3, 524288};
  s21_deciamal result = {0};

  s21_add(val1, val2, result);

  printf("[%d] [%d] [%d] [%d]\n", result.bits[0], result.bits[1],
         result.bits[2], result.bits[3]);

  return 0;
}