#include <stdio.h>
#include <math.h>
int main() {
  int sum, a;
  scanf("%d", &sum);
  a = sum/365;
   printf("years: %d\n", a);
  a = (sum%365)/7;
  printf("weeks: %d\n", a);
  a = (sum%365)%7;
   printf("days: %d\n", a);
  return 0;
}