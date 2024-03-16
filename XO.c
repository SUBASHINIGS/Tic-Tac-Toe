#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void playWithComputer(char *s)
{
   printf("\n\n PLAYING WITH COMPUTER...\n\n");
   
   int pos;
   char a[9],init_val='-';
   int c_pos=6;
   memset(a,init_val,sizeof(a));
   
   game:
   {
    printf("Computer's turn : %d\n",c_pos+1);
    a[c_pos]='X';
    
    for(int i=0;i<9;i++)
    {
        printf("%c ",a[i]);
        if(i==2 || i==5 ||i==8)
        printf("\n");
        
    } 
    
     if((a[c_pos]==a[c_pos+2] && a[c_pos+2]==a[c_pos+4])  ||  (a[c_pos]==a[c_pos+1] && a[c_pos]==a[c_pos-1]) || (a[c_pos]==a[c_pos-1] && a[c_pos]==a[c_pos-2]))
    {
        printf("Computer Win's...!!!");
        exit(0);
    }
   
    
    c_pos-=2;
    
      if(c_pos+1==7)
   ++c_pos;
   
   
   printf("\n%s 's turn : ",s);
   scanf("%d",&pos);
   
  if(c_pos+1==pos)
   {
       c_pos++;
   }
   
   
  
       if (a[pos-1]!='X' && a[pos-1]!='O' )
       a[pos-1]='O';
   
   
    for(int i=0;i<9;i++)
    {
        printf("%c ",a[i]);
        if(i==2 || i==5 ||i==8)
        printf("\n");
        
    }
    
  if((a[pos-1]==a[pos] && a[pos-2]==a[pos]) || a[pos-4]==a[pos-1] && a[pos-1]==a[pos-7])
    {
         printf("%s Win's...!!!",s);
        exit(0);
    }
    
   goto game;
   }
   
   
   
}

void playWithFriend(char *s)
{
   
}

int main()
{
    char *s[5];
    printf("Enter your name: ");
    scanf("%s",&s);
    int choice;
    printf("\n         ----- Enter your choice, %s------       \n",s);
    
    printf("\n  1. Play with Computer \n 2.Play with Friend \n 3.exit \n your choice : ");
    
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:
        playWithComputer(&s);
        break;
        case 2:
       playWithFriend(&s);
        break;
        case 3:
        printf("THANK YOU FOR PLAYING!!!!!");
        exit(0);
    }
}