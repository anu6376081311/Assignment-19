#include<stdio.h>
#include<string.h>
int main()
{
    char a[10][20],t[20];
    int i,j;
    for(i=0;i<3;i++)
    {
        gets(a[i]);
    }
    
        for(j=i+1;j<3;j++)
        {
          if(strcmp(a[i],"prateek")==0)
          {
            printf("string found");
          }
        }
       
       
       return 0;
}