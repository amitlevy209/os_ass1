#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(void)
{
  // Immediately exit with status 0 and the exit message "Goodbye World xv6"
  exit(0, "Goodbye World xv6");
  return 0;  // This is never reached.
}
