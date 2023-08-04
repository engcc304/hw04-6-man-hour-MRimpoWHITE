/*
    เขียนโปรแกรมภาษาซีเพื่อรับข้อมูลพนักงานของบริษัทซอร์ฟแวร์ โดยรับข้อมูล รหัสประจำตัวพนักงาน , จำนวนชั่วโมงที่ทำงาน , รายได้ต่อชั่วโมง จากนั้นให้แสดงข้อมูลเลขประจำตัวพนักงาน พร้อมกับรายได้ทั้งหมดที่หนักงานจะได้รับทั้งหมด
    (ผลลัพธ์ของ Salary จะต้องอยู่ในรูปแบบ Decimal Number เท่านั้น เช่น 374,000)

    Test case:
        Input the Employees ID(Max. 10 chars): 
            0342
        Input the working hrs: 
            8
        Salary amount/hr: 
            15000
    Output:
        Expected Output:
        Employees ID = 0342
        Salary = U$ 120,000.00

    Test case:
        Input the Employees ID(Max. 10 chars): 
            0000500349
        Input the working hrs: 
            11
        Salary amount/hr: 
            34000
    Output:
        Expected Output:
        Employees ID = 0000500349
        Salary = U$ 374,000.00
*/


// #include<stdio.h>

// int main(){

//     int Eid ;
//     float WorkHr , S;

//     printf("Input the Employees ID(Max. 10 chars): \n");
//     scanf("%3d", &Eid);

//     printf("Input the working hrs: \n");
//     scanf("%f" , &WorkHr);

//     printf("Salary amount/hr: \n");
//     scanf("%f" , &S);

//     printf("Expected Output:\n");
//     printf("Employees ID = %3d\n", Eid);
//     printf("Salary = U$ %0.2f", WorkHr * S);

//     return 0 ;
// }




// #include<stdio.h>

// int main() {
//     char EidStr[11]; // Allocate space for 11 characters (10 characters + '\0')
//     int Eid;
//     float WorkHr, S;

//     printf("Input the Employees ID (Max. 10 chars): \n");
//     scanf("%2s", EidStr); // Read up to 10 characters as a string

//     // Extract the numeric part of the Employee ID using sscanf
//     sscanf(EidStr, "%2d", &Eid);

//     printf("Input the working hrs: \n");
//     scanf("%f", &WorkHr);

//     printf("Salary amount/hr: \n");
//     scanf("%f", &S);

//     printf("Expected Output:\n");
//     printf("Employees ID = %2d\n", Eid); // Displaying the Employee ID with a width of 10 characters
//     printf("Salary = U$ %0.2f", WorkHr * S);

//     return 0;
// }




// #include <stdio.h>

// int main() {
//     int Eid;
//     float WorkHr, S;

//     printf("Input the Employees ID (Max. 10 digits): \n");
//     if (scanf("%10d", &Eid) != 1) {
//         printf("Invalid input for Employees ID.\n");
//         return 1;
//     }

//     printf("Input the working hrs: \n");
//     if (scanf("%f", &WorkHr) != 1) {
//         printf("Invalid input for working hours.\n");
//         return 1;
//     }

//     printf("Salary amount/hr: \n");
//     if (scanf("%f", &S) != 1) {
//         printf("Invalid input for Salary amount/hr.\n");
//         return 1;
//     }

//     printf("Expected Output:\n");
//     printf("Employees ID = %d\n", Eid);
//     printf("Salary = U$ %0.2f\n", WorkHr * S);

//     return 0;
// }






#include <stdio.h>

// Function to add commas to the salary amount for better readability
void formatSalaryWithCommas(float salary, char *formattedSalary) {
    sprintf(formattedSalary, "%'.2f", salary);
}

int main() {
    int Eid;
    float WorkHr, S;
    char formattedSalary[20];

    printf("Input the Employees ID (Max. 10 digits): \n");
    if (scanf("%10d", &Eid) != 1) {
        printf("Invalid input for Employees ID.\n");
        return 1;
    }
    // Clear the input buffer to consume any extra characters, including the newline
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Input the working hrs: \n");
    if (scanf("%f", &WorkHr) != 1) {
        printf("Invalid input for working hours.\n");
        return 1;
    }

    printf("Salary amount/hr: \n");
    if (scanf("%f", &S) != 1) {
        printf("Invalid input for Salary amount/hr.\n");
        return 1;
    }

    float salary = WorkHr * S;
    formatSalaryWithCommas(salary, formattedSalary);

    printf("Expected Output:\n");
    printf("Employees ID = %d\n", Eid);
    printf("Salary = U$ %s\n", formattedSalary);

    return 0;
}