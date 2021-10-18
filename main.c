/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <conio.h>
#define n 10
int top=-1;
int arr[n];
void push(int val)
{
    if(top==n-1)
    {
        printf("Stack is full");
    }
    top++;
    arr[top]=val;
}
void pop()
{
    if(top==-1)
    {
        printf("Stack is empty");
        return;
    }
    top--;
}
void display()
{
    for(int i=top;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    return;
}
int main()
{
    int a,val;
    while(a!=0)
    {
    printf("1.push\n2.pop\n3.display\n0.Exit the program");
    scanf("%d ",&a);
    {
       { switch(a)
       {
           case(1):
           {
           printf("Enter the element to be pushed:");
           scanf("%d",&val);
           push(val);
           break;
       }
       case(2):
       {
           pop();
           break;
       }
       case(3):
       {
           display();
           break;
       }
       default:
       {
           printf("Enter a valid number");
       }
       }
    }
    }
    }
    return 0;

}
