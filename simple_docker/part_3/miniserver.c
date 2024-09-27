#include "fcgi_stdio.h"
#include <stdio.h>

int main() {
  while (FCGI_Accept() >= 0) {
    printf("Content-Type: text/html\n\nHello, World!\n");
  }
  return 0;
}