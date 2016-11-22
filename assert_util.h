#include <stdio.h>
#include <stdlib.h>

#define ASSERT(condition) (condition) ? 0:assert_handler(__FILE__, __LINE__);

void assert_internal(const char* file, int line);
