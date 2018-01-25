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
   int p = pow(10,index +1);
   int mod = n % p;
   
   if(index == 0)
   {
     return (n - mod)/p;
   }
   else

   return 0;
   //return (345 - 345%pow(10,index+1) )/pow(10,index+1) ;

   //345 % 10 = 5
   //345 - 5 = 340 / 10^2
 }
 int get_ways(unsigned long p)
 {
   return 0;
 }
//    3     4       5
// 10^2    10^1   10^0
//350 +9
//-> 35 * 10
