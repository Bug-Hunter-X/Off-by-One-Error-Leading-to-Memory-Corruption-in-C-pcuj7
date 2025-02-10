int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  int *ptr = arr + 5; // Pointer points beyond the array
  *ptr = 6; // This leads to undefined behavior 
  return 0;
}