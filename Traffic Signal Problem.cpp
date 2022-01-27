#include<bits/stdc++.h>
using namespace std;

int main(){
    int d,i,s,v,f;
    cin>>d>>i>>s>>v>>f;

    set<string>cmnst;

    vector<int>endp;
    vector<string>strp;

    while(s--){
        int b,e;
        cin>>b>>e;
        // cout<<b<<" "<<e;

        endp.push_back(e);

        string s_name;
        cin>>s_name;
        // cout<<s_name<<" ";

        strp.push_back(s_name);

        int l;
        cin>>l;
        // cout<<l;
    }

    while(v--){
        int num_s;
        cin>>num_s;
        // cout<<num_s<<" ";

        string path[num_s];
        
        for(int i=0;i<num_s;i++){
            cin>>path[i];
        }
        for(int i=0;i<num_s-1;i++){
            // cout<<path[i];
            cmnst.insert(path[i]);
        }
    }
    vector <string> cmnst2;
    for (auto it = cmnst.begin(); it !=cmnst.end(); ++it){
        cmnst2.push_back(*it);
    }
        // cmnst2 , strp
    for(int i=0; i<cmnst2.size(); i++){
        for(int j=0; j<strp.size();j++){
                if(cmnst2[i] == strp[j]){
                    cout<<endp[j]<<" ";
                }
        }

    }
    cout<<endl;
    return 0;
}
