#include <stdio.h>
#include<conio.h>
#include<stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>
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
COORD coord={0,0};
void gotoxy(int x,int y)
 {
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }
 void SetColor(int ForgC)
{
    WORD wColor;

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
}

int main()
{


    char arr[3][9]={"New","Display","Exit"};
    int i, x=5,y=35,current=0,flag=1;
    char ch,enter;

do
    {

          system("cls");

      for(i=0;i<3;i++)
        {


            gotoxy(y,x+i);
            if(current==i)
              SetColor(12);
              else
              SetColor(15);
           printf("%s \n",arr[i]);

        }

        ch=getch();
       if(ch==-32)
      {
          ch=getch();

          if (ch==72)
          {

              current--;

          if(current<0)
            {
             current=2;

            }

         }
        else if (ch ==80)
         {
                current++;
                if(current>2)
                {
                  current=0;

                }

       }
      else if(ch==71)
            {
            current=0;
            }
     else if(ch==79)
        {
            flag=0;
        }


       }
   if(ch==13)
   {
     system("cls");
     if(current==2)
        flag=0;
     else
     {
       char ch2;
       int size;
   // printf("enter  number of employee\n");
    scanf("%d",&size);
    struct  employee e[size];

       if (current==0)
       {

          for(int i=0;i<size;i++)
        {
          printf("enter information of employee %d  \n",i+1);
           e[i]=create();
        }
        }
        else
        {
            display(e,size);
        }






            //display(e,size);

       ch2=getch();
     if(ch2==-32)
     {
         ch2=getch();
         if(ch2==71)
         printf("%s",arr[current]);

         else if(ch2==79)
            {
               flag=0;
            }
         else
           {
               flag=0;
           }
     }
}

}
}
while(ch!=27 && flag==1);

//q5
/*char str1[5],str2[5];
int i=0;
    printf("Enter a string\n");
    gets(str1);
    while(str[i] != '\0')
    {
        str2[i]=str1[i];
       i++;
    }
    printf("copy array %s",str2);*/

//q6
   /* char string[5];
       int count=0,c=0;
    printf("Enter a string\n");
    gets(string);
   while (string[c] != '\0')
    {
    count++;
    c++;
    }
    printf("length of string %d \n", count);*/

//q7

  /*   char str[30],str1[30];
     int i=0;
     //str1=str[0];
     printf("Enter the string : ");
      gets(str);
   while(str[i]!='\0')
    {
        if((str[i]>='a'&&str[i]<='z') || (str[i]>='A'&&str[i]<='Z' || str[i]=='\0'))
        {

                str1[i]=str[i];

        }
        i++;

    }
    printf("After removing the Output String is: %s\n", str1);
*/
    return 0;
}
