#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;

    int arr[t];

    for(int i=0;i<t;i++){

        cin>>arr[i];


    }

    int n;cin>>n;
    bool found=false;

    for(int i=0;i<t;i++){

        if(n==arr[i]) {
                cout<<i;
        found=true;
        break;
        }
    }
        if (found==false){
                cout<<-1;

        }







    return 0;
}

