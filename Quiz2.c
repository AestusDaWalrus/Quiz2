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