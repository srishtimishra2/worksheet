

1.#include <stdio.h>
  int main()
  {
    int a = -1;
    if (a)
        printf("hello");
    printf("world");
    return 0;
   }
2.#include <stdio.h>
  int main()
  {
    int a = -0;
    if (a)
        printf("hello");
    printf("world");
    return 0;
  }
3.#include <stdio.h>
  int main()
  {
    int a = 1;
    if (a)
    {
        printf("hello");
    }
    else
    {
        printf("world");
    }
    return 0;
   }
4.#include <stdio.h>
   int main()
   {
    int a = 1;
    if (a);
    {
        printf("hello");
    }
    else
    {
        printf("world");
    }
    return 0;
}
5.#include <stdio.h>
  int main()
  {
    int a = 1;
    if (a);
    {
        printf("hello");
    }
    printf("world");
    return 0;
  }
6.#include <stdio.h>
  int main()
  {
    int a = 0;
    if (a = 0)
    {
        printf("hello");
    }
    else
    {
        printf("world");
    }
    return 0;
   }
7.#include <stdio.h>
  int main()
  {
    int a = 0;
    if(a == 0)
    {
        printf("hello");
    }
    else
    {
        printf("world");
    }
	return 0;
    }
8.#include <stdio.h>
  int main()
  {
    int a = 97;
    if (a == 'a');
    else
    printf("hello");
    printf("world");
    return 0;
    }
9.#include <stdio.h>
  int main()
  {
    int a = 97;
    if (a ==' a')
    else
    printf("hello");
    printf("world");
    return 0;
   }
10.#include <stdio.h>
   int main()
   {
    int a = 10;
    int b = 20;
    if(a < b == b > a)
        printf("hello");
    else
        printf("world");
   return 0;
  }
11.#include <stdio.h>
    int a;
    int b;
    int c;
    int main()
    {
    if(a == b == b == c)
    {
        printf("%d %d %d", a, b, c);
    }
    return 0;
}
12.#include <stdio.h>
    int a = 10;
    int b = 10;
    int c = 10;
    int main()
    {
    if(a == b == b == c)
    {
        printf("%d %d %d", a, b, c);
    }
    return 0;
    }
13.#include <stdio.h>
    int a = 5;
    int main()
    {
    int a = 10;
    if (printf("hello") == a)
        printf("student");
    return 0;
    }
14.#include <stdio.h>
    int a = 5;
    int main()
    {
    int b = a++;
    if (printf("hello") == b++);
    else
        printf("student");
    return 0;
    }
15.#include <stdio.h>
    int main()
    {
    int expr = 2;
	   switch (expr)
    {
        default :   printf("Three");
        case 1  :   printf("One");
        case 2  :   printf("Two");
    }
    return 0;
    }
16.#include <stdio.h>
    int main()
    {
    int expr = 3;
    switch (expr)
    {
        default :   printf("Three");
                    break;
        case 1  :   printf("One");
                    break;
        case 2  :   printf("Two");
                    break;
    }
    return 0;
    }
17.#include <stdio.h>
   int main()
    {
    float expr = 1.0;
    switch (expr)
    {
        default :   printf("Three");
                    break;
        case 1  :   printf("One");
                    break;
        case 2  :   printf("Two");
                    break;
    }
    return 0;
    }
18.#include <stdio.h>
    int main()
    {
    float expr = 1.0;
    switch ((int)expr)
    {
        default :   printf("Three");
                    break;
        case 1  :   printf("One");
                    break;
        case 2  :   printf("Two");
                    break;
    }
    return 0;
    }
19.#include <stdio.h>
    int main()
    {
    char ch = 'A';
    switch (ch + 1)
    {
        case 'A'    :   printf("Case label is A");
        case 'B'    :   printf("Case label is B");
    }
    return 0;
    }
20.#include <stdio.h>
    int main()
    {
    char ch = 'A';
    switch (ch)
    {
        case 'A'    :   printf("Case label is A");
        case 'B'    :   printf("Case label is B");
    }
    return 0;
    }
