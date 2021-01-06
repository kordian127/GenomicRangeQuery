#include<iostream>
#include<vector>

using namespace std;

int main(){
    int m=3;
    int res,war=5;
    vector <int> result;
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
        for(int j=p[i];j<=q[i];j++){
            char znak=s[j];
            cout<<znak;
            switch (znak){
        case 'A':
            res=1;
            break;
        case 'C':
            res=2;
            break;
        case 'G':
            res=3;
            break;
        case 'T':
            res=4;
            break;
            }
            if(res<war){
            war=res;
            }
        }
        result.push_back(war);
        cout<<endl;
        war=5;
    }

    for(int x=0;x<m;x++){
        cout<<result[x];
    }


return 0;
}
