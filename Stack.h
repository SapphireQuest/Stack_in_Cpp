#pragma once


class Stack
{
    private:
        int *data;
        int capacity;
        int top;
    public:
        Stack();
        ~Stack();

        bool isEmpty() const;
        void push(int element);
        int pop();
};

