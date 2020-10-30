#include <stdio.h>
#include <stdlib.h>
struct employee
{
    int id;
    char name[20];
    int salary;

};
 struct employee create()
 {

   struct employee e;


    scanf("%d",&e.id);
    scanf("%s",e.name);
    scanf("%d",&e.salary);
     return e;
 }
 void display(struct employee e[],int size)
 {

     for(int i=0;i<size;i++)
     {
printf("the information of you \n id %d \n name %s\n salary %d \n",e[i].id,e[i].name,e[i].salary);
printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\");
     }

}
int main()
{

    int size;
    printf("enter  number of employee\n");
    scanf("%d",&size);
    struct  employee e[size];
    for(int i=0;i<size;i++)
    { printf("enter information of employee %d  \n",i+1);
        e[i]=create();

    }
    display(e,size);

    return 0;
}
