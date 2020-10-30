#include <stdio.h>
#include <stdlib.h>
struct employee
{
    int id;
    char name[20];
    int salary;

};
int main()
{
   struct employee e;

    printf("enter employee information \n");
    scanf("%d",&e.id);
    scanf("%s",e.name);
     scanf("%d",&e.salary);
     printf("the information of you \n age%d \n name %s\n  salary %d \n",e.id,e.name,e.salary);
    return 0;
}
