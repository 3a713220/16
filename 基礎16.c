#include <stdio.h> 

#include <stdlib.h>

#include <string.h>

int main()

{
    char num[10][3]={"�s","��","�L","��","�v","��","��","�m","��","�h"};
    char ch[3][3]={"�a","��","�B"};
    char wan[3][3]={"��","��","�U"};
    int p, o, l, g, s, d, k=0, flag=0;
    char n[20];
    printf("��J�@�Ӿ��(���ƻݭn�p��16���)�G" );
    scanf("%s",n); 
    l = strlen(n);
    if (l>16)  
    {
	printf("����ƪ��׶W�L16���, �L�k�ഫ...\n");
    exit(0);
    }
    g=(l-1)/4+1;
    printf("�ഫ�᪺���G�G");
    for(p=0;p<g;p++)
   {
    flag=0;
    if (p==0) s=(4-l%4)%4;
    else s=0;
    for (o=s;o<4;o++)
    {
    d=n[k++]-48;
    if(d==0) continue; 
    printf("%s",num[d]);
    if(o!=3) 
    printf("%s",ch[o]);
    flag=1;
    }
    if (g!=1 && p!=g-1 && flag!=0)
    {
    printf("%s",wan[4-g+p]);
	}
   }
    printf("\n");
  system("pause");
 return 0;
}
