#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int n;
	int initial = 0;

	while(t--)
	{
	    cin>>n;
	   if(n % 2 == 0)
	   {
	       cout<<n/2<<endl;
	       
	   }
	   else
	   cout<<-((n/2)+1)<<endl;
	    
	}
	return 0;
}
