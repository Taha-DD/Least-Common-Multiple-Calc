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
int main()
{
    int t[k], n;
    printf("how many numbers you wanna add to your array? ");
    ay:
    scanf ("%d", &n);
    if (n > k)
    {
        printf ("you're riskin' to fall in an overflow enter a smaller amount: ");
        goto ay;
    }
    else if (n <= 0)
    {
        printf ("the size of the array can not be nothing enter a real size: ");
        goto ay;
    }
    
    printf("okie dokie add %d numbers: ", n);
    for (int j=0 ;j<n; j++)
    {
        yo:
        scanf("%d",&t[j]);
        if (t[j] <= 0)
        {
            printf("sorry this program only works for positive nubers please enter a new number: ");
            goto yo;
        }
    }
    printf ("the LCM of the numbers in the array is %d ", quiero(t, n));
    return 0;
}
Eight down, 6 to go
