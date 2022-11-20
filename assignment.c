#include<stdio.h>
#include<stdlib.h>


//	Write a C program that reads two numbers and find their sum
int main(){
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum = %d", sum);
    return 0;
}
// 2.	Write a C program that reads a number test whether it even or odd.
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a % 2 == 0){
        printf("Even");
    }else{
        printf("Odd");
    }
    return 0;
}
// 3.	Write a C program that reads a number and tests whether it is multiple of 7 or not
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a % 7 == 0){
        printf("Multiple of 7");
    }else{
        printf("Not a multiple of 7");
    }
    return 0;
}
// 4.	Write a C program that reads length and breadth of a rectangle and find its area and perimeter
int main(){
    int l, b, area, perimeter;
    printf("Enter length and breadth: ");
    scanf("%d %d", &l, &b);
    area = l * b;
    perimeter = 2 * (l + b);
    printf("Area = %d, Perimeter = %d", area, perimeter);
    return 0;
}
// 5.	Write a C program reads radius of circle and finds its area and circumference
int main(){
    int r;
    float area, circumference;
    printf("Enter radius: ");
    scanf("%d", &r);
    area = 3.14 * r * r;
    circumference = 2 * 3.14 * r;
    printf("Area = %f, Circumference = %f", area, circumference);
    return 0;
}
// 6.	Write a C program that reads three numbers and find the largest one
int main(){
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a > b && a > c){
        printf("Largest number is %d", a);
    }else if(b > a && b > c){
        printf("Largest number is %d", b);
    }else{
        printf("Largest number is %d", c);
    }
    return 0;
}
// 7.	Write a C program that reads three numbers and finds the middle one
int main(){
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a > b && a < c){
        printf("Middle number is %d", a);
    }else if(b > a && b < c){
        printf("Middle number is %d", b);
    }else{
        printf("Middle number is %d", c);
    }
    return 0;
}
// 8.	Write a C program that reads a number and then find sum of its digits
int main(){
    int a, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &a);
    while(a != 0){
        sum += a % 10;
        a /= 10;
    }
    printf("Sum of digits = %d", sum);
    return 0;
}
// 9.	Write a C program that reads a number (1-7) and then prints the name of the day associated with that number.
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    switch(a){
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid input");
    }
    return 0;
}
// 10.	Write a C program that reads a number and tests whether it is prime or composite
int main(){
    int a, i, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &a);
    for(i = 2; i <= a / 2; i++){
        if(a % i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        printf("Composite");
    }else{
        printf("Prime");
    }
    return 0;
}
// 11.	Write a C program that reads a number and then finds its reverse. 
int main(){
    int a, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &a);
    while(a != 0){
        rev = rev * 10 + a % 10;
        a /= 10;
    }
    printf("Reverse = %d", rev);
    return 0;
}
// 12.	Write a C program that reads a numbers and tests whether it is palindrome or not
int main(){
    int a, rev = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &a);
    temp = a;
    while(a != 0){
        rev = rev * 10 + a % 10;
        a /= 10;
    }
    if(temp == rev){
        printf("Palindrome");
    }else{
        printf("Not a palindrome");
    }
    return 0;
}
// 13.	Write a C program that reads a numbers and finds sum of cubes of digits
int main(){
    int a, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &a);
    temp = a;
    while(a != 0){
        sum += (a % 10) * (a % 10) * (a % 10);
        a /= 10;
    }
    printf("Sum of cubes of digits = %d", sum);
    return 0;
}
// 14.	Write a C program that reads two numbers and swap them without using third variable
int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a = %d, b = %d", a, b);
    return 0;
}
// 15.	Write C program that reads two numbers and print all numbers between these two numbers
int main(){
    int a, b, i;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    for(i = a + 1; i < b; i++){
        printf("%d ", i);
    }
    return 0;
}
// 16.	Write a C program that finds sum of first 100 natural numbers (1+2+3+…+100)
int main(){
    int i, sum = 0;
    for(i = 1; i <= 100; i++){
        sum += i;
    }
    printf("Sum = %d", sum);
    return 0;
}
// 17.	Write a C program that finds sum of squares of first 100 natural numbers.
int main(){
    int i, sum = 0;
    for(i = 1; i <= 100; i++){
        sum += i * i;
    }
    printf("Sum = %d", sum);
    return 0;
}
// 18.	Write a C program to multiplication table from 1-20
int main(){
    int i, j;
    for(i = 1; i <= 20; i++){
        for(j = 1; j <= 10; j++){
            printf("%d * %d = %d", i, j, i * j);
        }
        printf("-------------------");
    }
    return 0;
}

