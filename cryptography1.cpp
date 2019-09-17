#include<bits/stdc++.h>
using namespace std;

map<char,int> m;
vector<pair<char,int>> v;
vector<pair<char,double>> v1;

bool sort1(pair<char,int>& a, pair<char,int>& b){
    return a.second > b.second;
}

bool sort2(pair<char,double> a, pair<char,double> b){
    return a.second > b.second;
}

int main()
{
    char s;
    double d;
    while(cin>>s, s!= '$') {
        m[s]++;
    }

    printf("\n\n");

    for(auto itr = m.begin(); itr != m.end(); ++itr){
        v.push_back(*itr);
    }

    sort(v.begin(),v.end(),sort1);

    for(auto it = v.begin();it != v.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }

    printf("\n\n");

    while(cin>>s && cin>>d, s!='$'){
        v1.push_back(make_pair(s,d));
    }

    printf("\n\n");

    sort(v1.begin(),v1.end(),sort2);

    for(auto it = v1.begin();it != v1.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}
