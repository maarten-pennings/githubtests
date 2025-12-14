#include "lib.h"

static int lib_t;

void lib_set(int t) {
  lin_t = t;
}

int  lib_get(int i) {
  return i*lib_t;
}

