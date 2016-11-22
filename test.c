#include "assert_util.h"

int main(void) {

  int *my_ptr;
  int x;
  
  my_ptr = &x;

  printf("Starting main()\n");

  ASSERT(my_ptr != NULL);
  printf("Past first assert\n");

  ASSERT(5 == 5);
  printf("Past second assert\n");

  ASSERT(1);
  printf("Done\n");

  return 0;
}
