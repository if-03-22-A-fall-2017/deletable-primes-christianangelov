/*----------------------------------------------------------
 *				HTBLA-Leonding / Class
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			deletable_primes.c
 * Author:			P. Bauer
 * Due Date:		October 16, 2012
 * ----------------------------------------------------------
 * Description:
 * Implementation of deletable_primes.h.
 * ----------------------------------------------------------
 */
 #include "deletable_primes.h"
 #include <stdio.h>
 #include <string.h>
 #include <math.h>

 unsigned long remove_digit(int index, unsigned long n)
 {
   long result = 0;
   int divisor = pow(10, index +1);
   int multply = pow(10, index);
   result = n / divisor;
   result *= multply;
   result += n % multply;
   return result;
 }
int get_ways(unsigned long p)
{
  int ways = 0;
  if(p < 10)
  {
    if(is_prime(p))
    {
      return 1;
    }
    return 0;
  }
  int count = 0;
  int len = get_length(p);

  while (count < len) {
    long n = remove_digit(count, p);
    if(is_prime(n))
    {
      int aa = get_ways(n);
      ways += aa;
    }
    count++;
  }
  return ways;
}
bool is_prime(long p)
{
   int c;
   for ( c = 2 ; c <= p - 1 ; c++ )
   {
      if ( p%c == 0 )
     return false;
   }
   return true;
}
int get_length(long num)
{
  int i = 0;
  int j= 0;
  do {
    i++;
    j = num / pow(10,i);
  } while(j != 0);
  return i;
}
