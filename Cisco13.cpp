//http://www.geeksforgeeks.org/kth-largest-element-in-a-stream/
#include <iostream>
#include <queue>
using namespace std;

class KthLargest {
    priority_queue<int, vector<int>, greater<int> > minHeap;
    int k;

public:
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for (int num : nums) {
            minHeap.push(num);
            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }
    }

    int add(int val) {
        minHeap.push(val);
        if (minHeap.size() > k) {
            minHeap.pop();
        }
        return minHeap.top();
    }
};

int main() {
    int k = 3; // Change k to your desired value
    vector<int> initialElements; 
    for(int i=0; i<4; i++)
    {
        cin>>initialElements[i];
    }// Initial elements in the stream

    KthLargest kthLargest(k, initialElements);

    cout << "Enter new elements to add to the stream (or -1 to stop):" << endl;
    int newVal;
    while (cin >> newVal) {
        if (newVal == -1) {
            break;
        }
        int kthLargestElement = kthLargest.add(newVal);
        cout << "K'th largest element: " << kthLargestElement << endl;
    }

    return 0;
}
