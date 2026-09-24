// #include <iostream>

// class Box
// {
//   public:
//     Box(int value) : data(new int(value)) {}

//     ~Box()
//     {
//         delete data;
//         data = nullptr;
//     }
//     int value() { return *data; }

//   private:
//     int *data;
// };

// int main()
// {
//     /*
//     int x = 5;
//     int *p = &x; // pointer p- stack memory
//     std::cout << x << std::endl;
//     std::cout << *p << std::endl; // dreferencing - prints value in address
//     std::cout << p << std::endl;  // referencing - prints the address itself

//     *p = 10; // new pointer value
//     std::cout << *p << std::endl;
//     std::cout << p << std::endl; // same pointer address
//     */
//     /*
//     int *p = new int(5); // no name unlike int x = 5 where x is the name; heap memory
//     std::cout << *p << std::endl;
//     std::cout << p << std::endl;
//     delete p; // descructor in classes; frees up memory
//     p = nullptr;
//     */

//     Box *box1 = new Box(5);
//     std::cout << box1->value() << std::endl;
//     delete box1;
//     return 0;
// }

#include "Data.h"
#include "List.h"
#include <iostream>
int main()
{
    std::unique_ptr<List<int>> list = makeList<int>();
    list->addFront(new int(10));
    list->addFront(new int(20));
    list->addFront(new int(30));
    list->print();
    int key = 20;
    std::cout << "search(20): " << (list->search(&key) ? "found" : "not found") << std::endl;
    list->deleteFront();
    list->print();
    std::unique_ptr<List<Data>> roster = makeList<Data>();
    roster->addFront(new Data(1, "Alice"));
    roster->addFront(new Data(2, "Bilal"));
    roster->addFront(new Data(3, "Chen"));
    roster->print();
    Data query(2, "");
    std::cout << "search(id 2): " << (roster->search(&query) ? "found" : "not found") << std::endl;
    return 0;
}