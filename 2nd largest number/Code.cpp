class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n=arr.size();
        int largest=-1;
        int secondlarge=-1;
        for(int i=0;i<n;i++){
            if(arr[i]>largest){
                secondlarge=largest;
                largest=arr[i];
            }else if(arr[i]<largest && arr[i]>secondlarge){
                secondlarge=arr[i];
            }
        }
        return secondlarge;
   
    }
};
