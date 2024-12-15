class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int n=arr.size();
        int h=n-1,l=0,m=0;
        while(m<=h){
if(arr[m]==0)
  swap(arr[l++],arr[m++]);
      else if (arr[m] == 1)
            m++;
        else
            swap(arr[m], arr[h--]);
    
        }
        
    }
};
