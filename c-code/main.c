#include <stdio.h>

int main(int argc, char *argv[]) {
  FILE *fp;
  fp = fopen("config/args", "w");
  for(unsigned i=0; i < argc; ++i)
        fprintf(fp, "%s", argv[i]);
  fclose(fp);
}
