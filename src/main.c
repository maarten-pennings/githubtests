#include <stdio.h>
#include "lib.h"

void main() {
  int t=7;
  lib_set(t);
  for( int i=1; i<=10 ; i++ ) {
    printf("%d x %d = %d\n",i,t,lib_get(i) );
  }
  return 0;
}

  
