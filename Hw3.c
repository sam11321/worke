#include <stdio.h>
int main(){
    double rainfall1,rainfall2;
    printf("Enter the hightest rainfall ever recorded for a country: ");
    scanf("%lf",&rainfall1);
    printf("Enter the hightest rainfall in the current year for that country: ");
    scanf("%lf",&rainfall2);
    if (rainfall1 < rainfall2){
        printf("The rainfall made a new record");
    }
    else if(rainfall1 >= rainfall2){
        printf("It assigns that the value as the highest rainfall ever ");  
    }
    return 0;
}