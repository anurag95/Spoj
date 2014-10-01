#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define mod 1000000007
int main()
{
	int t;
	ll a, b, c, n;
	ll ans=1, var;
	scanf("%d", &t);
	while(t--)
	{
		priority_queue<ll> low;
		priority_queue <ll, vector<ll>, greater<ll> > high;
		scanf("%lld%lld%lld%lld", &a, &b, &c, &n);
		if(n==1)
		{
			printf("1\n");
			continue;
		}
		low.push(1);
		ans = 1;
		for(int i=2;i<=n;i++)
		{
			var = ((a*low.top())%mod + (b*i)%mod + c)%mod;
			if(!(i&1))
				high.push(var);
			else {
				if(high.top() < var)
				{
					low.push(high.top());
					high.pop();
					high.push(var);
				}
				else low.push(var);
			}
			ans = (ans+var)%mod;
		}
		printf("%lld\n", ans);
	}
	return 0;
}

