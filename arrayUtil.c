#include <stdio.h>
#include <stdlib.h>
#include "arrayUtil.h"

ArrayUtil create(int typesize, int length) {
  ArrayUtil arrayUtil;
  arrayUtil.base = calloc(typesize, length);
  arrayUtil.typesize = typesize;
  arrayUtil.length = length;
  return arrayUtil;
}

int areEqual(ArrayUtil a, ArrayUtil b) {
  if (a.length == b.length && a.typesize == b.typesize) {
    return 1;
  }
  return 0;
}

ArrayUtil resize(ArrayUtil arrayUtill, int length) {
  arrayUtill.base = realloc(arrayUtill.base, arrayUtill.typesize * length);
  arrayUtill.length = length;
  return arrayUtill;
}
