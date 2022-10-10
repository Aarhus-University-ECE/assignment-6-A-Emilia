#include <stdio.h>
#include <assert.h>

int max(int* numbers, int size)
{
  assert(size>0);
  int max=numbers[0];

    for(int c=1;c<size;c++){
      if(max<numbers[c]) {
         max=numbers[c];
         }
      }
    return max;
}
