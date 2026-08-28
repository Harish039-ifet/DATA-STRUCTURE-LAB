#include<stdio.h>
#define MAX_SIZE 100
void createArray(int arr[],int*size);
void insertElement(int arr[],int*size,int element,int position);
int searchElement(int arr[],int size,int element);
void deleteelement(int arr[],int*size,int position);
void displayArray(int arr[],int size);
int main()
{
int arr[MAX_SIZE];
int size=0;
int choice,element,position,result;
while(1)
{
printf("\n Array Operations Menu:\n");
printf("1.Create Array\n");
printf("2.Insert Element\n");
printf("3.search Element\n");
printf("4.Delete Element\n");
printf("5.Display Array\n");
printf("6.Exit\n");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
createArray(arr,&size);
break;
case 2:
printf("Enter element to insert:");
scanf("%d",&element);
printf("Enter position to insert 10 to %d):",size);
scanf("%d",&position);
insertElement(arr,&size,element,position);
break;
case 3:
printf("Enter element to search:");
scanf("%d",&element);
result=searchElement(arr,size,element);
if (result!=-1)
printf("Element found at position:%d\n",result);
else
printf("Element not found in the array\n");
break;
case 4:
printf("Enter position to delete(0 to %d):",size-1);
scanf("%d",&position);
deleteElement(arr,&size,position);
break;
case 5:
displayArray(arr,size);
break;
case 6:
return 0;
default:
printf("Invallid choice! Please enter a vallid option\n");
}
}
return 0;
{
void createArray(int arr[],int*size);
}
int n,i;
printf("Enter the number of elements:");
scanf("%d",&n);
if (n>MAX_SIZE)
{
printf("Error: Number of elements exceeds the maximum array size\n");
return;
}
printf("Enter %d elements:",n);
for (i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
size=n;
printf("Array jcreated successfully\n");
}
int searchElement(int arr[],int size,int element)
{
for (int i=0;i<size;i++)
{
scanf("%d",&arr[i]);
{
return;
}
}
return -1;
}
void deleteelement(int arr[],int*size,int position)
{
if(position<0||position>=*size)
{
printf("Error:Invalid position\n");
return;
}
for(int i=position;i<*size-1;i++)
{
arr[i]=arr[i+1];
}
(*size)--;
printf("Element deleted Successfully\n");
}
void displayArray(int arr[],int size)
{
if (size==0)
{
printf("Array is empty.\n");
return;
}
printf("Array Elements:");
for (int i=0;i<size;i++)
{
printf("%d",arr[i]);
}
printf("\n");
}
OUTPUT:
Array Operation Menu:
1. Create Array
2. Insert Elemnet
3. Search Element
4. Delete Element
5. Display Array
6. Exit
Enter Your choice: 1
Enert the number of elements: 5
Enter 5 elements: 12345
Array created successfully.

Array Operation Menu:
1. Create Array
2. Insert Elemnet
3. Search Element
4. Delete Element
5. Display Array
6. Exit
Enter Your choice: 2
Enter element to insert: 10
Enter position to insert (0 to 5): 2
Element inserted successfully.

Array Operation Menu:
1. Create Array
2. Insert Elemnet
3. Search Element
4. Delete Element
5. Display Array
6. Exit
Enter Your choice: 5
Array elements: 1 2 10 3 4 5

Array Operation Menu:
1. Create Array
2. Insert Elemnet
3. Search Element
4. Delete Element
5. Display Array
6. Exit
Enter Your choice: 3
Enter element to search: 10
Element found at position: 2

Array Operation Menu:
1. Create Array
2. Insert Elemnet
3. Search Element
4. Delete Element
5. Display Array
6. Exit
Enter Your choice: 4
Enter position to delete (0 to 5): 2
Element deleted succesfully.

Array Operation Menu:
1. Create Array
2. Insert Elemnet
3. Search Element
4. Delete Element
5. Display Array
6. Exit
Enter Your choice: 5
Array elements: 1 2 3 4 5