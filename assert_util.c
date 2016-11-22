#include "assert_util.h"

void assert_handler(const char* file, int line) {
  printf("Hit ASSERT in file: %s, line: %d\n", file, line);
  exit(0);
}
