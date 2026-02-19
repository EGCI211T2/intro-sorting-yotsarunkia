//
//  main.cpp
//  First arg
//
//  Created by Mingmanas Sivaraksa on 2/1/2567 BE.
//

#include <iostream>
#include "sorting.h"
using namespace std;

int main(int argc, char *argv[])
{

  cout << "argc is " << argc << endl;
  int i, N;
  int *a;
  for (i = 1; i < argc; i++)
  {
    cout << "argv[" << i << "]" << argv[i] << endl;
  }

  /* Convert to numbers*/
  N = argc - 1;
  a = new int[argc - 1];
  for (i = 0; i < N; i++)
  {
    a[i] = atoi(argv[i + 1]);
  }
  cout << "Before sorting:";
  display(a, N);

  sort(a, N);
  cout << "After sorting:";
  display(a, N);

  return 0;
}
