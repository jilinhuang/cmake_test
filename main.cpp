#include <iostream>
#include <functional>

int main()
{
  [out = std::ref(std::cout << "Hello ")] () {
      out.get() << "World\n";
      out.get() << typeid(out).name();
  } ();
  return 0;
}
