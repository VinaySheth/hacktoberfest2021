#include<stdio.h>
#include<conio.h>
void main()
  {
  clrscr();
  int a[10],n,i,l,u,m,k;
  printf("Enter the number of elements\n");
  scanf("%d",&n);
  printf("Enter %d elements in the sorted order\n",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter the element to be searched\n");
  scanf("%d",&k);
  l=0;
  u=n-1;
  m=(l+u)/2;
  while((l<=u)&&(a[m]!=k))
  {
    if(k<a[m])
    {
      u=m-1;
    }
    else
    {
      l=m+1;
    }
    m=(l+u)/2;
  }
  if(a[m]==k)
  {
    printf("Element is present at position %d\n",m+1);
  }
  else
  {
    printf("Element is not present");
  }
  getch();
}
