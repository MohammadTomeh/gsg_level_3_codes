#include <bits/stdc++.h> 
using namespace std;
#define ll long long 
int n ;
ll cnt;
vector<string>v={"Swimming", "Running", "Football"};
vector<string>seq;
vector <string>now;
string seqq;
void print(){
    for (int i=0;i<seq.size();i++){
        cout << seq[i]<<endl;
    }
    cout << "COUNT: "<< cnt;
}
void count(int day, int l){
        if(day == n){
            seqq="";
            for (int i = 0; i < now.size(); ++i) {
                if (i) seqq += ' ';
                seqq += now[i];
            }
            seq.push_back(seqq);
            cnt++;
            return;
        }
    for (int i = 0; i < v.size(); ++i) {
        if (i == l) continue;
        now.push_back(v[i]);
        count(day + 1, i);
        now.pop_back();
    }
}
void Tomeh() {
    cin >> n;
    count(0,-1);
    print();
}
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t =1;
    //cin >>t;
    while(t--){Tomeh();}
}
