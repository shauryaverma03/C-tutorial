# include <stdio.h>

int main() {
  int n;
  printf("Enter the length of an array: ");
  scanf("%d",&n);

  printf("Enter the %d numbers in the array: ",n);
  int arr[n];
  for (int i=0; i<n; i++) {
    scanf("%d",&arr[i]);
  }

  printf("\n");
  
  for (int i=0; i<n; i++) {
    printf("%d ",arr[i]);
  }

  return 0;
}
