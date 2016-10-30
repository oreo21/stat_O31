#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <time.h>
#include <errno.h>
#include <string.h>

int main(){
  struct stat data;
  int info = stat("dispStat.c", &data);
  if (info == -1){
    printf("error: %d - %s\n", errno, strerror(errno));
    return -1;
  }
  printf("\nprinting dispStat.c file stats...\n");
  printf("file size: %lu\n", data.st_size);
  printf("permissions: %o\n", data.st_mode);
  printf("last access time: %s", ctime(&(data.st_atime)));
  return 0;
}
