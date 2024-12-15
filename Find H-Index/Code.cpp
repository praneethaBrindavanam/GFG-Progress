class Solution {
  public:
    // Function to find hIndex
    int hIndex(vector<int>& citations) {
        // code here
        sort(citations.begin(), citations.end(), greater<int>());
    int n = citations.size();
    int i = 0;

    
    while(i < n && citations[i] > i) {
        i += 1;
    }
    return i;
    }
};
