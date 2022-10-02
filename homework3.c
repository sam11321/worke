#include <stdio.h>
int main(){
    double v, u, a, s, t;
    // 輸入速度、加速度、時間
    printf("Enter initial velocity: ");
    scanf("%lf",&u);
    printf("Enter initial acceleration: ");
    scanf("%lf",&a);
    printf("Enter initial time: ");
    scanf("%lf",&t);
    //
    if (t >= 0){ 
        v = u + (a*t);
        s = (u*t) + (t*t*2)/2;
        printf("V is%lf\n",v);
        printf("S is%lf",s);
    }
    if( v < 0){
       printf("\nThe way of velocity is opposite to the origin one");
    }
    if(s < 0 ){
       printf("\nThe way of distance is opposite to the origin one");
    } 
    else if(t < 0)
    {
        printf(" You enter wrong value.Please rewrite the time\n");
        scanf("%lf", &t);
        v = u + (a*t);
        s = (u*t) + (t*t*2)/2;
        return (v = u + (a*t),s = (u*t) + (t*t*2)/2) ;
    }
}