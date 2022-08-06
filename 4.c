#include<stdio.h>
#include<string.h>
struct Employee
{
    int empno;
    char emp_name[100];
    char position[15];
    float basic_pay;
};
void read(struct Employee E[],int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("\nEnter empno: ");
        scanf("%d", &E[i].empno);
        printf("Enter emp_name: ");
        scanf("%s", E[i].emp_name);
        printf("Enter position: ");
        scanf("%s", E[i].position);
        printf("Enter basic_pay: ");
        scanf("%f", &E[i].basic_pay);
    }
}
void display(struct Employee a[],int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Empno: %d\n", a[i].empno);
        printf("Emp_name: %s\n", a[i].emp_name);
        printf("Position: %s\n", a[i].position);
        printf("Basic_pay: %f\n", a[i].basic_pay);
    }
}
void search(struct Employee *E,int ns)
{
    int empno,n;
    char emp_name[100];
    char position[15];
    float basic_pay;
    printf("search based on?");
    printf("empno: 1, empname: 2, position: 3, basic_pay: 4\n");
    scanf("%d", &n);
    switch(n)
    {
        case 1:
            printf("Enter empno: ");
            scanf("%d", &empno);
            for(int i = 0; i < ns; i++)
            {
                if(E[i].empno == empno)
                {
                    printf("Empno: %d\n", E[i].empno);
                    printf("Emp_name: %s\n", E[i].emp_name);
                    printf("Position: %s\n", E[i].position);
                    printf("Basic_pay: %f\n", E[i].basic_pay);
                }
            }
            break;
        case 2:
            printf("Enter emp_name: ");
            scanf("%s", emp_name);
            for(int i = 0; i < ns; i++)
            {
                if(strcmp(E[i].emp_name, emp_name) == 0)
                {
                    printf("Empno: %d\n", E[i].empno);
                    printf("Emp_name: %s\n", E[i].emp_name);
                    printf("Position: %s\n", E[i].position);
                    printf("Basic_pay: %f\n", E[i].basic_pay);
                }
            }
            break;
        case 3:
            printf("Enter position: ");
            scanf("%s", position);
            for(int i = 0; i < ns; i++)
            {
                if(strcmp(E[i].position, position) == 0)
                {
                    printf("Empno: %d\n", E[i].empno);
                    printf("Emp_name: %s\n", E[i].emp_name);
                    printf("Position: %s\n", E[i].position);
                    printf("Basic_pay: %f\n", E[i].basic_pay);
                }
            }
            break;
        case 4:
            printf("Enter basic_pay: ");
            scanf("%f", &basic_pay);
            for(int i = 0; i < ns; i++)
            {
                if(E[i].basic_pay == basic_pay)
                {
                    printf("Empno: %d\n", E[i].empno);
                    printf("Emp_name: %s\n", E[i].emp_name);
                    printf("Position: %s\n", E[i].position);
                    printf("Basic_pay: %f\n", E[i].basic_pay);
                }
            }
            break;
        default:
            printf("Not Found\n");
    }
}
int main()
{
    int n;
    printf("Enter number of Employee: ");
    scanf("%d", &n);
    struct Employee E[n];
    read(E,n);
    display(E,n);
    search(E,n);
    return 0;
}
