class RecentCounter {
public:
    int ping(int t) {
        q.push(t);
        while(q.front() < t-3000)
            q.pop();
        return q.size();
    }
private:
    queue<int>q;
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */