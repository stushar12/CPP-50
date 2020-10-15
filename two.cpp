#include<iostream>
using namespace std;
int main()
 {
     int p;
     cin>>p;
while(p--)
{
    int m,n;
    cin>>m>>n;
    long long int mat[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>mat[i][j];
        }
    }

int top=0;
int down=m-1,left=0,right=n-1,dir=0;
int arr[m*n]={0};
int k=0;
while(top<=down && left<=right)
{
    if(dir==0)
    {
        for(int i=left;i<=right;i++)
        {
            arr[k]=mat[top][i];
            k++;
        }
        top=top+1;
    }

    else if (dir==1)
    {
        for(int i=top;i<=down;i++)
        {
            arr[k]=mat[i][right];
            k++;
        }
        
        right=right-1;
    }

    else if(dir==2)
    {
        for(int i=right;i>=left;i--) 
        {
            arr[k]=mat[down][i];
            k++;
        }
        down=down-1;
        
    }

    else if (dir==3)
    {
       for(int i=down;i>=top;i--)
       {
            arr[k]=mat[i][left];
            k++;
       }
       left=left+1;
    }
    
    dir=(dir+1)%4;

}
for(int i=0;i<k;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
}
}
