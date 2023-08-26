#include<stdio.h>
#include<conio.h>
int main()
{
int DATA[20], i, ITEM, LOC=-1;
for(i=0;i<=19;i++)
{
printf("Enter the element 5 %d: ", i);
scanf("%d",&DATA[i]);
}
printf("Enter the item to be searched: ");
scanf("%d", &ITEM);
i=0;
while(LOC==-1&&i<=19)
{
if(ITEM==DATA[i])
LOC=i;
i++;
}
if(LOC==-1)
printf("%d is not in the array DATA", ITEM);
else
printf("%d is the Location of the %d", LOC, ITEM);
getch();
return 0;
}
