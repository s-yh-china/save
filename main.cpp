#include <iostream>
#include <tchar.h>
using namespace std;


void s(const char *string, int *pInt);

int content(int i, int n)
{
    int x=0,y=0,j=0,xl=0,xr=n-1,yu=1,yd=n-1,d=0;
    for(j=0;j<n*n;j++)
    {
        if(y*n+x==i)
        {
            return j+1;
        }
        else
        {
            switch(d)
            {
                case 0:
                {
                    if(x==xr)
                    {
                        d=1;
                        y++;
                        xr--;
                    }
                    else
                    {
                        x++;
                    }
                    break;
                }
                case 1:
                {
                    if(y==yd)
                    {
                        d=2;
                        x--;
                        yd--;
                    }
                    else
                    {
                        y++;
                    }
                    break;
                }
                case 2:
                {
                    if(x==xl)
                    {
                        d=3;
                        y--;
                        xl++;
                    }
                    else
                    {
                        x--;
                    }
                    break;
                }
                case 3:
                {
                    if(y==yu)
                    {
                        d=0;
                        x++;
                        yu++;
                    }
                    else
                    {
                        y--;
                    }
                    break;
                }
            }
        }
    }
}

int main(int argc, _TCHAR* argv[])
{
    int n;
    cin>>n;
    s("%d", &n);
    for(int i=0;i<n*n;i++)
    {
        if((i+1)%n==0)
        {
            printf("%-3d\n",content(i,n));
        }
        else
        {
            printf("%-3d ",content(i,n));
        }
    }
    return 0;
}

void s(const char *string, int *pInt) {

}
