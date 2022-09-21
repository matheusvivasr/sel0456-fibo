#include <stdio.h>

int main ()
{
    int f = 0, g = 0, h = 0;
    int k = 3, r;

    for(int i = 0; i < k; i++) {
        if(i == 1)h = 1;
        else {
            f = g;
            g = h;
            h = f + g;
        }
    }

    r = g + h;


  printf ("o valor na posição [%d] da sequencia de fibonacci é [%d]\n", k, r);
  return 0;
    
}