/*
Create a Min Heap of size K+1 with the first K+1 elements. We are creating a heap of size K as 
the element can be at most K distance from its index in a sorted array. One by one remove the 
min element from the heap, put it in the result array, and add a new element to the heap from 
the remaining elements.
*/

// range[i-k, i+k]
vector<int> nearlysorted(){    
    vector<int> v;
    priority_queue<int,vector<int>,greater<int>> minh;
    for (int i=0 ;i<n ;i++){
      minh.push(nums[i]);
      if (minh.size()>k){
        int val = minh.top();
	v.push_back(val);
	minh.pop();
      }
 }
 while (!minh.empty()){
    int val = minh.top();
    v.push_back(val);
    minh.pop();
 }
    return v;   
}
