class MyClass {
    public:
        MyClass();
        MyClass(int a, float b, double c);
        MyClass(const MyClass& rhs);
        ~MyClass();
        MyClass& operator=(const MyClass&rhs);
        MyClass& operator=(int a);
        MyClass& operator+=(const MyClass&rhs);
        std::string print();
    private:
        int x;
        float y;
        double *z;
};