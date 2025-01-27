class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int count = 0;
        int sum = 0;
        
        // Calculate the sum of the first k elements
        for (int i = 0; i < k; ++i) {
            sum += arr[i];
        }
        
        // Check if the first window meets the threshold
        if (sum / k >= threshold) {
            count++;
        }
        
        // Slide the window across the array
        for (int i = k; i < arr.size(); ++i) {
            sum += arr[i] - arr[i - k];  // Update the sum by sliding the window
            if (sum / k >= threshold) {
                count++;
            }
        }
        
        return count;
    }
};
