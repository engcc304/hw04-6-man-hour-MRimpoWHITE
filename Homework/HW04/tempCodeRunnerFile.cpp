#include<stdio.h>

int main(){

    int Eid ;
    float WorkHr , S;

    printf("Input the Employees ID(Max. 10 chars): \n");
    scanf("%3d", &Eid);

    printf("Input the working hrs: \n");
    scanf("%f" , &WorkHr);

    printf("Salary amount/hr: \n");
    scanf("%f" , &S);

    printf("Expected Output:\n");
    printf("Employees ID = %3d\n", Eid);
    printf("Salary = U$ %0.2f", WorkHr * S);

    return 0 ;
}