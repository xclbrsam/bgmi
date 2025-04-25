#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    priority_queue<int> maxHeap; // Max Heap (default behavior)
  priority_queue<int, vector<int>, greater<int> > minHeap; // Min Heap

    cout << "Enter marks obtained by " << n << " students:\n";
    for (int i = 0; i < n; i++) {
        int marks;
        cin >> marks;
        maxHeap.push(marks);  // Insert into Max Heap
        minHeap.push(marks);  // Insert into Min Heap
    }

    // Getting max and min marks
    int maxMarks = maxHeap.top();
    int minMarks = minHeap.top();

    cout << "Maximum Marks: " << maxMarks << endl;
    cout << "Minimum Marks: " << minMarks << endl;

    return 0;
}
