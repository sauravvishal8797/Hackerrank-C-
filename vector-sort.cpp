#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x;
    int n;
    cin>>n;
    vector<int>a;
    for(int i = 0; i < n; i++){
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }/* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}