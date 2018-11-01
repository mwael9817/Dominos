#include <bits/stdc++.h>
#include "individual.h"

using namespace std;

dominos :: dominos(int leftside, int rightside)
{                                                   //Just for equality
    int left = leftside;
    int right = rightside;
}

int dominos ::getleftside(int leftside)
{
    return leftside;
}

int dominos::getrightside(int right)
{
    return right;
}
void dominos::toprint()
{
    /*The leftside/rightside is the DOT'S left/right side and it will be MAX = 6 and initial = 0
    loping for the two sides to get all elements in the DOMINOS without repeating*/

    for(leftside=0 ; leftside <= 6 ; leftside++)
    {
        for(rightside = 0 ; rightside <= 6 ; rightside++)
        {
            cout    <<  leftside  <<" | "<< rightside  <<endl;
        }
    }
}


int main()
{

    dominos d;

    d.toprint();
}
