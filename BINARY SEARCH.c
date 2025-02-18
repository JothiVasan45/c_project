#include<stdio.h>
int main()
{
 int i,low,high,mid,n,key,array[100];
 printf("Enter number of elements\n");
 scanf("%d,&n");
 printf("%d",Enter integers:n);
 for(i=0;i<n;i++)
 scanf("%d",&array);
 printf("Enter value to find\n");
 low=0;
 high= n-1;
 while(low<=high)
 {
  mid= low+high;
  if(array[mid]<key)
  low= mid+1;
  else if(array[mid]==key)
  {
   printf("%d found at location %d.n",key,mid+1);
   break;
  }
   else
      high= mid+1;
 }
 if(low>high)
 printf("not found:%d isnt present int list.n",key);
 return 0;
}
