#include<stdio.h>
#include<stdlib.h>
#define MAX 100
struct Queue
{
int arr[MAX];
int front;
int rear;
};
void initializeQueue(struct Queue *queue);
int isFull(struct Queue *queue);
int isEmpty(struct Queue *queue);
void enqueue(struct Queue *queue,int element);
int dequeue(struct Queue *queue);
void displayQueue(struct Queue *queue);
int main()
{
struct Queue queue;
int choice,element;
initializeQueue(&queue);
while(1)
{
printf("\nQueue Operations Menu:\n");
printf("1.Enqueue\n");
printf("2.Dequeue\n");
printf("3.Display");
printf("4.Exit");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Enter element to enqueue:");
scanf("%d",&element);
enqueue(&queue,element);
break;
case 2:
element=dequeue(&queue);
if(element!=-1)
printf("Dequeue element:%d\n",element);
break;
case 3:
displayQueue(&queue);
break;
case 4:
exit(0);
default:
printf("Invalild choice! Please enter a valid option\n");
}
}
return 0;
}
void initializeQueue(struct Queue *queue)
{
queue->front=-1;
queue->rear=-1;
}
int isFull(struct Queue *queue)
{
return queue->rear==MAX-1;
}
int isEmpty(struct Queue *queue)
{
return queue->front==-1||queue->front>queue->rear;
}
void enqueue(struct Queue *queue,int element)
{
if(isFull(queue))
{
printf("Error: Oueue Overflow. Cannot enqueue element.\n");
return;
}
if(isEmpty(queue))
{
queue->front=0;
}
queue->arr[++queue->rear]=element;
printf("Element enqueued:%d\n",element);
}
int dequeue(struct Queue *queue)
{
if(isEmpty(queue))
{
printf("Error: Queue Underflow. Cannot dequeue element.\n");
return -1;
}
return queue->arr[queue->front++];
}
void displayQueue(struct Queue *queue)
{
if (isEmpty(queue))
{
printf("Queue is Empty.\n)");
return;
}
printf("Queue elements:");
for(int i=queue->front; i<=queue->rear;i++)
{
printf("%d",queue->arr[i]);
}
printf("\n");
}


OUTPUT:

Queue Operations Menu:
1.Enqueue
2.Dequeue
3.Display4.ExitEnter your choice:1
Enter element to enqueue:10
Element enqueued:10

Queue Operations Menu:
1.Enqueue
2.Dequeue
3.Display4.ExitEnter your choice:1
Enter element to enqueue:20
Element enqueued:20

Queue Operations Menu:
1.Enqueue
2.Dequeue
3.Display4.ExitEnter your choice:1
Enter element to enqueue:30
Element enqueued:30

Queue Operations Menu:
1.Enqueue
2.Dequeue
3.Display4.ExitEnter your choice:3
Queue elements:10 20 30

Queue Operations Menu:
1.Enqueue
2.Dequeue
3.Display4.ExitEnter your choice:2
Dequeue element:10

Queue Operations Menu:
1.Enqueue
2.Dequeue
3.Display4.ExitEnter your choice:10
Invalild choice! Please enter a valid option

Queue Operations Menu:
1.Enqueue
2.Dequeue
3.Display4.ExitEnter your choice:3
Queue elements:2030

Queue Operations Menu:
1.Enqueue
2.Dequeue
3.Display4.ExitEnter your choice:4