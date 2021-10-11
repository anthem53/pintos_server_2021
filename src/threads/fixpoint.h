#include <stdio.h>

#define p 17
#define q 14

#define f (1 << q)

int fp(int n);
int int_z(int x);
int int_n (int x);
int add(int x, int y);
int sub(int x, int y);
int add_int(int x, int n);
int sub_int (int x , int n);
int mul(int x, int y);
int mul_int(int x, int n);
int div(int x, int y);
int div_int(int x, int n);

int fp(int n)
{
  return n * f;
}

int int_z(int x)
{
  return x / f;
}

int int_n (int x)
{
  if( x >=0 ){
    return ( x + (f>>1)) / f;
  }
  else{
    return ( x - (f>>1)) / f;
  }
}

int add(int x, int y)
{
  return x + y;
}
int sub(int x, int y)
{
  return x - y;
}

int add_int(int x, int n)
{
  return x + n * f;
}

int sub_int (int x , int n)
{
  return x - n * f;
}

int mul(int x, int y)
{
  return ((int64_t)x) * y / f;
}

int mul_int(int x, int n)
{
  return x * n;
}

int div(int x, int y)
{
  return ((int64_t)x) * f / y;
}

int div_int(int x, int n)
{
  return x / n;
}

