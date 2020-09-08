// Author: Grace Lavin gcl5087@psu.edu
// Collaborator: Keyu Lu lvl566@psu.edu
// Collaborator: Jacob Henderson jrh6533@psu.edu
// Collaborator: Kristina Balta kqb5799@psu.edu
// Section: 1
// Breakout: 5
#include <stdio.h>
#include <readline/readline.h> 
#include <stdlib.h>

int main(void) {


    char *gradeValue = readline("Enter your CMPSC 131 grade: ");
    double grade = atof(gradeValue);
    char *letter ="";

    if (grade >= 93.0 )  {
      letter = "A";
    }
    else if (grade >= 90.0 ) {
      letter = "A-";
    }
    else if (grade>= 87.0) {
      letter = "B+" ;
    }
    else if (grade >= 83.0) {
      letter = "B";
    }
    else if (grade >= 80) {
      letter = "B-";
    }
    else if (grade >= 77.0) {
      letter = "C+";
    }
    else if (grade >= 70.0) {
      letter = "C";
    }
   else if (grade >= 60.0) {
     letter = "D";
   }
    else if (grade < 60.0) {
     letter = "F";
   }
   else {
      letter = "Null";
   }
  
    printf( "Your letter grade for CMPSC 131 is %s.\n", letter);
    return 0;
}