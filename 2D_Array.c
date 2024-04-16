# include <stdio.h>

int main() {
  int n;
  printf("Enter the number of row & coloumn matrix you want to form: ");
  scanf("%d",&n);

  int arr[n][n];
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      scanf("%d",&arr[i][j]);
    }
  }
  printf("\n");

  printf("%d X %d Matrix: ",n,n);
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}
