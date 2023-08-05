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

// #include <stdio.h>
// #include <locale.h>

// int main()
// {
//     int i;
//     char Eidstr[11];
//     float WorkHr, S;
//     // setlocale(LC_NUMERIC, "");

//     printf("Input the Employees ID(Max. 10 chars): \n");
//     scanf("%10s", Eidstr);

//     printf("Input the working hrs: \n");
//     scanf("%f", &WorkHr);

//     printf("Salary amount/hr: \n");
//     scanf("%f", &S);

//     float salary = WorkHr * S;

//     printf("Expected Output:\n");
//     printf("Employees ID = %s\n", Eidstr);
    

//     // if( WorkHr == 11){
//     //     printf("Salary = U$ 374,000.00");
//     // }else{
//     //     printf("Salary = U$ 120,000.00");
//     // }

//     printf("Salary = U$ %'0.2f\n", salary);

//     return 0;
// }








#include <stdio.h>
#include <string.h>

void addCommasToFloat(float value, char *formattedValue) {
    // Assuming the formattedValue will fit within 20 characters
    char temp[20];
    sprintf(temp, "%.2f", value);

    int length = strlen(temp);
    int commas = (length - 4) / 3; // Calculate how many commas are needed

    int j = 0;
    for (int i = 0; i < length; i++) {
        if (temp[i] == '.') {
            formattedValue[j++] = '.';
            continue;
        }

        formattedValue[j++] = temp[i];
        if ((length - i - 1) % 3 == 0 && (length - i - 1) != 0) {
            formattedValue[j++] = ',';
        }
    }
    formattedValue[j] = '\0';
}

int main() {
    int i;
    char Eidstr[11];
    float WorkHr, S;

    printf("Input the Employees ID(Max. 10 chars): \n");
    scanf("%10s", Eidstr);

    printf("Input the working hrs: \n");
    scanf("%f", &WorkHr);

    printf("Salary amount/hr: \n");
    scanf("%f", &S);

    float salary = WorkHr * S;

    char formattedSalary[20];
    addCommasToFloat(salary, formattedSalary);

    printf("Expected Output:\n");
    printf("Employees ID = %s\n", Eidstr);
    printf("Salary = U$ %s\n", formattedSalary);

    return 0;
}


