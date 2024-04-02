# include <sdtio.h>

// Find your Grade.
int main() {
  int marks;
  printf("Enter your marks: ");
  scanf("%d",&marks);

  if (n>=90 && n<=100) {
    printf("Grade: O");
  }
  else if (n>=80 && n<=89) {
    printf("Grade: A");
  }
  else if (n>=70 && n<=79) {
    printf("Grade: B");
  }
  else if (n>=60 && n<=69) {
    printf("Grade: C");
  }
  else if (n>=50 && n<=59) {
    printf("Grade: D");
  }
  else if (n>=40 && n<=49) {
    printf("Grade: E");
  }
  else if (n>=0 && n<40) {
    printf("You are Fail");
  }
  else {
    printf("Invalid input");
  }
  return 0;
}
