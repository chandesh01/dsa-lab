#include <stdio.h>

int main() {
  int size_arr = 5;
  int arr[size_arr], i, l = -2, s_l = -2, t_l = -2;

  // Fill the array
  for (i = 0; i < size_arr; i++) {
    printf("Enter the element [%d]: ", i);
    scanf("%d", &arr[i]);
  }

  // Find the elements
  for (i = 0; i < size_arr; i++) {
    if (arr[i] > l) {
      t_l = s_l;
      s_l = l;
      l = arr[i];
    } else if (arr[i] > s_l && arr[i] < l) {
      t_l = s_l;
      s_l = arr[i];
    } else if (arr[i] > t_l && arr[i] < s_l) {
      t_l = arr[i];
    }
  }

  printf("Largest: %d\n", l);
  printf("Second Largest: %d\n", s_l);
  printf("Third Largest: %d\n", t_l);
  return 0;
}
