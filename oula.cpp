#include <cstring>
#include <cstdio>
#include <iostream>
using namespace std;
int prime[61000000],primesize,phi[101000000];
bool isprime[1010000000];
void getlist(int listsize)
{
    memset(isprime,1,sizeof(isprime));
    isprime[1]=false;
    for(int i=2;i<=listsize;i++)
    {
        if(isprime[i])prime[++primesize]=i;
         for(int j=1;j<=primesize&&i*prime[j]<=listsize;j++)
         {
            isprime[i*prime[j]]=false;
            if(i%prime[j]==0)break;
        }
    }
}
int main()
{
	freopen("prime","w",stdout);
	getlist(900000000);
	for(int i=0;i<10000;i++)
	    printf("%d\n",i+7);
	for(int i=0;i<11000000;i++)
		if(prime[i]!=0)
		    printf("%d\n",prime[i]);

	return 0;
}
