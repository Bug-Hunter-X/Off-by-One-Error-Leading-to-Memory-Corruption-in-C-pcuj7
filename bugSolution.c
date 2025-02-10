int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  int *ptr = arr; // Pointer points to the beginning of the array

  // Accessing elements within the array bounds
  for (int i = 0; i < 5; i++) {
    printf("%d ", *(ptr + i));
  }
  printf("\n");

  return 0;
}