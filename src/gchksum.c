#include <stdio.h>
#include <stdlib.h>
#include <glib.h>

#include "gchksum.h"

int main (int argc, char *argv[])
{
  if (argc = 0){
    usage();
    exit(0);
  }

  char strptr[100];
  char chksum[32];

  printf("Please enter a string:\n");
  scanf("%s", strptr);

  printf("The entered string is:\n%s\n", strptr);
  printf("Checksum of the string in md5 is: %s\n", chksum);

return 0;
}

char *usage()
{
  printf("You have to supply a file as an argument.\n");
}
