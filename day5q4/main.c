#include <stdio.h>
#include <stdlib.h>
struct employee
{
    int id;
    char name[20];
    int salary;

};
struct department
{
    int id;
    char name[20];
   struct employee e[3];

};
int main()
{
   struct department d;

    printf("enter department information \n");
    scanf("%d",&d.id);
    scanf("%s",d.name);
    for(int i=0;i<3;i++)
    {
         printf("enter employee information \n");
         scanf("%d",&d.e[i].id);
       scanf("%s",d.e[i].name);
       scanf("%d",&d.e[i].salary);
        printf("the information of you \n id of dep %d \n name of dep %s\n  id of emp %d \n name of emp %s\n salary of emp %d \n",d.id,d.name,d.e[i].id,d.e[i].name,d.e[i].salary);

    }

    return 0;
}
