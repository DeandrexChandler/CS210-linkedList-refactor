#pragma once

#include <iostream>
using namespace std;

template <typename T> class ArrayList
{
  public:
    ArrayList() : size(0) {}

    void add(T item) // adds to the front of the array
    {
        if (size >= CAPACITY)
        {
            cout << "Array is full" << endl;
            return;
        }

        for (int i = size; i > 0; i--)
        {
            data[i] = data[i - 1];
        }
        data[0] = item;
        size++;
    }
    void deletefront()
    {
        if (size == 0)
        {
            cout << "Array is empty" << endl;
            return;
        }
        for (int i = 0; i < size; i++)
        {
            data[i] = data[i + 1];
        }
        size--;
    }

    bool search(T item)
    {
        if (size == 0)
        {
            cout << "Array is empty" << endl;
            return false;
        }
        for (int i = 0; i < size; i++)
        {
            if (data[i] == item)
                return true;
        }
        return false;
    }

    void printArray()
    {
        for (int i = 0; i < size; i++)
        {
            cout << data[i] << ",";
        }
        cont::endl;
    }

    void adbaback(T item) // adds back to the back of array
    {
        if (size >= CAPACITY)
        {
            cout << "Array is full" << endl;
            return;
        }

        data[size] = item;
        size++;
    }

    void deleteback()
    {
        if (size == 0)
        {
            cout << "Array is empty" << endl;
            return;
        }
        size--;
    }

  private:
    static const int CAPACITY = 20;
    T data[CAPACITY];
    int size;
};