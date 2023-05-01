#include<iostream>
#include<algorithm>
#include<set>
#include<vector>

using namespace std;

string a = "abcdefghijklmnopqrstuvwxyz";

int main(){
    int n,k;
    cin >> n >> k;
 
    set<string> h;
    vector<string> v;
  
    string x = a.substr(0,n);//Cac tu co do dai k bat dau tu 'a'
    
    do{
        string tmp ="";
    for(int j = 0 ; j < k ; j++){
        tmp += x[j];
        v.push_back(tmp);
    }
    }while(next_permutation(x.begin(),x.end()));
    
   for(auto it : v) if((int)it.size() == k) h.insert(it);

   for(auto l : h) cout << l << endl;
}
