#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;


void format(int a[])
{
   bool in_run = false;
   for (int i = 0; i < 20; i++)
   {
      if(in_run)
      {
        if(a[i] != a[i-1])
        {
         cout << ") ";
         in_run = false;
        }
      }
      if(!in_run)
      {
         if(a[i] == a[i+1])
        {
         cout << " (";
         in_run = true;
        }
      }
      cout << " "<< a[i] << " ";
   }
   if(in_run)
   {
      cout << ") " << endl;
   }

}

int main()
{
   srand(time(0));
   int a[20];
   for(int i = 0; i < 20; i++)
   {
      a[i] = 1 + rand() % 6;
   }
   format(a);
}