// 19.	Write a C program that reads 10 numbers and find the largest number
int main(){
    int a, i, max = 0;
    for(i = 1; i <= 10; i++){
        printf("Enter a number: ");
        scanf("%d", &a);
        if(a > max){
            max = a;
        }
    }
    printf("Largest number is %d", max);
    return 0;
}

// 20.	Write a C program that reads 10 numbers and sort them in ascending order
int main(){
    int a[10], i, j, temp;
    for(i = 0; i < 10; i++){
        printf("Enter a number: ");
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 10; i++){
        for(j = i + 1; j < 10; j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for(i = 0; i < 10; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
// 21.	Write a C program that joins two arrays with given lengths
int main(){
    int a[5] = {1, 2, 3, 4, 5}, b[5] = {6, 7, 8, 9, 10}, c[10], i, j;
    for(i = 0; i < 5; i++){
        c[i] = a[i];
    }
    for(j = 0; j < 5; j++){
        c[i] = b[j];
        i++;
    }
    printf("Joined array: ");
    for(i = 0; i < 10; i++){
        printf("%d ", c[i]);
    }
    return 0;
}

// 22.	Write a C program that reads a word then find number of vowels
int main(){
    char a[100];
    int i, count = 0;
    printf("Enter a word: ");
    scanf("%s", a);
    for(i = 0; a[i] != '\0'; i++){
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'){
            count++;
        }
    }
    printf("Number of vowels = %d", count);
    return 0;
}

// 23.	Write a C program that reads two words then test if they are same or not
int main(){
    char a[100], b[100];
    int i, flag = 0;
    printf("Enter two words: ");
    scanf("%s %s", a, b);
    for(i = 0; a[i] != '\0' || b[i] != '\0'; i++){
        if(a[i] != b[i]){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        printf("Not same");
    }else{
        printf("Same");
    }
    return 0;
}

// 24.	Write a C program to find transpose of a matrix
int main(){
    int a[3][3], i, j;
    printf("Enter elements of matrix: ");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Transpose of matrix: ");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", a[j][i]);
        }
    }
    return 0;
}

// 25.	Write a C program to find sum of diagonal elements of a matrix.
int main(){
    int a[3][3], i, j, sum = 0;
    printf("Enter elements of matrix: ");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(i == j){
                sum += a[i][j];
            }
        }
    }
    printf("Sum of diagonal elements = %d", sum);
    return 0;
}

// 26.	Write a C program to find row-wise sum and column wise sum

int main(){
    int a[3][3], i, j, rowSum = 0, colSum = 0;
    printf("Enter elements of matrix: ");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            rowSum += a[i][j];
        }
        printf("Sum of row %d = %d", i + 1, rowSum);
        rowSum = 0;
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            colSum += a[j][i];
        }
        printf("Sum of column %d = %d", i + 1, colSum);
        colSum = 0;
    }
    return 0;
}
// 27.	Write a C program that reads two matrices of order 3*3 and find their sum and difference
int main(){
    int a[3][3], b[3][3], i, j, sum[3][3], diff[3][3];
    printf("Enter elements of matrix A: ");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of matrix B: ");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &b[i][j]);
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            sum[i][j] = a[i][j] + b[i][j];
            diff[i][j] = a[i][j] - b[i][j];
        }
    }
    printf("Sum of matrix A and B: ");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", sum[i][j]);
        }
    }
    printf("Difference of matrix A and B: ");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", diff[i][j]);
        }
    }
    return 0;
}

// 28.	Write a C program that reads two 3*3 matrices and find their product. 
// Use three separate functions for reading, finding product and printing.

int read(int a[3][3]){
    int i, j;
    printf("Enter elements of matrix: ");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    return 0;
}
int product(int a[3][3], int b[3][3], int c[3][3]){
    int i, j, k;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            for(k = 0; k < 3; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return 0;
}

int sum(int a[3][3]){
    int i, j;
    printf("Product of matrix: ");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", a[i][j]);
        }
    }
    return 0;
}

int print(int a[3][3]){
    int i, j;
    printf("Product of matrix: ");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", a[i][j]);
        }
    }
    return 0;
}

int main(){
    int a[3][3] = {0}, b[3][3] = {0}, c[3][3] = {0};
    read(a);
    read(b);
    product(a, b, c);
    print(c);
    return 0;
}

