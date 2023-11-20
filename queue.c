#include<stdio.h>
int rear=-1,front=-1,i,queue[100],choice,value,size;
void enqueue();
void dequeue();
void display();
void exit();
void main(){
        printf("Enter the size of the array:\n");
        scanf("%d",&size);
        printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit:\n");
        do{
           printf("select the operation  to perform:\n");
           scanf("%d",&choice);
      
               switch(choice){
                               case 1:enqueue();
                                      break;
                               case 2:dequeue();
                                      break;
                               case 3:display();
                                      break;
                               case 4:exit();
                                      break;
                               default:printf("invalid choice!");
                                      break;
                       }       
         
       }while(choice!=4);
}
      
void enqueue(){

        if(rear==size-1){
                printf("queue overflow\n");
        }
        else{
        if(front==-1)
         front=0;
             printf("Enter the value to be inserted:\n");
             scanf("%d",&value);
             rear++;
             queue[rear]=value;
        }
    }                         
void dequeue(){  

        if(front==-1){
              printf("queue underflow\n");
        }
        else{
             if(front==rear){
                  printf("element %d is deleted \n",queue[front]);
                  front=rear=-1;
             }   
             else{
                  printf("element %d is deleted\n",queue[front]);
                  front++;
             }
        } 
}           
void display(){
        if(rear==-1){
               printf("queue is empty");
        }
        else{
             printf("The elements are:\t"); 
                   for(i=front;i<=rear;i++){
                         printf("%d\n",queue[i]);
             }
        }     
}                  
