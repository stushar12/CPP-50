 vector<int> spirallyTraverse(vector<vector<int> > mat, int m, int n) 
 {
int top=0;
int down=m-1,left=0,right=n-1,dir=0;
vector<int> arr;
while(top<=down && left<=right)
{
    if(dir==0)
    {
        for(int i=left;i<=right;i++)
        {
            arr.push_back(mat[top][i]);
        }
        top=top+1;
    }

    else if (dir==1)
    {
        for(int i=top;i<=down;i++)
        {
            arr.push_back(mat[i][right]);
        }
        
        right=right-1;
    }

    else if(dir==2)
    {
        for(int i=right;i>=left;i--) 
        {
            arr.push_back(mat[down][i]);
        }
        down=down-1;
        
    }

    else if (dir==3)
    {
       for(int i=down;i>=top;i--)
       {
            arr.push_back(mat[i][left]);
       }
       left=left+1;
    }
    
    dir=(dir+1)%4;

}
return arr;
 }
