#include <stdio.h>

typedef struct {
  int *base;
  int typesize;
  int length;
} ArrayUtil;

ArrayUtil create(int, int);

int areEqual(ArrayUtil a, ArrayUtil b);

ArrayUtil resize(ArrayUtil util, int length);

// int findIndex(ArrayUtil util, void *element);
