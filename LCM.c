#include<stdio.h>
#define k 90
int te ( int u, int n )
{
    int s = 0;
    while (1)
    {
        s++;
        if (s % u == 0 && s % n == 0)
            return(s);
    }
}
int quiero (int t[], int e)
{
    int w, y;
    w = te (t[0], t[1]);
    for (int i = 2; i < e; i++)
    {
        y = te (t[i], w);
        w = y;
    }
    return w;
}
