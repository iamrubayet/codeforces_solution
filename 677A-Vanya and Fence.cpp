#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n,h,i,width=0;

    scanf("%d%d",&n,&h);

    int a[n];

    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {

        if(a[i]>h)
        {
           width +=2;
        }
    else
        {

            width++;


    }




    }
    printf("%d\n",width);
    return 0;

}


