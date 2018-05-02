#include <stdio.h>
#include <stdlib.h>
int main()
{

freopen("dataset.txt","r",stdin);

  int qt[5242][5242];
  memset(qt,0,sizeof qt);
  int i;
  for(i=0;i<5242;i++)
  {   int a ,b ;
      scanf("%d",&a);
      scanf("%d",&b);
      a--;
      b--;
      qt[a][b]=1;

  }
  int j;
  for(i=0;i<5242;i++)
  {
      for(j=0;j<5242;j++)
        printf("%d",qt[i][j]);
       printf("\n") ;
  }


  return 0;
}
