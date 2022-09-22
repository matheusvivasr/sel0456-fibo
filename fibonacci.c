#include <stdio.h>

int fibo(int n){
  if (n <= 0) return 0;
  else if (n == 1) return 1;
  else return fibo(n - 1) + fibo(n - 2);
}

int main(){
  int k = 4 , r = fibo(k);
  printf ("o valor na posição [%d] da sequencia de fibonacci é [%d]", k, r);
  return 0;
}