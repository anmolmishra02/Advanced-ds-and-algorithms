#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  bool a[n+1];
  memset(a,true,n+1);
  a[0]=false;
  a[1]=false;
  for(int i=2;i*i<n;i++)
  {
    if(a[i]==true)
    {
      for(int no=i*i;no<=n;no+=i)
      {
        a[no]=false;
      }
    }
    else
    {
      continue;
    }
  }
  for(int i=0;i<=n;i++)
  {
    a[i]==false?cout<<" np ":cout<<" p ";
  }
  int count=0;
  for(int i=0;i<=n;i++)
  {
    if(a[i]==true)
    {
      count++;
    }
    continue;
  }
  cout<<endl<<"total no of primes upto "<<n<<" is "<<count;
}
