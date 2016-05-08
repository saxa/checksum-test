#include <stdio.h>
#include <stdlib.h>
#include <glib.h>

#include "gchksum.h"

int main (int argc, char **argv)
{
  if (argc <= 1){
    usage();
    exit(0);
  }

  FILE *file;
  int *size = NULL;
  char strptr[100];
  const char *chksum = NULL;


  file = fopen(argv[1], "rb");
  if(!file){
  	perror("fopen have not funcioned.");
  	return -2;
  }

  // printf("First entered arg is: %s", argv[1]);
  //printf("Please enter a string:\n");
  //scanf("%s", strptr);

  //printf("The entered string is:\n%s\n", strptr);


  GChecksum *md5 = g_checksum_new(G_CHECKSUM_MD5);

  char *data = NULL;
  size_t length = 0;

  do
  {
  	length = fread(data, 1, MAX_SIZE, file);
  	g_checksum_update(md5, data, length);
  }
  while (length == MAX_SIZE);

  chksum = g_checksum_get_string(md5);

  printf("MD5 checksum of the file is: %s\n", *chksum);

  g_checksum_free(md5);
  fclose(file);

return 0;
}

char *usage()
{
  printf("You have to supply a file as an argument.\n");
}
