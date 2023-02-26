

template <class T, int n = 10>
class stack{
    private:
        int at = -1;
        T arr[n];

    public:
        stack();
        void push(T a);
        void pop();
        void top();
        bool full();
        bool empty();
        void display();
};

