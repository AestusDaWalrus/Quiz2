#include <stdio.h>
#include <stdbool.h>

int sumsTo(uint x[], uint n, uint k, uint v)
{
    if(n == 0)
    {
        return false;
    }
    if(k == 0)
    {
        if(v == 0)
        {
            return true;
        }
        return false;
    }
    int res1 = 0;
    if(v >= x[0])
    {
        res1 = sumsTo(x+1, n-1, k-1, v-x[0]);
    }
    int res2 = sumsTo(x+1, n-1, k, v);
    return res1 + res2 > 0;
}

int main()
{
    int one[7] = {0,1,2,3,4,5,6};
    int two[3] = {4,8,1};
    int three[15] = {4,15,65,34,7,2,74,2,6,8,2,45,724,12,4};
    int four[0] = {};

    if(sumsTo(one, 7, 3, 5))
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
    if(sumsTo(two, 3, 3, 15))
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
    if(sumsTo(three, 15, 2, 10))
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
    if(sumsTo(four, 0, 3, 5))
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
}