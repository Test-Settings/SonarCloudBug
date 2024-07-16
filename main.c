#include <stdio.h>

typedef enum {APPLE, GRAPE, KIWI} fruit;

void example(fruit f, int i) {
  switch (f) {  // Noncompliant; no case for KIWI
    case APPLE:
      //...
    case GRAPE:
      //...
    case 3: // Noncompliant; case value not in enum
      // ...
  }
    
int f() {
    int j = 0;
L1:
    ++j;
    if (10 == j) {
        goto L2;         // forward jump ignored
    }
    // ...
    goto L1;           // Noncompliant
L2:
    return ++j;
}

int main() {
  switch (i) { // Noncompliant; no default
    case 0:
    // ...
    case 1:
    // ...
    }
  }
  
  f();
  printf("Hello, World!\n");
  return 0;
}
