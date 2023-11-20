#include<stdio.h>
#include<stdlib.h>
int top=-1,i,stack[100],choice,value,size;
void push();
void pop();
void display();
void main(){
   printf("Enter the limit of the array:");
   scanf("%d",&size);
   printf("\n1.push\n2.pop\n3.display\n4.exit\n");
   do{
   printf("select the operation you want to perform:\n");
   scanf("%d",&choice);
   switch(choice){
       case 1:
             push();
             break;
       case 2:
             pop();
             break;
       case 3:
             display();
             break;
      default:
             printf("invalid choice!");
             break;
       }
       }while(choice!=4);
}
       
       void push(){
             if(top==size-1)
             {
             printf("stack overflow\n");
             }
             else
             {
             printf("Enter the element you want to insert:\n");
             scanf("%d",&value);
             top=top+1;
             stack[top]=value;
             }
      }        
       void pop(){  
             if(top==-1)
             {
             printf("stack underflow\n");
             }
             else
             {
             top--;
             }
      }
      void display(){
             if(top>=0)
             {
             for(i=top;i>=0;i--)
             printf("%d",stack[i]);
             }
             else
             {
             printf("nothing to show in array\n");
             }
             
     }
                  
