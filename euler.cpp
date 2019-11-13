#include <iostream>
#include <cmath> 

using namespace std;

float euler(float y,float x, float dx);
float funcion(float x);

int main()
{
    float y = 0.0, x = 0.0, dx = 0.001;
    for(int i =0; i<50; i++)
    {
        y = euler(y,x,dx);
        cout<<x<<" "<<y<<endl;
        x = x+ dx;
    }
    
    return 0;
}

float funcion(float x)
{ 
    return x*x + 3;
}

float euler(float y, float x, float dx)
{
    return y + dx*funcion(x);
}

