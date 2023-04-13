#include<stdio.h>
int main()
{
 int n,a[1000],i,t;
 FILE*fp;
 fp=fopen("anni.txt","r");
 fscanf(fp,"%d",&n);
 for(i=0;i<n;i++)
 {
     fscanf(fp,"%d",&a[i]);
 }
 for(i=0;i<n;i++){
 if(a[i]>a[i+1])
 {
   t=a[i];
   a[i]=a[i+1];
   a[i+1]=t;
 }

 }
 fclose(fp);
fp=fopen("anni.txt","a");
 for(i=0;i<n;i++)
 {
 fprintf(fp,"   %d ",a[i]);
}
}
