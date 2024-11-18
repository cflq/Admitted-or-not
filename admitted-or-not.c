#include <stdio.h>

int main() {
    float s1, s2, DS1, DS2, moy;
    char name[30];

    printf("enter your name here : ");
    scanf("%s" , &name);

    printf("Hello %s , Enter your grade on S1 here : " , &name);
    scanf("%f", &s1);
    

    if (s1 < 0 || s1 > 20) {
        printf("Error: Please enter a valid number between 0 and 20\n");
        return 1;
    }

    printf("Enter your grade on S2 here : ");
    scanf("%f", &s2);
    

    if (s2 < 0 || s2 > 20) {
        printf("Error: Please enter a valid number between 0 and 20\n");
        return 1;
    }

    moy = (s1 + s2) / 2;

    if (moy >= 10) {
        printf("\nMoyenne = %.2f\n", moy);
        printf("\nCongratulations %s !, you're admitted !\n" , &name);

        if (moy >=  10 && moy <13) 
      {
      printf("\nNote : acceptable");
      }
      else
      if (moy >= 13 && moy < 15)
      {
      printf("\nnote : good");
      }
      else 
      if (moy >= 15 && moy < 17)
      {
      printf("\nnote : very good");
      }
      else
      if (moy >= 17 &&  moy < 20)
      {
      printf("\nnote : excellent");
      }
      return 0;

    } else { 
 
        printf("Enter your debts of S1 : ");
        scanf("%f", &DS1);

        printf("Enter your debts of S2 : ");
        scanf("%f", &DS2);

        if ((DS1 >= 20 && DS2 >= 10 ) || (DS1 >= 10 && DS2 >= 20))
        {
            printf("\nCongratulations %s !, you're admitted with debts!\n" , &name);
        } else {
            printf("\nUnfortunately, you're not admitted. good luck for next year %s !\n" , &name);
        }
    }

    return 0;
}