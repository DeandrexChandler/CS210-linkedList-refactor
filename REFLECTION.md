1. In LinkedList::deleteFront(), why does it take two separate delete calls instead of one?
   Name exactly what each one frees, and name the two new calls back in the program responsible
   for putting them on the heap in the first place.

- It makes 2 delete calls, 1 for object itself and the other for the pointer. "delete doomed->data frees up the object and "delete doomed" frees up the pointer or node.

2. ArrayList never had a destructor before today. Explain, in your own words, why switching
   from T data[CAPACITY] to T\* data [CAPACITY] is what made a destructor necessary, and what
   would happen if you forgot to write one. Would you get a compiler error? Why or why not?

- because withouth T\* data, you esentially delete the data straight from the array, but when you switch you end up deleting the pointers, not the value asigned to each address. If you forget a destructor, no error, since it'll js leak which compiler can't catch.

3. search() and addFront() both take a T\*, but they treat that pointer completely differently.
   Explain the difference in terms of ownership: which one is allowed to delete what you hand it,
   and which one is never allowed to?

- Search() only "borrows" the pointer since all it needs to do is dereference to compare values. Then it forget. While addFront() on the otherhand takes ownership, because it needs to store the pointer so it needs to deleteFront the list. Search is never allowed to delete while addFront can.

4. You swapped LinkedList<T> for ArrayList<T> inside makeList() and reran main.cpp without
   changing a single line there. What two mechanisms, by name, made that possible?

- Despite different lines of code, they both run smoothly due to runtime polymorphism. Where the program calls late binding, which figures out which method to call based on the actual object type at execution time.

5. Pick one keyword from the Key Terms glossary that you either had to add today or wouldn’t have
   thought to add on your own (explicit, override, virtual, const, or any other). Describe, in
   your own words and without copying the guide’s wording, the smallest example you can think
   of where leaving it out would cause a real problem

- The keyword const in a method promises that the object its called on won't change. Removing it causes a problem because it'll cause a "hide virtual member function" error. Which means the new funtion isn't replacing the base function, its just sits there unimplemented, leaving it abstract.
