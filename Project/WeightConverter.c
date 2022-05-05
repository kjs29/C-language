/*
You are visiting planets
All of a sudden you are curious how much you would weigh on other planets.
You are vising 
# Planet  Relative Gravity
1 Mercury	0.38
2	Venus	0.91
3	Mars	0.38
4	Jupiter	2.34
5	Saturn	1.06
6	Uranus	0.92
7	Neptune	1.19*/
#include <stdio.h>

int main() {
  double earthWeight;
  int planet;

  printf("Enter your EarthWeight : ");
  scanf("%lf",&earthWeight);
  printf("What planet are you visiting? \n\n1.Mercury\n2.Venue\n3.Mars\n4.Jupiter\n\nEnter your number : ");
  scanf("%d",&planet);
  
  switch (planet) {
    case 1:
      printf("Your weight is %fl",earthWeight*0.38);
      break;
    case 2:
      printf("Your weight is %fl",earthWeight*0.91);
      break;
    case 3:
      printf("Your weight is %fl",earthWeight*0.38);
      break;
    case 4:
      printf("Your weight is %fl",earthWeight*2.34);
      break;
    case 5:
      printf("Your weight is %fl",earthWeight*1.06);
      break;
    case 6:
      printf("Your weight is %fl",earthWeight*0.92);
      break;
    case 7:
      printf("Your weight is %fl",earthWeight*1.19);
      break;
    default:
      printf("Your earth weight is %fl",earthWeight);
      break;
    
  }
}
