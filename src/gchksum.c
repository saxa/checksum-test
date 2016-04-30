#include <stdio.h>
#include <glib.h>

#include "gchksum.h"

int main (int argc, char *argv[])
{
  if (argc = 0)
    usage();

  char strptr[100];

  printf("Please enter a string:\n");
  scanf("%s", strptr);

  printf("The entered string is:\n%s", strptr);

return 0;
}

char *usage()
{
  printf("You have to supply a file as an argument.\n");
}