// 29.	Write a C program that reads a number and find its factorial using recursive function
int fact(int n){
    if(n == 0){
        return 1;
    }else{
        return n * fact(n - 1);
    }
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial = %d", fact(n));
    return 0;
}
// 30.	Write a C program that reads two numbers and find their product using recursive function.
int product(int a, int b){
    if(b == 0){
        return 0;
    }else{
        return a + product(a, b - 1);
    }
}
int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Product = %d", product(a, b));
    return 0;
}
// 33.	Write a C program to compute sum of digits of a number using recursive function
int sum(int n){
    if(n == 0){
        return 0;
    }else{
        return n % 10 + sum(n / 10);
    }
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of digits = %d", sum(n));
    return 0;
}

// 34.	Create structure named ‘student’ with member ‘rollno’, ‘name’ and ‘marks’. 
// Write a C program that reads records of three students and then display that information on monitor

struct student{
    int rollno;
    char name[20];
    float marks;
};

int main(){
    struct student s[3];
    int i;
    for(i = 0; i < 3; i++){
        printf("Enter rollno, name and marks of student %d: ", i + 1);
        scanf("%d %s %f", &s[i].rollno, s[i].name, &s[i].marks);
    }
    for(i = 0; i < 3; i++){
        printf("Rollno = %d, Name = %s, Marks = %f", s[i].rollno, s[i].name, s[i].marks);
    }
    return 0;
}

// 35.	Create structure called Time (hr, min, sec). Write a C program that 
// create three Time variables t1(1,40,50), t2(2,40,50) and t3(0,0,0) and then
//  add then add t1 and t2 and store result in t3. Finally print the sum 

struct Time{
    int hr, min, sec;
};

int main(){
    struct Time t1 = {1, 40, 50}, t2 = {2, 40, 50}, t3;
    t3.hr = t1.hr + t2.hr;
    t3.min = t1.min + t2.min;
    t3.sec = t1.sec + t2.sec;
    if(t3.sec >= 60){
        t3.sec -= 60;
        t3.min++;
    }
    if(t3.min >= 60){
        t3.min -= 60;
        t3.hr++;
    }
    printf("Sum of time = %d:%d:%d", t3.hr, t3.min, t3.sec);
    return 0;
}

// 36.	Write a C program to write line of text to a file
int main(){
    FILE *fp;
    char str[100];
    fp = fopen("file.txt", "w");
    printf("Enter a line of text: ");
    gets(str);
    fputs(str, fp);
    fclose(fp);
    return 0;
}

// 37.	Write a C program that reads line of text from file
int main(){
    FILE *fp;
    char str[100];
    fp = fopen("file.txt", "r");
    fgets(str, 100, fp);
    printf("Line of text = %s", str);
    fclose(fp);
    return 0;
}

// 38.	Write a C program that copies contents of one file to another file
int main(){
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("file1.txt", "r");
    fp2 = fopen("file2.txt", "w");
    while((ch = fgetc(fp1)) != EOF){
        fputc(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}

// 39.	Write a C program to draw a line with its end points reading from keyboard
int main(){
    int gd = DETECT, gm;
    int x1, y1, x2, y2;
    initgraph(&gd, &gm, NULL);
    printf("Enter end points of line: ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    line(x1, y1, x2, y2);
    getch();
    closegraph();
    return 0;
}

// 40.	Write a C program to draw a circle with its center and radius reading from keyboard
int main(){
    int gd = DETECT, gm;
    int x, y, r;
    initgraph(&gd, &gm, NULL);
    printf("Enter center and radius of circle: ");
    scanf("%d %d %d", &x, &y, &r);
    circle(x, y, r);
    getch();
    closegraph();
    return 0;
}

// 41.	Write C program to draw ellipse by reading x-radius and y-radius from keyboard.
int main(){
    int gd = DETECT, gm;
    int x, y, rx, ry;
    initgraph(&gd, &gm, NULL);
    printf("Enter center and radius of ellipse: ");
    scanf("%d %d %d %d", &x, &y, &rx, &ry);
    ellipse(x, y, 0, 360, rx, ry);
    getch();
    closegraph();
    return 0;
}

// 42.	Write a C program to draw rectangle.
int main(){
    int gd = DETECT, gm;
    int x1, y1, x2, y2;
    initgraph(&gd, &gm, NULL);
    printf("Enter end points of rectangle: ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    rectangle(x1, y1, x2, y2);
    getch();
    closegraph();
    return 0;
}