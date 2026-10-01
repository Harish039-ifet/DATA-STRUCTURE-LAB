#include <stdio.h>
int main() {
int n, i, search, f = 0, low, high, mid, a[20];
printf("Enter the number of elements: ");
scanf("%d", &n);
printf("Enter %d numbers in ascending order:\n", n);
for (i = 0; i < n; i++) {
printf("a[%d] = ", i);
scanf("%d", &a[i]);
}
printf("Enter the search element: ");
scanf("%d", &search);
low = 0;
high = n - 1;
while (low <= high) {
mid = (low + high) / 2;
if (search < a[mid])
high = mid - 1;
else if (search > a[mid])
low = mid + 1;
else {
f = 1;
printf("Element %d found at index %d.\n", search, mid);
break;
}
}
if (f == 0)
printf("Element %d is not present in the array.\n", search);
return 0;
}

OUTPUT:


Enter the number of elements: 5
Enter 5 numbers in ascending order:
a[0] = 2
a[1] = 3
a[2] = 4
a[3] = 10
a[4] = 40
Enter the search element: 10
Element 10 found at index 3.
