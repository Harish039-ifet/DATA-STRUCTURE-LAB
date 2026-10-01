#include<stdio.h>
void inst_sort(int[]);
void main()
{
int num[5],count;
printf("\n Enter the five elements to sort:\n");
for(count=0;count<5;count++)
scanf("%d",&num[count]);
inst_sort(num);
printf("\n\n Elements after sorting:\n");
for(count=0;count<5;count++)
printf("%d\n",num[count]);
}
void inst_sort(int num[])
{
int i,j,k;
for(j=1;j<5;j++) {
k=num[j];
for(i=j-1;i>=0&&k<num[i];i--)
num[i+1]=num[i];
num[i+1]=k;
}
}

OUTPUT: 


Enter the five elements to sort:
5 4 3 2 1
Elements after sorting:
1
2
3
4
5