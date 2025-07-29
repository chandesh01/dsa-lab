#include <stdio.h>

int main() {
  int size_arr = 10;
  int arr[size_arr], i, l = 0, s_l = 0, t_l = 0;

  // Fill the array
  for (i = 0; i < size_arr; i++) {
    printf("Enter the element [%d]: ", i);
    scanf("%d", &arr[i]);
  }


  // Find the largest element
  for (i = 0; i < size_arr; i++) {
    if (arr[i] > arr[l]) {
      l = i;
    }
  }

  // Find the second largest element
  for (i = 0; i < size_arr; i++) {
    if (arr[i] > arr[s_l] && i != l) {
      s_l = i;
    }
  }

  // Find the third largest element
  for (i = 0; i < size_arr; i++) {
    if (arr[i] > arr[t_l] && i != l && i != s_l) {
      t_l = i;
    }
  }

  printf("Largest: %d\n", arr[l]);
  printf("Second Largest: %d\n", arr[s_l]);
  printf("Third Largest: %d\n", arr[t_l]);

  return 0;
}
