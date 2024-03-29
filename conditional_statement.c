
# include <stdio.h>

int main() {
  int marks;
  printf("Enter your marks: "); // On the behalf of your marks you can select your specialisation.
  scanf("%d",&marks);

  if (marks>=85 && marks<=100) {
    printf("You are eligible to take Cyber Security");
  }
  else if (marks>=75 && marks<85) {
    printf("You are eligible to take Data Science but you are not eligible to take Cyber Security");
  }
  else if (marks>=40 && marks<75) {
    printf("You are eligible for specilization except Data Science and Cyber Security");
  }
  else if (marks>=0 && marks<40) {
    printf("You are not eligibke for any of the specialization, First clear your Backlog");
  }
  else {
    printf("Invalid input");
      }

  return 0;

}
