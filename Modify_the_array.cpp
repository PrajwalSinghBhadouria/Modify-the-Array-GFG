//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> modifyAndRearrangeArray(vector<int> &arr) {
        // Complete the function
        vector<int> v;
        for(int i=0; i<arr.size()-1; i++){
            if(arr[i]==arr[i+1]){
                arr[i] = arr[i]*2;
                arr[i+1]=0;
            }
        }
        int count = 0;
        for(int i=0; i<arr.size(); i++ ){
            if(arr[i]!=0){
                v.push_back(arr[i]);
            }
            else{
                count++;
            }
        }
        for(int i=0; i<count; i++){
            v.push_back(0);
        }
        return v;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        vector<int> ans = obj.modifyAndRearrangeArray(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends
