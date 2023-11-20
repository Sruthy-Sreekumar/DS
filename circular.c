#include<stdio.h>
int queue[100],rear=-1,front=-1,choice,size,value,i;
void enqueue();
void dequeue();
void display();
void main(){
            printf("Enter the size of array:\n");
            scanf("%d",&size);
            printf("\n1.enqueue\n2.dequeue\n3.display:\n");
            do
            {
            printf("Select the operation you want to perform:\n");
            scanf("%d",&choice);
            switch(choice){
                           case 1:enqueue();
                                  break;
                           case 2:dequeue();
                                  break;
                           case 3:display();
                                  break;
                           default:printf("Invalid choice\n");
                                  break;
                           }
           }while(choice!=4);
           }
           void enqueue(){  
           if(front==0 && rear== size-1||(rear+1)%size==front){
           printf("Queue Overflow\n");
           }
           else if(front==-1){
                printf("Enter the elements to be inserted:");                     
                scanf("%d",&value);
                front++;
                rear++;
                queue[rear]=value;
           }
           else{
                printf("Enter the element to be inserted:\n");
                scanf("%d",&value);
                rear=rear+1%size;
                queue[rear]=value;
                }
           }
           void dequeue(){
              if(front==rear==-1){
                 printf("Queue underflow\n");
                 }
              else{
                   if(front==rear){
                       front=rear=-1;
                       printf("The element %d is deleted\n",queue[front]);
                  }
                   else{
                    
                        printf("The element %d is deleted",queue[front]);
                        front++;
                        }
                  }
              }
              void display(){
                       if(rear==-1){
                            printf("queue is empty");
                       }             
                       else{
                            printf("The entered elements are:\t");
                                for(i=front;i<=rear;i++){
                                
                                      printf("%d\t",queue[i]);
                       }
             }
}                       
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
                
