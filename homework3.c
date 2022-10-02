#include <stdio.h>
int main(){
    double v, u, a, s, t;
    // 輸入速度、加速度、時間
    printf("Enter velocity initial conditions: ");
    scanf("%lf",&u);
    printf("Enter acceleration initial conditions: ");
    scanf("%lf",&a);
    printf("Enter time initial conditions: ");
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
        printf(" You got something wrong.Please rewrite the time\n");
        scanf("%lf", &t);
        v = u + (a*t);
        s = (u*t) + (t*t*2)/2;
        printf("V is%lf \n",v);
        printf("S is%lf ",s);
        return 0; 
    }
