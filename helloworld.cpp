//Preprocessor directive that includes header iostream
#include <iostream>
#include <string>


//Start of your program: function block main()
int main() {

//Write to the screen std::cout 
    std::cout<<"Hello World!" <<std::endl;
    string fruit = "apple";
    string fruits[5]={"apple","orange","strawberry","banana"};
    for(int i=0;i<5;i++){
        std::cout<<fruits[i]<<std::endl;
    }
    
    /*Return a value to the OS*/
    return 0;
}