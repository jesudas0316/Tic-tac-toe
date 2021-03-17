#include<iostream>
using namespace std;
char splnum[9]={'0','1','2','3','4','5','6','7','8'};
int checkvalue()
{
          if(splnum[0]==splnum[1] && splnum[1]==splnum[2])
          {
             if(splnum[0]=='X')
             return 1;
              else
              return 2;
          }
          
         else if(splnum[3]==splnum[4]&&splnum[4]==splnum[5])
          {
             if(splnum[3]=='X')
              return 1;
              else
              return 2;
          }
          else 
          if(splnum[6]==splnum[7]&&splnum[7]==splnum[8])
          {
             if(splnum[6]=='X')
              return 1;
          else
          return 2;
           }
          else if(splnum[0]==splnum[3]&&splnum[3]==splnum[6])
          {
             if(splnum[0]=='X')
              return 1;
              else
              return 2;
          }
          else if(splnum[1]==splnum[4]&&splnum[4]==splnum[7])
          {
             if(splnum[1]=='X')
              return 1;
          else
              return 2;
          }
          else if(splnum[2]==splnum[5]&&splnum[5]==splnum[8])
          {
             if(splnum[2]=='X')
              return 1;
          else
              return 2;
          }
          else if(splnum[0]==splnum[4]&&splnum[4]==splnum[8])
          {
             if(splnum[0]=='X')
              return 1;
          else
              return 2;
          }
          
        else
        return 0;
}
void mark(int player,int box)
{
    if(player==1)
    {
        splnum[box]='X';
    }
    else
    {
        splnum[box]='Y';
    }
}
void display()
{
    for(int i=0;i<9;i++)
    {
        cout<<splnum[i]<<"\t";
        if(i==2 || i==5 || i==8)
        {
            cout<<"\n";
        }
    }
}


int main()
{
    int player1=1,player2=2;
    int flag=0;
    int result=0;
    
    int box;
    for(int i=0;i<4;i++)
    {
    
    cout<<"player-1 entered"<<" "<<endl;
    cin>>box;
    mark(player1,box);
    display();
    
    result=checkvalue();
    if(result==1)
    {
        cout<<"player 1 has won the match"<<endl;
        flag=1;
        break;
        
    }
    else if(result==2)
    {
         cout<<"player 2 has won the match"<<endl;
         flag=1;
         break;
    }
    
    cout<<"player-2 entered"<<" "<<endl;
    cin>>box;
    mark(player2,box);
    display();
    
    result=checkvalue();
    if(result==1)
    {
        cout<<"player 1 has won the match"<<endl;
        flag=1;
        break;
        
    }
    else if(result==2)
    {
        cout<<"player 2 has won the match"<<endl;
        flag=1;
        break;
    }
    
    
    
    }
    if(flag==0)
    cout<<"match is draw";
}
