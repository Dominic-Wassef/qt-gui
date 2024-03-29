#include <iostream>

int main()
{

  int a = 25;
  int b = 25;

  // Comment : line commetn
  /*
      BLOCK
      COMMENT: Can span lines
   */
  std::cout << "----------Math Operators------------" << std::endl;
  std::cout << "a + b = " << a + b << std::endl;
  std::cout << "a - b = " << a - b << std::endl;
  std::cout << "a * b = " << a * b << std::endl;
  std::cout << "a / b = " << (float)a / b << std::endl;
  std::cout << "a % b = " << a % b << std::endl;

  std::cout << "----------Logical Operators------------" << std::endl;

  /* >,<,>=,<=,==
   */
  // Decisions
  if (a == b)
  {
    std::cout << "A is equal to b " << std::endl;
  }
  else
  {
    std::cout << "A is not equal to b" << std::endl;
  }
  std::cout << "------" << std::endl;

  // Loops
  std::cout << "Loops " << std::endl;
  std::cout << "Hello Dominic 1" << std::endl;
  std::cout << "Hello Dominic 2" << std::endl;
  std::cout << "Hello Dominic 3" << std::endl;
  std::cout << "Hello Dominic 4" << std::endl;
  std::cout << "Hello Dominic 5" << std::endl;
  std::cout << "Hello Dominic 7" << std::endl;
  std::cout << "Hello Dominic 8" << std::endl;
  std::cout << "Hello Dominic 9" << std::endl;
  std::cout << "Hello Dominic 10" << std::endl;
  std::cout << "------" << std::endl;

  // For loop
  /*
  std::cout << "For loop " << std::endl;

  for ( int i = 1 ; i <= 100 ; i=i+1)
  {
      std::cout << "Hello Dominic "<<i<<std::endl;
  }
  */

  // While loop
  /*
  std::cout << "While loop " << std::endl;
  int i =1;
  while ( i <= 200)
  {
    std::cout << "Hello Dominic "<<i<<std::endl;
    i=i+1;
  }
  */

  // Do while loop
  std::cout << "Do while loop " << std::endl;
  int i = 1;
  do
  {
    std::cout << "Hello Dominic " << i << std::endl;
    i = i + 1;
  } while (i <= 20);

  return 0;
}
