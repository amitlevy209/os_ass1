#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"


void
memsize_test(void)
{
  int n;
  void *ptr;

  printf("memsize test\n");

  //before allocation 
  n = memsize();
  printf("Memory size before allocation: %d bytes\n", n);

  ptr = malloc(20 * 1024);

 if (ptr == 0){
    printf("allocated faied\n");
    exit(0);
 }

 //after allocation 
 n = memsize();
 printf("Memory size after allocation: %d bytes\n", n);

 // after freing allocation 
 free(ptr);
 n = memsize();
 printf("Memory size after freing allocation: %d bytes\n", n);

  printf("memsize test OK\n");
}

int
main(void)
{
  memsize_test();
  exit(0);
}