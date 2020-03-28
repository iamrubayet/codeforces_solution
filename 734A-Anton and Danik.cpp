#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a=0,d=0,i;

    scanf("%d",&n);

    char ch[n];

    scanf("%s",&ch);

    for(i=0;i<n;i++)

    {
        if(ch[i]=='A')
        {
            a++;
        }
        else if(ch[i]=='D')
            {
                d++;
        }
    }
    if(a>d)
        {
        printf("Anton\n");
    }
    else if(d>a)
    {
       printf("Danik\n");
    }
    else
        {
        printf("Friendship\n");
    }
    return 0;
}
