#include <stdio.h>
#include <assert.h>
#include "arrayUtil.h"

void creating_an_array_and_check_typesize_and_length() {
  ArrayUtil array;
  array = create(5, 8);
  assert(array.typesize == 5);
  assert(array.length == 8);
}

void compare_two_arguments() {
  ArrayUtil array1 = create(2, 8);
  ArrayUtil array2 = create(2, 8);
  ArrayUtil array3 = create(8, 2);
  ArrayUtil array4 = create(5, 8);

  assert(areEqual(array1, array2) == 1);
  assert(areEqual(array2, array3) == 0);
  assert(areEqual(array3, array4) == 0);
}

void test_for_resize_array() {
  ArrayUtil anatherArray;
  anatherArray = create(4, 6);
  assert(anatherArray.length == 6);

  anatherArray = resize(anatherArray, 9);
  assert(anatherArray.length == 9);

  anatherArray = resize(anatherArray, 10);
  assert(anatherArray.length == 10);

  anatherArray = resize(anatherArray, 3);
  assert(anatherArray.length == 3);
}

void find_index_from_an_array_when_give_a_numbae_of_that_array() {
  int array[5] = {}
}

int main(int argc, char const *argv[]) {
  creating_an_array_and_check_typesize_and_length();
  compare_two_arguments();
  test_for_resize_array();
  find_index_from_an_array_when_give_a_value_of_that_array();
  return 0;
}
