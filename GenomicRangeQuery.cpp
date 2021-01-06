#include<iostream>

using namespace std;

int main(){
    int m=3;
    int p[m], q[m];
    //A=1 C=2 G=3 T=4
    string s;
    s="CAGCCTA";
    p[0]=2;
    p[1]=5;
    p[2]=0;
    q[0]=4;
    q[1]=5;
    q[2]=6;


    for (int i=0;i<m;i++){
        if(p[i]==q[i]){
            char znak=s[p[i]];
            cout<<znak<<endl;
        }
        else{
            for(int j=p[i];j<q[i];j++){
                char znak=s[j];
                cout<<znak;
            }
            cout<<endl;
        }
    }



return 0;
}
