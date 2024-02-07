class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    sort(arr,arr+n);
	    set<int>st;
	    vector<int>temp;
	    for(int i=0; i<n; i++)
	    {
	        st.insert(arr[i]);
	    }
	    if(st.size()==1)
	    {
	        return -1;
	    }
	    if( st.size()==2)
	    {
	        return arr[0];
	    }
	    for(auto x : st)
	    {
	        temp.push_back(x);
	    }
	    
	    return temp[temp.size()-2];
	}
};
