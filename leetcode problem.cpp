https://leetcode.com/problems/implement-stack-using-queues/description/ 
class MyStack {
public:
    queue<int> q1;
    /*
    method:
    q1 before: [] (empty)
    after q1.push(1), q1 = [1]
    after the loop, q1 becomes: [1]

    push(2):
    q1 before: [1]
    after q1.push(2), , q1 = [1, 2]
    after the loop, q1 becomes: [2, 1]
    push(3):

    q1 before: [2, 1]
    after q1.push(3), , q1 = [2, 1, 3]
    after the loop, q1 becomes: [3, 2, 1]
    */
    void push(int data) {
        int Q_size = q1.size(); // initialize variable with the size of q1
        q1.push(data); // push initial data on queue 
        while(Q_size != 0){
            q1.push(q1.front()); // enqueue the thing in the front of the queue to the back 
            q1.pop(); // pop the front value that was initially pushed in line 7 
            Q_size--; // decrement this size variable so the loop stops when we have visited all values of q1
        }
    }
    
    int pop() {
        int result = top();
        q1.pop(); // removes the front value from the queue, which is the last in value 
        return result; //return the top of the stack
    }

    int top() {
        return q1.front(); //returns the front of the queue as the stack top. 
    }                      //the push function would have placed the last in value in the front position

    bool empty() {
        return q1.empty(); //using q1 as our "stack"
    }
};
