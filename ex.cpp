#include <iostream>
#include <math.h>
using namespace std;
void findLongestSubstring(const char s1[], const char s2[], int a, int b, char s3[]) 
{
 int t[a+1][b+1];
 for (int i=0; i<(a+1); i++)
  for (int j=0; i<(b+1); j++)
   {
     if ((i=0)||(b=0)||(s1[i]!=s2[j]))
   	   t[i][j]=0;
     else
      t[i][j]=t[i-1][j-1]+1;
   };
int max=0;
int k;
for (int i=0; i<a+1; i++)
  for (int j=0; i<b+1; j++)
   {
    if (t[i][j]>max)
     {
      max=t[i][j];
      k=i;
     };
   };
for (int i=1; i<max; i++)
 {
  s3[i]=s1[k-max+1];
 };
}
int main() 
{
 int a,b;
 cin>>a;
 cin>>b;
 char s1[a],s2[b],s3[a+b];
 cin>>s1;
 cin>>s2;
 findLongestSubstring(s1,s2,a,b,s3);
cout<<s3;
};
