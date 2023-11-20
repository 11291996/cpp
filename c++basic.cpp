// single line annotation
/*
multi line annotation
*/
/*
source code(.cpp) -> preprocessor(reconstruct to assembly) -> compiler(machine code) + header file(.h) ->
object code(.obj) -> linker(importing libraries + object files) -> executable file(.exe)
*/  
//module -> part of the whole programm containing related codes
//basic structure of c++ program
#include <iostream> //importing libraries //c++ standard library
#define TEXT "Hello, world!" //defining a variable
//the function part
int main() {
    std::cout << TEXT << std::endl; //print the text
    std::cout << oct; //prints int as octal
    std::cout << 12 << std::endl;
    std::cout << dec; //prints int as decimal
    std::cout << 12 << std::endl;
    std::cout << hex; //prints int as hexadecimal
    std::cout << 12 << std::endl;
    return 0; //ends the program, each line must be seperated by semicolon
}
//to omit std, use namespace 
using namespace std;
 
int main()
{
    cout << TEXT; //std:: is not needed
    return 0;
}
//classes of c++
cout << "data to print"; //python print function
cin >> variable //python input function
 
int main()
{
    int age; //declaring data type of variable and getting an address
 
    cout << "what is your age? : "; //print
    cin >> age; //input
 
    cout << "you age is " << age << "." << endl;
    return 0;
}
//variables 
int main() {
    int num; //variable declaration, only lower and uppercases, numbers and underscore are allowed
    num = 20 //but cannot start with numbers
    cout << num << endl; //type must be declared as it is shown in data structure and algorithm
    //variable returns the value
    cout << &num << endl; //actual address of the variable //reference
    return 0;
}
//variable types 
//also called Integral
int main() {
    short num1; //2 bytes
    signed short num2;
    unsigned short num3;
    int num4; //4 bytes
    signed int num5;
    unsigned int num6;
    long num7; //4 bytes
    signed long num8;
    unsigned long num9;
    long long num10; //8 bytes
    //overflow will occur if the value is out of range
    signed long long num11;
    unsigned long long num12;
    float num13; //4 bytes
    double num14; //8 bytes
    long double num15; //8 bytes
    char num16; //1 byte //c++ thinks it as an ASCII code
    unsigned char num17;
    signed char num18;
    bool num19; //1 byte
    auto num20; //automatically detects the data type
    return 0;
}


//constants 
//literal constant -> the values assigned to variables or classes
int main() {
    cout << 20 << endl; //integer literal
    cout << 3.14 << endl; //floating point literal
    cout << 'A' << endl; //character literal
    cout << "Hello, world!" << endl; //string literal
    return 0;
}
//symbolic constant -> the values that cannot be changed
//this prevents the values from being changed accidentally
int main() {
    const int num = 20; //constant declaration, cannot be changed
    cout << num << endl;
    return 0;
}

//type conversion
//implicit conversion
int main() 
{
    int num1 = 3.1415;
    int num2 = 8.3E12;
    double num3 = 5;
    double result1 = 5 + 3.14; //results change automatically
    double result2 = 5.0f + 3.14;   
    return 0;
}
//explicit conversion
int main() {
    int num1 = 1;
    int num2 = 4;
    double result1 = num1 / num2; //results int
    double result2 = (double) num1 / num2; //changing the whole thing
    double result3 = double (num1) / num2; //changing num1 and implicit conversion
    return 0;
}

//operators
//arithmetic operators
int main() {
    int num1 = 10;
    int num2 = 3;
    cout << num1 + num2 << endl; //addition
    cout << num1 - num2 << endl; //subtraction
    cout << num1 * num2 << endl; //multiplication
    cout << num1 / num2 << endl; //division
    cout << num1 % num2 << endl; //remainder
    return 0;
}
//assignment operators
int main() {
    int num1 = 10;
    int num2 = 3;
    num1 += num2; //num1 = num1 + num2
    num1 -= num2; //num1 = num1 - num2
    num1 *= num2; //num1 = num1 * num2
    num1 /= num2; //num1 = num1 / num2
    num1 %= num2; //num1 = num1 % num2
    return 0;
}
//increment and decrement operators
int main() {
    int num1 = 10;
    int num2 = 10;
    cout << num1++ << endl; //print and increment
    cout << ++num2 << endl; //increment and print
    cout << num1-- << endl; //print and decrement
    cout << --num2 << endl; //decrement and print
    return 0;
}
//relational operators
int main() {
    int num1 = 10;
    int num2 = 3;
    cout << (num1 == num2) << endl; //equal to
    cout << (num1 != num2) << endl; //not equal to
    cout << (num1 > num2) << endl; //greater than
    cout << (num1 < num2) << endl; //less than
    cout << (num1 >= num2) << endl; //greater than or equal to
    cout << (num1 <= num2) << endl; //less than or equal to
    return 0;
}
//logical operators
int main() {
    int num1 = 10;
    int num2 = 3;
    cout << (num1 == 10 && num2 == 3) << endl; //and
    cout << (num1 == 10 || num2 == 3) << endl; //or
    cout << !(num1 == 10) << endl; //not
    return 0;
}
//bitwise operators
int main() {
    int num1 = 10;
    int num2 = 3;
    cout << (num1 & num2) << endl; //and
    cout << (num1 | num2) << endl; //or
    cout << (num1 ^ num2) << endl; //xor
    cout << (num1 << 1) << endl; //left shift
    cout << (num1 >> 1) << endl; //right shift
    return 0;
}
//conditional operators
int main() {
    int num1 = 10;
    int num2 = 3;
    cout << ((num1 > num2) ? num1 : num2) << endl; //if num1 > num2, print num1, else print num2
    return 0;
}
//comma operator
int main() {
    int num1 = 10;
    int num2 = 3;
    cout << (num1, num2) << endl; //print num2
    return 0;
}
//sizeof operator
int main() {
    int num1 = 10;
    int num2 = 3;
    cout << sizeof(num1) << endl; //print the size of num1
    return 0;
}
//type casting operator
int main() {
    int num1 = 10;
    int num2 = 3;
    cout << (double) num1 / num2 << endl; //print num1 as double
    cout << const int num3 = 10 << endl; //print num3 as int
    cout << typeid(num1) << endl; //print the type of num1
    return 0;
}
//pointer operator
int main() {
    int num1 = 10;
    int *ptr = &num1; //pointer declaration
    cout << ptr << endl; //print &num1
    cout << *ptr << endl; //print num1
    int *ptr = new int; //dynamic memory allocation
    //does not have variable involved, just pointer and data
    delete ptr; //unallocate the memory
    int **pptr = &ptr; //pointer to pointer
    cout << pptr << endl; //print &ptr
    cout << *pptr << endl; //print ptr meaning print &num1
    return 0;
}

