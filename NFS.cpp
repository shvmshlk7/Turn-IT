#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int u,a,s,vel;
        double v,sqrtvel;
        cin>>u>>v>>a>>s;
        vel = (u*u)-(2*a*s);
        sqrtvel = sqrt(vel);

        if(sqrtvel>v)
        cout<<"NO\n";
        else
        cout<<"YES\n";

    }
    return 0; 
}
