#include <stdio.h>
#include <stdlib.h>

int binary_search(int arr[], int target, int left, int right);
"testing commit on shh key"
int main(int argc, char *argv[])
{ 
    int arr[] = {1, 3, 5, 6, 7, 8, 11, 13, 17};   
    int index = binary_search(arr, 5, 0, sizeof(arr)/sizeof(arr[0]) - 1);
    printf("the index is %di\n", index);
    int index2 = binary_search(arr, 29, 0, sizeof(arr)/sizeof(arr[0]) - 1);
    printf("index two is %d\n", index2);
    return 0;
}

int binary_search(int arr[], int target, int left, int right)
{
  //list has to be sorted
  if (left <= right)
  {

    int mid = (left + right)/2;
    if (arr[mid] == target)
    {
      return mid;
    }
    else if (arr[mid] < target)
    {
      return binary_search(arr, target, mid + 1, right);
    }
    else 
    {
      return binary_search(arr, target, left, mid - 1);
    }
  }

  
  return -1;
}