//conditionals 
//if statement
int main() {
    int num1 = 10;
    int num2 = 3;
    if (num1 > num2) {
        cout << "num1 is greater than num2" << endl;
    }
    return 0;
}
//if else statement
int main() {
    int num1 = 10;
    int num2 = 3;
    if (num1 > num2) {
        cout << "num1 is greater than num2" << endl;
    }
    else {
        cout << "num1 is less than num2" << endl;
    }
    return 0;
}
//if else if statement
int main() {
    int num1 = 10;
    int num2 = 3;
    if (num1 > num2) {
        cout << "num1 is greater than num2" << endl;
    }
    else if (num1 < num2) {
        cout << "num1 is less than num2" << endl;
    }
    else {
        cout << "num1 is equal to num2" << endl;
    }
    return 0;
}
break; //breaks the loop
continue; //skips the loop
//switch statement
int main() {
    int num1 = 10;
    int num2 = 3;
    switch (num1) {
        case 10:
            cout << "num1 is 10" << endl;
            break;
        case 20:
            cout << "num1 is 20" << endl;
            break;
        default:
            cout << "num1 is not 10 or 20" << endl;
            break;
    }
    return 0;
}
//while loop
int main() {
    int num1 = 10;
    while (num1 > 0) {
        cout << num1 << endl;
        num1--;
    }
}
//do while loop
int main() {
    int num1 = 10;
    do {
        cout << num1 << endl;
        num1--;
    } while (num1 > 0);
    return 0;
}
//for loop
int main() {
    for (int num1 = 10; num1 > 0; num1--) {
        cout << num1 << endl;
    return 0;
    }
}
//data structures
//array
int main () {
    int arr[4]; //array declaration with random numbers
    int arr[4] = {1, 2, 3, 4}; //array declaration
    cout << sizeof(arr) << endl; //print the size of the array //total number of bytes
    return 0;
}
//mulitdimensional array
int main () {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}}; //array declaration
    return 0;
}
//array loop
int main () {
    int arr[4] = {1, 2, 3, 4};
    int arr_len = sizeof(arr)/sizeof(int); //total number of elements 
    for (int i = 0; i < arr_len; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}
//pointer array
int main () {
    int arr[4] = {1, 2, 3, 4};
    int *ptr = arr; //now this pointer array is an array of addresses
    for (int i = 0; i < 4; i++) {
        cout << *ptr << endl; //starting from the address of the first element
        ptr++; //incrementing the address
    }
    return 0;
}
//string
int main () {
    string str = "Hello, world!";
    cout << str << endl;
    cout << str.length() << endl; //print the length of the string //equal to str.size()
    cout << str[0] << endl; //print the first character of the string
    cout << str + " I am a programmer." << endl; //concatenate the string
    cout << str.append(" I am a programmer.") << endl; //concatenate the string
    cout << str.append(" I am a programmer.", 0, 5) << endl; //concatenate the string from 0 to 5
    cout << str.append(5, '!') << endl; //concatenate the string with 5 exclamation marks
    cout << str.find("programmer") << endl; //find the starting index of the word in the string
    cout << str.find("p") <<endl; //find the starting index of the character in the string
    cout << str.find("programmer", 4) << endl; //find the starting index of the word in the string from string's index 4
    cout << str.find("programmer", 4, 5) << endl; //find the starting index of the word in the string from string's index 4 with length 5
    cout << str.compare("Hello, world!") << endl; //compare the string with the string inside and return 0 if they are the same 
    cout << str.compare('Xello, world!') << endl; //returns int bigger than  0 
    cout << str.compare('Aello, world!') << endl; //returns int smaller than 0
    cout << str.replace(0, 5, "Hi") << endl; //replace the string from index 0 with length 5 with "Hi"
    return 0;
}
//structure //class without methods 
int main() {
    struct book {
        string title;
        string author;
        int price;
    };
    struct book book1;
    book1 = {"Harry Potter", "J.K. Rowling", 10000};
    cout << book1.title << endl;
    return 0;
}
//pointer to structure
int main() {
     struct book {
        string title;
        string author;
        int price;
    };
    struct book book1;
    struct book *p = &book1;
    p->title = "Harry Potter"; //same as (*p).title = "Harry Potter";
    cout << p->title << endl;
}
//union //structure with vertical data structure
int main() 
{
    union book {
        string title;
        string author;
        int price;
    };
    union book book1;
    book1.title = "Harry Potter";
    cout << book1.title << endl;
    return 0;
}
//enumerated type //dictionary
int main() {
    enum day {mon = 13, tue = 14, wed = 15, thu = 16, fri = 17, sat = 18, sun = 19};
    cout << (day)mon << endl;
    return 0;
}
//functions
int smallnum(int num1, int num2) { //the first int is the return type 
//function can return reference and pointers as well
    if (num1 < num2) {
        return num1;
    }
    else {
        return num2;
    }
    return 0;
}
int main() {
    cout << smallnum(10, 3) << endl;
    int small = smallnum(10, 3); //return type and variable type must be the same
    return 0;
}
void //show that the variable or function return is allocated in address without data type declared
//also can be used for pointers but not variables since it need data type to define one
//function copies the value of the variable creating its own memeory space
void Local (int num) {
    num += 10;
}
int main(){
    int var = 10;
    cout << var << endl;

    Local(var);
    cout << var << endl; //the value is not changed 
    //also additional memory space is created
    return 0;
}
//use reference to change the value of the variable
void Local (int &num) { //declaring that the function is going to access the value 
    num += 10;
}
int main(){
    int var = 10;
    cout << var << endl;

    Local(var);
    cout << var << endl; //the value is now changed
    return 0;
}
//or just use pointers
void Local (void *p) {
    *(int*)p += 10; //guessing the data type of the actual input pointer
}
int main() {
    int var = 10;
    cout << var << endl;

    Local(&var); //address or pointer must get in
    cout << var << endl; //the value is now changed
    return 0;
}
//one should choose which argument to use depending on the situation
//array is actually just a pointer, so it does not copy the value
void make_new_arr(int *arr) {
    int arr_len = sizeof(arr)/sizeof(int);
    for (int i = 0; i < arr_len; i++) {
        arr[i] = arr[i] + 1;
    }
}
int main() {
    int arr[4] = {1, 2, 3, 4};
    make_new_arr(arr);
    int arr_len = sizeof(arr)/sizeof(int);
    for (int i = 0; i < arr_len;  i++) {
        cout << arr[i] << endl;
    }
}
//to preseve original, one must copy the array like value argument functions  
int main() {
    int arr[4] = {1, 2, 3, 4};
    int arr_len = sizeof(arr)/sizeof(int);
    int arr_c[arr_len];
    for (int i = 0; i < arr_len;  i++) {
        arr_c[i] = arr[i];
    }
    make_new_arr(arr_c);
    for (int i = 0; i < arr_len;  i++) {
        cout << arr[i] << endl;
}}
//pointer vs reference
//inside the reference function, it looks simple 
//however points can access to multiple addresses
//pointer is using two addresses
void location(int *p) {
    int x = 5;
    int y = 6;
    p = &x;
    cout << p << endl;
    cout << *p << endl;
    p = &y;
    cout << p << endl;
    cout << *p << endl;
}
int main() {
    int *p;
    location(p);
}
//this is impossible with reference, just using the same address
void location(int &p) {
    int x = 5;
    int y = 6;
    p = x;
    cout << &p << endl;
    cout << p << endl;
    p = y;
    cout << &p << endl;
    cout << p << endl;
}
int main() {
    int p;
    location(p);
}
//recursive function 
int RecursiveSum(int n)
{
    if (n == 1)                  
    {
          return 1;
    }
    return n + RecursiveSum(n - 1);
}
//constant pointer -> pointer that cannot change the address it points to
int *const ptr = &num;  //constant pointer
//different from pointers to constant
const int *ptr = &num; //cannot change the value of the address
//function pointer -> a pointer that points to the function code
NULL //no bits in the memory //int zero ㅈhas bits but NULL has nothing
//dynamic memory allocation of function
//to check the function address, cout only returns boolean of the function pointer is empty
//so use printf by importing stdio.h
#include <stdio.h>
int add(int num1, int num2) {
    return num1 + num2;
}
int main () {
    int (*func)(int, int) = add; //function pointer declaration
    //there must be a parenthesis
    // if no parenthesis, it will return just a int pointer
    printf("%d\n", func);
    return 0;
}
//unlike other pointers, function pointer does not prevent copying
//since the main already use pointer to get the function 
//but it has a lot of applcations 
//function pointer application
int add(int num1, int num2)
{
    return num1 + num2;
}
int sub(int num1, int num2)
{
    return num1 - num2;
}
int calculator(int num1, int num2, int (*func)(int num1, int num2)) //function pointer as a parameter
{
    return func(num1, num2);
}
int main() {
    for (int num1 = 0; num1 < 1; num1++)
    {
        int calc[2](int, int) = {add, sub}; //this will give an error since array are pointers
        cout << calculator(1,2, calc[0]) << endl;
        cout << calculator(1,2, calc[1]) << endl;
    }
}
int main() {
    for (int num1 = 0; num1 < 1; num1++)
    {
        int (*calc[2])(int, int) = {add, sub}; //now looping is possible since function pointer is used
        cout << calculator(1,2, calc[num1]) << endl;
        cout << calculator(1,2, calc[num1 + 1]) << endl;
    }
}
//default argument
int add(int num1, int num2 = 10) //default argument
{
    return num1 + num2;
}
//function overloading
//same name but different arguments
int add(int num1, int num2)
{
    return num1 + num2;
}
int add(int num1, int num2, int num3)
{
    return num1 + num2 + num3;
}
int main () { //the main function sees the variable declaration(signature) and imports functions
    cout << add(1, 2) << endl; 
    cout << add(1, 2, 3) << endl;
    return 0;
}
//inline function
//does not use pointer but copies the function code in the main function
//like lambda function in python
//naturally no recursion
inline int add(int num1, int num2)
{
    return num1 + num2;
}
int main () {
    cout << add(1, 2) << endl; 
    return 0;
}
//macro function
//defined in the program
#define sqr(x) x*x
int main () {
    cout << sqr(2) << endl; //print 4
    cout << sqr(2 + 3) << endl; //print 11 
    //does not calculate in mathematical order but just replace the value 3^2 + 2
    return 0;
}
//adjust it by adding parenthesis
#define sqr(x) (x)*(x)
int main () {
    cout << sqr(2) << endl; //print 4
    cout << sqr(2 + 3) << endl; //print 25
    return 0;
}
//scope 
//variables can only be declared once in a scope
//num1 is declared in the main scope and function scope
void func() {
    int num1 = 10;
    cout << num1 << endl;
}
int main() {
    int num1 = 20;
    cout << num1 << endl;
    func();
    return 0;
}
//however this is bad since c++ does not allow variables to be declared twice
int main () {
    int num1 = 10;
    int num1 = 20; //compile error can occur somewhere
    //num1 = 20; //this is possible
    cout << num1 << endl;
    return 0;
}
//static variable
//this still is in the memory even after the function is done
//kind of works like a pointer 
void func() {
    int num1 = 10;
    cout << num1 << endl;
    num1++;
}
void func2() {
    static int num1 = 10;
    cout << num1 << endl;
    num1++;
}
int main() {
    func();
    func2();
    func();
    func2();
    func();
    func2(); //only static variable is incremented
    return 0;
}
//varialbe allocation above vs static variable 
static int var = 10; //internal linkage //only one internal linkage is possible
void func(void) {
    cout << var << endl;
}; 
int main() {
    cout << var << endl; //prints 10
    int var = 5;
    cout << var << endl; //prints 5
    func(); //prints 10, now static variable is only accessible by functions outside of main
    return 0;
}
//external variable //creating internal linkage with external variable 
#include "extern.cpp"
extern int var = 10; //external linkage //importing variable like python object import
//only one var can be declared even if many files are included
//namespace
//use name space to prevent name collision mentioned above
namespace internal {
    int var = 13;
}
//importing namespace from other files is possible
#include "extern.cpp" //importing external namespace
int main () {
    cout << internal::var << endl;
    cout << external::var << endl;
    return 0;
}
//using name space can omit just like the start of this study
using namespace external::var; //single variable can be imported as well 
//class
class book {
    private: //only accessible by the class functions 
    protected: //only accessible by the class functions and the child classes
    public: 
        const string title; //member variable
        string author;
        float price;
        void info(void) { //member function 
        //cannot share the same name with member variable like python
            cout << title << endl;
            cout << author << endl;
            cout << price << endl;
        };
        void title_(void);
        //const member function
        void title_this(void) const { //indicates that the function does not change the member variable
            title = "Harry Potter 2"; //this is not possible for this function
        };
};
int main() {
    book book1;
    book1.title = "Harry Potter"; //member variable can be accessed by the dot operator
    book1.author = "JK Rowling";
    book1.price = 20.99;
    book1.info();
    return 0;
}
//also member functions can be defined outside of the class if declared in public
void book::title_(void){
        cout << title << endl;
};
int main() {
    book book2;
    book2.title = "Lord of the Rings";
    book2.title_();
} 
//*this is self in python
//useful in accessing the member variables
class book {
public:
    static float default_price; //this enables the use of class member variable
    //class attribute of python but names cannot be the same 
    float price;
    void set_price(float price) { 
        //member function has the same argument as the member variable
        this->price = price; //however using this pointer, this can be solved 
    }
    book default_price_() {
        this->price = 10.99;
        return *this; //also enables return of the instnace
    }
};
//setting the class member variable
float book::default_price = 10.99;
//class constructor 
//when creating a class instance, constructor can be used to define member variables
//especially private member variables since they cannot be accessed from outside
class book
{
private:
    string title_;
	int total_page_;
public:
	book(const string& title, int total_page); //constructor has the same name as the class
    //also must be in public
    //string is const since one does not want the title to be changed 
    //when input string outside the class declaration is changed
    //& also shows that input title's address is used not copy
};
int main(void)
{
	book web_book("HTML and CSS", 350);
    book web_book2 = book("MySQL", 114); //this is also possible
    book *web_book3 = new book("c++", 123); //creating pointer of the instance 
	return 0;
}

book::book(const string &title, int total_page) //constructor definition
{
	title_ = title;
	total_page_ = total_page;
}
//default constructor
//when no constructor is defined, c++ uses default constructor 
//if one is defined, using default constructor will give an error
book::book() {}
//one can define default constructor as well
book::book(const string& title = "book", int total_page = 0);
//or create overloading constructor with class_name(void) in public
class book
{
private:
    string title_;
	int total_page_;
public:
    book(void) { //default constructor
        title_ = "book";
        total_page_ = 0;
    };
	book(const string &title, int total_page);
};
//creating instance with default constructor
int main() {
    book book1; 
    book book2 = book();
    book *book3 = new book; //creating pointer of the instance 
};
//copy constructor
//shallow copy 
//copying the value of the pointer
class book {
    public:
    string *title_;
    int total_page_;
    book(const string &title, int total_page) {
        *title_ = title;
        total_page_ = total_page;
    }
};
int main() {
    book book1("Harry Potter", 1000);
    book book2 = book1;
    *book1.title_ = "Harry Potter 2"; //the change in book1 also changes book2
    cout << *book2.title_ << endl;
    cout << *book1.title_ << endl;
    return 0;
}
//so use deep copy
class book {
    public:
    string *title_;
    int total_page_;
    book(const string &title, int total_page) { 
        *title_ = title;
        total_page_ = total_page;
    }
    book(const book &book) { //copy constructor
        title_ = new string(*book.title_); //creating new string pointer
        total_page_ = book.total_page_; //copying the value
    }
};
int main() {
    book book1("Harry Potter", 1000);
    book book2 = book1;
    *book1.title_ = "Harry Potter 2"; //now the change is not shared
    cout << *book2.title_ << endl;
    cout << *book1.title_ << endl;
    return 0;
}
//the instances must be deleted for other programs after the program is done
//c++ does it by using default destructor
//one can define destructor as well
class book {
    public:
    const string *title_;
    int total_page_;
    book(const string &title, int total_page) {
        title_ = new string(title);
        total_page_ = total_page;
    }
    ~book();
};

book::~book() { //destructor
    cout << *title_ << " is deleted" << endl;
}

int main() {
    book book1("Harry Potter", 1000);
}
//operator overloading
//defining class operator
class book {
    public:
    const string *title_;
    int total_page_;
    book(const string &title, int total_page) { 
        title_ = new string(title);
        total_page_ = total_page;
    }
    book operator+(const book &other) { //operator overloading of +
        return book(*title_ + " & " + *other.title_, total_page_ + other.total_page_);
    }
};
int main() {
    book book1("Harry Potter", 1000);
    cout << *book1.title_ << endl;
    book book2("Lord of the Rings", 2000);
    cout << *book2.title_ << endl;
    book book3 = book1 + book2; //using operator overloading
    cout << *book3.title_ << endl;
    cout << book3.total_page_ << endl;
    return 0;
}
//also operator can be defined outside of the class
book operator+(const book &book1, const book &book2) { 
        return book(*book1.title_ + " & " + *book2.title_, book1.total_page_ + book2.total_page_);
};
//such operator cannot be overloaded
//:: //scope resolution operator
//. //dot operator
//? : //conditional operator
//sizeof //size operator
//.* //pointer to member operator
//typeid //type operator
//const_cast //type conversion operator
//dynamic_cast //type conversion operator
//reinterpret_cast //type conversion operator
//static_cast //type conversion operator
//these type cannot be overloaded outside of the class
//= //assignment operator
//-> //pointer operator
//[] //array operator
//() //function call operator
//friend
//gives access to private member variables and functions without scope resolution operator
class book {
    private:
    string publisher_;
    public:
    const string *title_;
    int total_page_;
    friend void get_publisher(book &book); //declaring friend function    
    book(const string &title, int total_page) {
        title_ = new string(title);
        total_page_ = total_page;
        publisher_ = "Penguin";
    };
};
void get_publisher(book &book) { //friend function //no scope resolution operator
    cout << book.publisher_ << endl;
}

int main() {
    book book1("Harry Potter", 1000);
    get_publisher(book1);
    return 0;
}
//operator redefinition and friend function
class book {
    private:
    public:
    const string *title_;
    int total_page_;
    book(const string &title, int total_page) {
        title_ = new string(title);
        total_page_ = total_page;
    };
    book operator*(int book_num) const;
    friend book operator*(int book_num, const book &book1);
};
book book::operator*(int book_num) const { //calling member operator overloading function
    return book(*title_, total_page_ * book_num); 
    //book::operator* calls member operator overloading function 
    //book is the return type of member operator overloading function
};
int main() {
    book book1("The Lord of the Rings", 1000);
    book total_book = book1 * 3;
    cout << total_book.total_page_ << endl;
    book total_book2 = 3 * book1; //this is impossible so use friend function
    cout << total_book2.total_page_ << endl;
    return 0;
};
//friend function defining
book operator*(int book_num, const book &book1) {
    return book1 * book_num;} //it can access member variables of book class
//now book total_book2 = 3 * book1; is possible
//friend class
class book {
    private:
    const string *title_;
    int total_page_;
    public:
    book(const string &title, int total_page) {
        title_ = new string(title);
        total_page_ = total_page;
    };
    friend class person;
};

class person {
    public:
    void tell_about(book &book) {
        cout << "The title is " << *book.title_ << endl; //this is possible since person is a friend class
        cout << "Total page is " << book.total_page_ << endl;
    }
};

int main() {
    book book1("The Lord of the Rings", 1000);
    person noa;
    noa.tell_about(book1);
    return 0;
};
//friend member function
//letting a member function of a class to be a friend function of another class
class book; //forward declaration
//declaring friend class name is not circular from above
//but for this person uses instance argument of book class
//so book class must be declared before person class

class person {
    public:
    void tell_about(book &book); //for this, book class must be declared before person class
    //this has to be stopped in declaration since book class is not declared yet
};

class book {
    private:
    const string *title_;
    int total_page_;
    public:
    book(const string &title, int total_page) {
        title_ = new string(title);
        total_page_ = total_page;
    };
    friend void person::tell_about(book &book);
};

void person::tell_about(book &book) {
    cout << "This book is " << *book.title_ << endl;
    cout << "It has " << book.total_page_ << " pages" << endl;
};

int main() {
    book book1("The Lord of the Rings", 1000);
    person noa;
    noa.tell_about(book1);
    return 0;
};
//static member variable
class book {
    public:
    static int book_num_; //static member variable
}
//static member function 
class book {
    public:
    static int get_book_num() { //static member function
        return book_num_;
    }
}
//member initializer
//initializing member variables in the constructor
class book {
    private:
    string *const title_;
    int total_page_;
    public:
    book(const string &title, int total_page) : title_(new string(title)), total_page_(total_page) { };
    //member initializer
    //much more efficient than initializing in the constructor body
    //constroctor body assigns the value to the member variable after the instance is created
    //so when the member variable is const or reference, it is impossible to assign the value
    //initializer: const int *num = &num, body: const int *num; num = &num; -> error
};
//class inheritance, mostly for using the same member functions
class novel : public book { //public inheritance //private inheritance can access private member functions 
    public:
    string genre_;
    novel(const string &title, int total_page, const string &genre) : book(title, total_page) {
        genre_ = genre; //getting the value from the parent constructor //if there is not constructor, child uses default constructor
    };
};
//overloading in inheritance
class book {
    public: 
    string title_;
    void info() {
        cout << title_ << endl;
    };
    book(const string &title) {
        title_ = title;
    };
};
class novel : public book {
    public:
    string genre_;
    void info() { //overloading 
        cout << title_ << endl;
        cout << genre_ << endl;
    };
    novel(const string &title, const string &genre) : book(title) {
        genre_ = genre;
    };
};
int main() {
    book book1("Harry Potter");
    book1.info();
    novel novel1("Harry Potter", "Fantasy");
    novel1.info();
    novel1.book::info(); //using parent class member function
    return 0;
};
//multiple inheritance
class book {
    public: 
    string title_;
    void info() {
        cout << title_ << endl;
    };
    book(const string &title) {
        title_ = title;
    };
};
class novel {
    public:
    string genre_;
    void info() {
        cout << genre_ << endl;
    };
    novel(const string &genre) {
        genre_ = genre;
    };
};
class novel_book : public book, public novel { //multiple inheritance
    public:
    novel_book(const string &title, const string &genre) : book(title), novel(genre) { //calling parent constructor
    };
};
//multiple inheritance has some problems
//same member function name can cause confusion
//inheritance can be done in multiple levels
//when using multiple inheritance, parent class cannot use child class address with pointer 
//virtual function 
//for normal overloading 
class Parent{
public:
    void print() {
        cout << "this is Parent." << endl;
    }
};
class Child : public Parent{
public:
    void print() {
        cout << "this is Child." << endl;
    }
};
int main() {
    Parent* p = new Parent;
    Child* c = new Child;
    
    p->print();
    p = c;
    p->print(); //because of static binding, p->print() is binded with Parent::print()
}
//so virtual function is used and it is called dynamic binding
class Parent{
public:
    virtual void print() {
        cout << "this is Parent." << endl;
    }
};
class Child : public Parent{
public:
    virtual void print() {
        cout << "this is Child." << endl;
    }
};

int main() {
    Parent* p = new Parent;
    Child* c = new Child;
    
    p->print();
    p = c;
    p->print(); //now p->print() is binded with Child::print()
}
//the compiler creates a virtual table for this take more memory but does what is intended
//for destructor, virtual function is essential
Parent* p = new Child; //this kind of declaration is possible
//but when the destructor is called, only the destructor of the parent class is called
//then the memory of the child class is not deleted
//so use virtual destructor like above
//pure virtual function
//when the function is not defined in the parent class
class Parent{
public:
    virtual void print() = 0; //pure virtual function
};
class Child : public Parent{
public:
    virtual void print() {
        cout << "this is Child." << endl;
    }
};
//abstract class
//class that has pure virtual function
class Animal {
    public:
        virtual void cry() = 0;
};
class Dog : public Animal {
    public:
        virtual void cry() {
            cout << "bowwow" << endl;
        }
};
class Cat : public Animal {
    public:
        virtual void cry() {
            cout << "meow" << endl;
        }
};
//abstract class cannot be variable or member variable
//nor argument
//nor return type
//nor explicit type conversion
//template
//type encompassing function or class
//function template
template <typename T> //template declaration
T add(T num1, T num2) { //template definition
    return num1 + num2;
}
int main() {
    cout << add(1, 2) << endl; //template function call
    cout << add(1.1, 2.2) << endl;
    return 0;
}
template <class T> //class is also possible
//everytime a function of new type is called, the compiler creates a new function
//explicit specialization
template <> //defines the function differently for certain types
int add(int num1, int num2) {
    return num1 + num2 + 1;
}
//class template //struct template is also possible
template <typename T>
class book {
    public:
    T title_;
    book(T title) {
        title_ = title;
    }
};
int main() {
    book<string> book1("Harry Potter"); //class template declaration
    cout << book1.title_ << endl;
    book<int> book2(1984);
    cout << book2.title_ << endl;
    return 0;
}
//this can be done in normal class as well but nested class template is impossible
template <typename T>
class book {
    public:
    T title_;
    book(T title) {
        title_ = title;
    }
    template <typename U>
    class page {
        public:
        U page_num_;
        page(U page_num);
    };
};
//to define nested class template, one must use template twice
template <typename T>
template <typename U>
book<T>::page<U>::page(U page_num) {
    page_num_ = page_num;
}

int main() {
    book<string> book1("Harry Potter");
    cout << book1.title_ << endl;
    book<int> book2(1984);
    cout << book2.title_ << endl;
    book<string>::page<int> page1(1);
    cout << page1.page_num_ << endl;
    return 0;
}
//template features
template <typename T, int i> //multiple template declaration
template <typename T = float, int i = 10> //default argument is possible
template <typename Type>
class Y : public X<Type> //template inheritance
//explicit specialization
template <> class book<int> //defines the class differently for certain types
{
    public:
    int title_;
    book(int title) {
        title_ = title;
        cout << "this is number titled book." << endl;
    }
};
//partial specialization
template <typename T1, typename T2>
class X 
{
    public:
    X(T1 a, T2 b) {
        cout << "this is general template." << endl;
    }
};
template <typename T1> class X<T2, double> { //not specializing is in front //specializing is in the back being double
    public:
    X(T1 a, double b) {
        cout << "this is partial specialization." << endl;
    }
};
//giving new name for specialization 
typedef X<int, double> X_int_double; //T1 = int, T2 = double X class is renamed 
//smart pointer
//pointer template that automatically deletes the memory
//unique pointer
//compiler must be updated, g++ -std=c++11 -o test test.cpp
#include <memory> //must be imported
int main() {
    unique_ptr<int> ptr(new int); //unique pointer declaration
    *ptr = 10;
    cout << *ptr << endl;
    prt.reset(); //deleting the memory //also can be deleted only through pointer 
    int released_prt = ptr.release(); //releasing the pointer //now the memory can be deleted by delete
    delete released_prt;
    unique_ptr<int> ptr2(new int);
    ptr2 = move(ptr); //moving the pointer //now ptr2 is pointing to the memory of ptr
    prt2 = prt; //this is impossible since unique pointer cannot be copied
    return 0;
}
//make_unique
//compiler must be updated, g++ -std=c++14 -o test test.cpp
int main() {
    unique_ptr<int> ptr = make_unique<int>(10); //unique pointer declaration
    //similar to constructor initializer 
    cout << *ptr << endl;
    return 0;
}
//shared pointer 
//counts the number of pointers pointing to the memory
int main() {
    shared_ptr<int> ptr1(new int); //shared pointer declaration
    cout << ptr1.use_count() << endl; //counts the number of pointers pointing to the memory
    auto ptr2(ptr1); //shared pointer can be copied //shared_ptr<int> ptr2 = prt1 is also possible
    cout << ptr1.use_count() << endl; 
    auto ptr3 = ptr1;
    cout << ptr1.use_count() << endl;
    return 0;
}
//weak pointer
//does not count the number of pointers pointing to the memory
int main() {
    shared_ptr<int> ptr1(new int); //shared pointer declaration
    *ptr1 = 10;
    weak_ptr<int> ptr2(ptr1); //weak pointer declaration and copying
    cout << ptr1.use_count() << endl; //still 1
}
//standard template library
//container
//standard c++ class template for storing data
//iterator
//data structure that can access the elements of the container
//also can do assignment operation and relational operation
//c++ pointer is an example of iterator
//input iterator
//has one directional access to the elements of the container //++
//also can get the value of the address
//create a basic container 
class node {
    public:
        int data;
        shared_ptr<node> next;
        node(int data) {
            this->data = data;
            this->next = nullptr;
        }
};
class input_iter {
    public:
        shared_ptr<node> next;
        int now;
        input_iter(node &node) {
            this->next = node.next;
            now = node.data;
        };
        void print() {
            cout << now << endl;
        }
        input_iter operator++() { //overloading ++ operator
            if (next != nullptr) {
                *this = input_iter(*next);
            }
            return *this;
        }
};

input_iter operator++(input_iter &it, int) { //overloading ++ operator
    input_iter tmp = it;
    ++it;
    return tmp;
}

int main() {
    int i;
    //creating a linked list
    shared_ptr<node> n = make_shared<node>(1);
    n->next = make_shared<node>(2);
    n->next->next = make_shared<node>(3);
    n->next->next->next = make_shared<node>(4);
    n->next->next->next->next = make_shared<node>(5);
    //iterating over the linked list    
    input_iter it(*n);
    it.print();
    while (it.next != nullptr) {
        it++;
        it.print();
    }
    return 0;
}
//find function using input iterator
template <class InputIterator, class T>
InputIterator Find(InputIterator first, InputIterator last, const T &value);

input_iter find(input_iter first, input_iter last, const int &n) {
    int idx = 0;
    while(&first != &last && first.next != nullptr) {
        if(first.now == n) {
            cout << idx << endl;
            break;
        }
        first++;
        idx++;
    }
    if (first.next == nullptr) {
        cout << "not found" << endl;
    }
    return first;
}

int main() {
    //creating a linked list
    shared_ptr<node> n = make_shared<node>(1);
    n->next = make_shared<node>(2);
    n->next->next = make_shared<node>(3);
    n->next->next->next = make_shared<node>(4);
    n->next->next->next->next = make_shared<node>(5);
    //iterating over the linked list    
    //define first iterator
    input_iter first(*n);
    input_iter last(*n);
    last.print();
    while(last.next != nullptr) {
        last++;
        last.print();
    }
    //finding a node in the linked list
    first.print();
    last.print();
    find(first, last, 3);
    return 0;
}

//output iterator
//rewrite the value of the container only once
//cannot read the value of the container
class output_iter {
    public:
        shared_ptr<node> next;
        int now = 0;
        int added = 0;
        node *node_;
        output_iter(node &node) {
            this->next = node.next;
            this->node_ = &node;
        };
        void tag() {
            now++;
        }
        output_iter operator++() { //overloading ++ operator
            if (next != nullptr) {
                *this = output_iter(*next);
            }
            return *this;
        }
        void change(int n) {
            if (added == 0) {
                added++;
                this->node_->data = n;
                now = n;
            }
            else {
                cout << "already changed" << endl;
            }
        }
};

output_iter operator++(output_iter &it, int) { //overloading ++ operator
    output_iter tmp = it;
    ++it;
    it.tag();
    return tmp;
}

int main() {
    //creating a linked list
    shared_ptr<node> n = make_shared<node>(1);
    n->next = make_shared<node>(2);
    n->next->next = make_shared<node>(3);
    n->next->next->next = make_shared<node>(4);
    n->next->next->next->next = make_shared<node>(5);
    //iterating over the linked list    
    //define first iterator
    output_iter first(*n);
    output_iter last(*n);
    while(last.next != nullptr) {
        last++;
    }
    //changing the value of the linked list
    first.change(10);
    cout << n->data << endl;
    first.change(20); //this is not possible since the value is already changed
    return 0;
}
//copy function using output iterator
template <class InputIterator, class OutputIterator>
OutputIterator Copy(InputIterator first, InputIterator last, OutputIterator result);

output_iter copy(input_iter first, input_iter last, output_iter &result) {
    int i = 0;
    while(&first != &last && first.next != nullptr) {
        i++;
        first++;
        if (i == result.now) {
            result.change(first.now);
            return result;
            break;
        }
    }
    return result;
}

int main() {
    //creating a linked list
    shared_ptr<node> n = make_shared<node>(1);
    n->next = make_shared<node>(2);
    n->next->next = make_shared<node>(3);
    n->next->next->next = make_shared<node>(4);
    n->next->next->next->next = make_shared<node>(5);
    //another list 
    shared_ptr<node> n2 = make_shared<node>(6);
    n2->next = make_shared<node>(7);
    n2->next->next = make_shared<node>(8);
    n2->next->next->next = make_shared<node>(9);
    n2->next->next->next->next = make_shared<node>(10);
    //iterating over the linked list    
    //define first iterator
    input_iter first(*n);
    //define last iterator
    input_iter last(*n->next->next->next->next);
    //define result iterator
    output_iter result(*n2);
    result.tag();
    for (int i = 0; i < 2; i++) {
        result++;
    }
    copy(first, last, result);
    cout << n2->next->next->data << endl;
}
//forward iterator
//multiple changes and accessing the elements of the container
//replace function using forward iterator
template<class ForwardIterator, class T>
void Replace(ForwardIterator first, ForwardIterator last, const T &target, const T &replacement);
//bidirectional iterator
//forward iterator + going back the node is possible
//reverse function using bidirectional iterator
template<class BidirectionalIterator, class OutputIterator>
OutputIterator Reverse(BidirectionalIterator first, BidirectionalIterator last, OutputIterator result);
//random access iterator
//bidirectional iterator + accessing the elements of the container with index
//sort function using random access iterator
template<class RandomAccessIterator>
void Sort(RandomAccessIterator first, RandomAccessIterator last);
//string manipulation iterators 
//input stream iterator
template<class BidirectionalIterator, class OutputIterator>
OutputIterator Reverse(BidirectionalIterator first, BidirectionalIterator last, OutputIterator result);
//output stream iterator 
template <class T, class charT = char, class traits = char_traits<charT> >
class ostream_iterator : public iterator<output_iterator_tag, void, void, void, void> { ... }

int main() {
    auto x = {1,2,3,4};
    copy(x.begin(), x.end(), ostream_iterator<int>(cout)); //results 1234
    cout << endl;
    copy(x.begin(), x.end(), ostream_iterator<int>(cout, " ")); //results 1 2 3 4
    cout << endl;
}
//insert iterator
int main() {
    x[2].insert(10)
    //back insert iterator 
    x.push_back(10) 
    //front insert iterator
    x.push_front(20)
    //reverse iterator //prints 4 3 2 1
    copy(x.rbegin(), x.rend(), ostream_iterator<int>(cout, " "));
}
//const iterator
//cannot change the value of the container
//sequence container
//linearly stores the data
//iterator is at least forward iterator + random access 
//stl containers
//vector
//fast access to the elements
#include <vector>
int main() {
    vector<int> v;
    v = {1,2,3,4,5};
    cout << v.size() <<endl; //returns the size of the vector
    v.push_back(6); //adds 6 to the end of the vector
    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
    v.begin(); //returns the iterator of the first element
    v.end(); //returns the iterator of the last element
    vector<int>::iterator it = v.begin(); //iterator declaration
    cout << *it++ << endl; //iterator can be used like pointer
}
//deque //double ended queue
//includes operations above
#include <deque>
int main() {
    deque<int> d;
    d = {1,2,3,4,5};
    d.push_front(0); //adds 0 to the front of the deque
    cout << d.front() << endl; //returns the first element of the deque
    cout << d.back() endl; //returns the last element of the deque
    d.pop_front(); //removes the first element of the deque
    d.pop_back(); //removes the last element of the deque
}
//list //doubly linked list
//has no random access
//fast insertion and deletion
#include <list>
int main() {
    list<int> l, l2;
    l = {1,2,3,4,5};
    l2 = {10,20,30,40,50};
    l.swap(l2); //l = {10,20,30,40,50}, l2 = {1,2,3,4,5}
    l.reverse(); //l = {50,40,30,20,10}
    l.sort(); //l = {10,20,30,40,50}
    l = {1,2,2,3,4,4,5}; 
    l.unique(); //l = {1,2,3,4,5}
    l.merge(l2); //l = {1,2,3,4,5,10,20,30,40,50}, l2 = {}
    l.splice(l.begin(), l2); //l = {10,20,30,40,50,1,2,3,4,5}, l2 = {}
    l.remove(10); //l = {20,30,40,50,1,2,3,4,5}
    return 0;
}
//forward list //singly linked list
//does not have reverse iterator
//less memory than list
#include <forward_list>
int main() {
    forward_list<int> fl, fl2;
    forward_list<int>::iterator it = fl.before_begin(); //iterator declaration
    fl = {1,2,3,4,5};
    fl2 = {10,20,30,40,50};
    fl.splice_after(it, fl2); //fl = {1,2,3,4,5,10,20,30,40,50}, fl2 = {} //fl.end() is not possible
}
//set
//only inserts and deletes the element
//faster search than vector
#include <set>
int main() {
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.erase(1);
    s.find(1); //returns s.end() if not found
    if (s.find(1) != s.end()) {
        cout << "found" << endl;
    }
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1); //this is possible in multiset
}
//map
//key value pair
#include <map>
#include <string>
int main() {
    map<string, int> m;
    m["a"] = 1; //inserting
    m.insert(pair<string, int>("b", 2)); //inserting
    m.erase("a"); //deleting
    map<string, int>::iterator it;
    for(it = m.begin(); it != m.end(); it++)
    {
    cout << it->first << " : " << it->second << endl;
    }
    multimap<string, int> mm; //multimap
    mm.insert(pair<string, int>("a", 1));
    mm.insert(pair<string, int>("a", 2)); //this is possible in multimap
}
//forward iterator versions
//unordered_set
//unordered_map
//unordered_multiset
//unordered_multimap
//stack 
#include <stack>
int main() {
    stack<int> s;
    s.empty(); //true if empty, false otherwise
    s.size(); //returns size
    s.top(); //returns top element
    s.push(5); //pushes 5 to top
    s.pop(); //removes top element
}
//queue
#include <queue>
int main() {
    queue<int> q;
    q.empty(); //returns true if the queue is empty, false otherwise
    q.size(); //returns the size of the queue
    q.push(1); //insert 1
    q.front(); //gets the first element
    q.back(); //gets the last element
    q.pop(); //deletes the first element
    //priority queue
    priority_queue<int> pq; //look data structure and algorithm in goodnote for more information
}
//function object
//can be used as an argument of a function
#include <functional>
int main() {
    plus<typename T>;
    minus<typename T>;
    multiplies<typename T>;
    divides<typename T>;
    modulus<typename T>;
    negate<typename T>;
    equal_to<typename T>;
    not_equal_to<typename T>;
    greater<typename T>;
    less<typename T>;
    greater_equal<typename T>;
    less_equal<typename T>;
    logical_and<typename T>;
    logical_or<typename T>;
    logical_not<typename T>;
    //argument
    list<int> l = {1,2,3,4,5};
    l.sort(greater<int>()); //sorts in descending order
    //lambda expression
    int x = 3;
    [](int &x) {x++;}(x);
    cout << x << endl;
    auto f = [](int x, int y) {return x + y;};
    cout << f(3, 4) << endl;
}
//algorithm
#include <algorithm>
int main() {
    vector<int> v = {1,2,3,4,5};
    //finds
    vector<int>::iterator it = find(v.begin(), v.end(), 3); //finds the element
    //for_each
    for_each(v.begin(), v.end(), [](int &n) {cout << n;}); //returns the functional 
    cout << endl;
    //copy 
    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    //swap
    swap(v[0], v[1]);
    //transform
    vector<int> v2;
    v2 = {5,6,7,8,9};
    transform(v.begin(), v.end(), v2.begin(), [](int n) {return n * 2;}); //copying v[i] * 2 to v2[i]
    //sort
    //stable_sort keeps the order of the same elements
    class pair {
        public:
        int first;
        string second;
        pair(int first, string second) {
            this->first = first;
            this->second = second;
        }
    };
    vector<pair> v3;
    v3 = {pair(3, " "), pair(3, " ") , pair(4, " "), pair(2, " ")  
        , pair(6, " "), pair(3, " ") , pair(5, " "), pair(4, " ")  
        , pair(2, " "), pair(2, " ") , pair(6, " "), pair(3, " ")  
        , pair(5, " "), pair(4, " ") , pair(2, " "), pair(6, " ")  
        , pair(3, " "), pair(5, " ") , pair(1, "A"), pair(1, "B")  
        , pair(1, "C"), pair(1, "D") , pair(1, "E"), pair(1, "F")  
        , pair(1, "G"), pair(1, "H") , pair(1, "I"), pair(1, "J")  
        , pair(4, " "), pair(2, " ") , pair(6, " "), pair(3, " ")  
        , pair(5, " "), pair(4, " ") , pair(2, " "), pair(6, " ")  
        , pair(3, " "), pair(5, " ") , pair(4, " "), pair(2, " ")  
        , pair(2, " "), pair(6, " ") , pair(3, " "), pair(5, " ")  
        , pair(4, " "), pair(2, " ")  };
    sort(v3.begin(), v3.end(), [](pair pair1, pair pair2){return pair1.first > pair2.first;}); //sorts in discending order
    for (auto i = v3.begin(); i != v3.end(); i++) {
        cout << i->first << i->second;
    }
    cout << endl;
    v3 = {pair(3, " "), pair(3, " ") , pair(4, " "), pair(2, " ")  
        , pair(6, " "), pair(3, " ") , pair(5, " "), pair(4, " ")  
        , pair(2, " "), pair(2, " ") , pair(6, " "), pair(3, " ")  
        , pair(5, " "), pair(4, " ") , pair(2, " "), pair(6, " ")  
        , pair(3, " "), pair(5, " ") , pair(1, "A"), pair(1, "B")  
        , pair(1, "C"), pair(1, "D") , pair(1, "E"), pair(1, "F")  
        , pair(1, "G"), pair(1, "H") , pair(1, "I"), pair(1, "J")  
        , pair(4, " "), pair(2, " ") , pair(6, " "), pair(3, " ")  
        , pair(5, " "), pair(4, " ") , pair(2, " "), pair(6, " ")  
        , pair(3, " "), pair(5, " ") , pair(4, " "), pair(2, " ")  
        , pair(2, " "), pair(6, " ") , pair(3, " "), pair(5, " ")  
        , pair(4, " "), pair(2, " ")  };
    stable_sort(v3.begin(), v3.end(), [](pair pair1, pair pair2){return pair1.first > pair2.first;}); //sorts in descending order
    for (auto i = v3.begin(); i != v3.end(); i++) {
        cout << i->first << i->second;
    }
    cout << endl;
    //binary search
    vector<int> v4 = {1,2,3,4,5};
    binary_search(v4.begin(), v4.end(), 3); //returns true if found, false otherwise
}
//numeric algorithm
#include <numeric>
int main() {
    vector<int> v = {1,2,3,4,5};
    //accumulate
    cout << accumulate(v.begin(), v.end(), 0) << endl; //returns the sum of the elements
}
//stream 
//gets the data from the input devices and sends the data to the output devices
//uses buffers
//writing and reading file 
#include <fstream>
int main() {
    ifstream fin("text.txt"); //ifstream declaration
    char buf[1000];
    fin.getline(buf, 100); //reading from the file
    cout << buf << endl;
    string str;
    getline(fin, str); //reading from the next line
    cout << str << endl;
    fin.close(); //closing the file
    ofstream fout("text.txt"); //ofstream declaration
    fout << "hello world" << endl; //writing to the file
    fout.close(); //closing the file
    //file mode
    ifstream fin("text.txt", ios::in); //ios::in is just for reading
    ofstream fout("text.txt", ios::out); //ios::out is just for writing
    ifstream fin("text.txt", ios::ate); //ios::ate is for reading and writing just as the amount of the file 
    //this changes the position of the pointer to the end of the file
    ifstream fin("text.txt", ios::app); //ios::app is for reading and writing at the end of the file
    ifstream fin("text.txt", ios::trunc); //ios::trunc is for deleting the file and creating a new file
    ifstream fin("text.txt", ios::binary); //ios::binary is for reading and writing binary file
}
//exception handling
int Increase(int n) {
    if (n < 0) {
        throw n; //throwing an exception
    }
    else if (n == 0) {
        throw "zero"; //throwing an exception
    }
    return n + 1;
}

