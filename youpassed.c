#include <stdio.h>

int main() {
char c;
printf("So which exams you passed?\nChoose options (A, B or C):\nA.Maths\nB.English\nC.Both\n\n");
scanf(" %c", &c);

if (c=='A'||c=='a'){
    printf("\nCongrats, you Passed Maths \n Here's you gift: \n $15");
}
else if (c=='B'||c=='b'){
    printf("\nCongrats, you Passed Englsih \n Here's you gift: \n $15");
}
else if (c=='C'||c=='c'){
    printf("\nCongrats, you Passed Both exams \n Here's you gift: \n $45");
}
else {
    printf("\nman,get outta here!");
}

//You should use == for comparison, not =
//= is assignment | == is comparison
//'||' is OR operator
}