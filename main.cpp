#include <iostream>
#include "sorting.h"
using namespace std;

int main(int argc, char *argv[])
{
  int i, N;
  int *a;

  N = argc - 1;
  a = new int[argc - 1];
  for (i = 0; i < N; i++)
  {
    a[i] = atoi(argv[i + 1]);
  }

  sort(a, N);
  display(a, N);
  delete [] a;
  return 0;
}
