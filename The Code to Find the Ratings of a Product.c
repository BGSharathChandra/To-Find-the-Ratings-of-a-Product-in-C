//This is a code in C language to take the Rating from 1 to 5.
#include<stdio.h>
int main(){
    int Ratings;

    printf("Enter your Ratings from 1 to 5:");
    scanf("%d",&Ratings);

    switch (Ratings)
    {
    case 1:
        printf("You have selected the Rating of our Product as 1\n");
        break;
        case 2:
        printf("You have selected the Rating of our Product as 2\n");
        break;
        case 3:
        printf("You have selected the Rating of our Product as 3\n");
        break;
        case 4:
        printf("You have selected the Rating of our Product as 4\n");
        break;
        case 5:
        printf("You have selected the Rating of our Product as 5\n");
        break;
    
    default:
    printf("You are Rating is invalid please try again\ns");
        break;
    }
    printf("Thank You for Rating our Product.");
    return 0;
}