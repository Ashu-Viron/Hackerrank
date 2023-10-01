#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
     int n,q,k;
     cin>>n>>q;
     vector<int> sub_arrays;
     vector<vector<int>> vector_ofvector_arrays;
     for(int i=0;i<n;i++)
     {
        cin>>k;
        sub_arrays.clear();
        int A[k];
        for(int j=0;j<k;j++)
        {
            cin>>A[j];
            sub_arrays.push_back(A[j]);
        }vector_ofvector_arrays.push_back(sub_arrays);
     }
    for(int i=0;i<q;i++)
    {
        int r,s;
        cin>>r>>s;
        cout<<vector_ofvector_arrays[r][s]<<endl;
    }
//RAW Codes
// int main() {
//      int n,q,k;
//      cin>>n>>q;
//      cout<<n<<" ";
//      cout<<q<<endl;
//     {
//      for(int i=0;i<n;i++)
//      {
//         cin>>k;
//         cout<<k<<" ";
//         int A[k];
//         for(int j=0;j<k;j++){
//             cin>>A[j];
//             cout<<A[j]<<" ";
//         }cout<<endl;
//      }}
//      else{
//         cout<<"";
//      }
// for(int l=0;l<q;l++)
// {
// cin>>a>>b;
// cout<<a<<" "<<b<<endl;
// }}
    return 0;
}
