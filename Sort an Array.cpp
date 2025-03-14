class Solution {
public:
    int partition(vector<int>&arr, int low, int high) {
        int pivot = arr[low];

        int i = low;
        int j = high;

        while (i < j) {
            while (arr[i] <= pivot && i <= high - 1)
                i++;
            while (arr[j] > pivot && j >= low + 1)
                j--;

            if (i < j)
                swap(arr[i], arr[j]);
        }
        swap(arr[low], arr[j]);

        return j;
    }
    void quickSort(vector<int>& arr, int low, int high) {
        if (low >= high) return;

        int partIndex = partition(arr, low, high);
        quickSort(arr, low, partIndex-1);
        quickSort(arr, partIndex + 1, high);
    }
    vector<int> sortArray(vector<int>& nums) {
        quickSort(nums, 0, nums.size() - 1);

        return nums;
    }
};