int main() {
    int num;
    cout << "enter a number: ";
    while(cin >> num) {
        try { //try block
            cout << Increase(num) << endl;
        }
        catch (int exception) { //catch block
            cout << "exception: " << exception << endl;
        }
        catch (const char *exception) { //catch overloading
            cout << "exception: " << exception << endl;
        };
    };
    return 0;
}
//order of exception handling
//1. once the code reaches the try block, the code is executed the code inside the try block
//2. if exception is not thrown, the code continues to execute the code after the try block
//3. if exception is thrown, the code searches for the catch block that matches the exception

//stack unwinding
//3-1. if the catch block is not found, the code searches for the catch block in the upper level try block
//3-2. if the catch block is not found, the code executes the terminate function
void MyTerminate() {
    cout << "terminate" << endl; //original terminate function does not have this line
    exit(1);
}
int main() {
    set_terminate(MyTerminate); //setting the terminate function
}
//4. if the catch block is found, the code executes the block and gets the return value of the catch block 
//and continues to execute the code after the try block
//exception class 
#include <exception> //what()
#include <stdexcept> //runtime_error() //this imports exception as well

int main() {
    try {
        // Simulate an exception by dividing by zero
        int numerator = 10;
        int denominator = 0;
        
        if (denominator == 0) {
            throw runtime_error("division by zero is not allowed.");
        }
        
        int result = numerator / denominator;
        cout << "result: " << result << endl;
    } catch (const exception& e) {
        // Catch and handle the exception
        cerr << "exception caught: " << e.what() << std::endl; //cout error
    }

    return 0;
}