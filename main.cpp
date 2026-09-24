#include <iostream>

class Box
{
  public:
    Box(int value) : data(new int(value)) {}

    ~Box()
    {
        delete data;
        data = nullptr;
    }
    int value() { return *data; }

  private:
    int *data;
};

int main()
{
    /*
    int x = 5;
    int *p = &x; // pointer p- stack memory
    std::cout << x << std::endl;
    std::cout << *p << std::endl; // dreferencing - prints value in address
    std::cout << p << std::endl;  // referencing - prints the address itself

    *p = 10; // new pointer value
    std::cout << *p << std::endl;
    std::cout << p << std::endl; // same pointer address
    */
    /*
    int *p = new int(5); // no name unlike int x = 5 where x is the name; heap memory
    std::cout << *p << std::endl;
    std::cout << p << std::endl;
    delete p; // descructor in classes; frees up memory
    p = nullptr;
    */

    Box *box1 = new Box(5);
    std::cout << box1->value() << std::endl;
    delete box1;
    return 0;
}