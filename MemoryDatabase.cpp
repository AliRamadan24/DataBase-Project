#include <iostream>
#include <iomanip>
#include <vector>

class CPU
{
private:
    std::vector<double> memory;
    int accumulator;
    int memory_size;

public:
    CPU(int memSize)
    {
        memory_size = memSize;
        memory.resize(memory_size);
        accumulator = 0;
    }

    void load(int address)
    {
        if (address < memory_size)
        {
            accumulator = memory[address];
        }
        else
        {
            std::cout << "Invalid address\n";
        }
    }

    void store(int address)
    {
        if (address < memory_size)
        {
            memory[address] = accumulator;
        }
        else
        {
            std::cout << "Invalid address\n";
        }
    }

    void add(int num1, int num2)
    {
        accumulator = num1 + num2;
    }

    void subtract(int num1, int num2)
    {
        accumulator = num1 - num2;
    }

    void multiply(int num1, int num2)
    {
        accumulator = num1 * num2;
    }

    void divide(int num1, int num2)
    {
        if (num2 == 0)
            std::cout << "\nYou cannot divide by zero!";
        else
            accumulator = num1 / num2;
    }

    void compare(int num1, int num2)
    {
        if (num1 > num2)
        {
            accumulator = 1;
        }
        else if (num2 > num1)
        {
            accumulator = -1;
        }
        else
        {
            accumulator = 0;
        }
    }

    void logicalAnd(int num1, int num2)
    {
        accumulator = num1 & num2;
    }

    void logicalOR(int num1, int num2)
    {
        accumulator = num1 | num2;
    }

    void logicalNot(int num)
    {
        accumulator = ~num;
    }
};

//template <class X, class Y>
//class Integer
//{
//private:
//    int userValue;
//    int memAddress;
//
//public:
//    Integer(int userValue, int memAddress)
//    {
//        this->userValue = userValue;
//        this->memAddress = memAddress;
//    }
//
//    Integer()
//    {
//        userValue = 0;
//    }
//
//    int getValue(){ return userValue; }
//
//    Integer operator+(Integer<X, Y> user)
//    {
//        return Integer(userValue + user.getValue(), memAddress);
//    }
//
//    Integer operator-(Integer<X, Y> user)
//    {
//        return Integer(userValue - user.getValue(), memAddress);
//    }
//
//    Integer operator*(Integer<X, Y> user)
//    {
//        return Integer(userValue * user.getValue(), memAddress);
//    }
//
//    Integer operator/(Integer<X, Y> user)
//    {
//        return Integer(userValue / user.getValue(), memAddress);
//    }
//
//    bool operator>(Integer<X, Y> user)
//    {
//        return userValue > user.getValue();
//    }
//
//    bool operator>(Y user)
//    {
//        return userValue > user;
//    }
//
//    bool operator<(Integer<X, Y> user)
//    {
//        return userValue < user.getValue();
//    }
//
//    bool operator<(Y user)
//    {
//        return userValue < user;
//    }
//
//    bool operator>=(Integer<X, Y> user)
//    {
//        return userValue >= user.getValue();
//    }
//
//    bool operator>=(Y user)
//    {
//        return userValue >= user;
//    }
//
//    bool operator<=(Integer<X, Y> user)
//    {
//        return userValue <= user.getValue();
//    }
//
//    bool operator<=(Y user)
//    {
//        return userValue <= user;
//    }
//
//    bool operator+=(Integer<X, Y> user)
//    {
//        userValue += user.getValue();
//        return true;
//    }
//
//    bool operator+=(Y user)
//    {
//        userValue += user;
//        return true;
//    }
//
//    bool operator==(Integer<X, Y> user)
//    {
//        return userValue == user.getValue();
//    }
//
//    bool operator==(Y user)
//    {
//        return userValue == user;
//    }
//};
//
//class Double : public Integer<double, double>
//{
//public:
//    Double(double userValue, int memAddress)
//        : Integer<double, double>(userValue, memAddress) {}
//
//    Double() : Integer<double, double>() {}
//
//    double operator+(Double user)
//    {
//        return getValue() + user.getValue();
//    }
//
//    double operator-(Double user)
//    {
//        return getValue() - user.getValue();
//    }
//
//    double operator*(Double user)
//    {
//        return getValue() * user.getValue();
//    }
//
//    double operator/(Double user)
//    {
//        return getValue() / user.getValue();
//    }
//};
//
//class Float : public Integer<float, float>
//{
//public:
//    Float(float userValue, int memAddress)
//        : Integer<float, float>(userValue, memAddress) {}
//
//    Float() : Integer<float, float>() {}
//
//    float operator+(Float& user)
//    {
//        return getValue() + user.getValue();
//    }
//
//    float operator-(Float user)
//    {
//        return getValue() - user.getValue();
//    }
//
//    float operator*(Float user)
//    {
//        return getValue() * user.getValue();
//    }
//
//    float operator/(Float user)
//    {
//        return getValue() / user.getValue();
//    }
//};





















namespace aliLanguage
{
    int input(std::string number)
    {
        int x1;
        std::cout<<number;
        std::cin>>x1;
        return x1;
    }

    void print(int x1)
    {
        std::cout<<x1;
    }



template <class X, class Y>
class Integer
{
private:
    int userValue;
    int memAddress;

public:
    Integer(int userValue, int memAddress)
    {
        this->userValue = userValue;
        this->memAddress = memAddress;
    }

    Integer()
    {
        userValue = 0;
    }

    int getValue(){ return userValue; }

    Integer operator+(Integer<X, Y> user)
    {
        return Integer(userValue + user.getValue(), memAddress);
    }

    Integer operator-(Integer<X, Y> user)
    {
        return Integer(userValue - user.getValue(), memAddress);
    }

    Integer operator*(Integer<X, Y> user)
    {
        return Integer(userValue * user.getValue(), memAddress);
    }

    Integer operator/(Integer<X, Y> user)
    {
        return Integer(userValue / user.getValue(), memAddress);
    }

    bool operator>(Integer<X, Y> user)
    {
        return userValue > user.getValue();
    }

    bool operator>(Y user)
    {
        return userValue > user;
    }

    bool operator<(Integer<X, Y> user)
    {
        return userValue < user.getValue();
    }

    bool operator<(Y user)
    {
        return userValue < user;
    }

    bool operator>=(Integer<X, Y> user)
    {
        return userValue >= user.getValue();
    }

    bool operator>=(Y user)
    {
        return userValue >= user;
    }

    bool operator<=(Integer<X, Y> user)
    {
        return userValue <= user.getValue();
    }

    bool operator<=(Y user)
    {
        return userValue <= user;
    }

    bool operator+=(Integer<X, Y> user)
    {
        userValue += user.getValue();
        return true;
    }

    bool operator+=(Y user)
    {
        userValue += user;
        return true;
    }

    bool operator==(Integer<X, Y> user)
    {
        return userValue == user.getValue();
    }

    bool operator==(Y user)
    {
        return userValue == user;
    }
};

class Double : public Integer<double, double>
{
public:
    Double(double userValue, int memAddress)
        : Integer<double, double>(userValue, memAddress) {}

    Double();

    double operator+(Double user)
    {
        return getValue() + user.getValue();
    }

    double operator-(Double user)
    {
        return getValue() - user.getValue();
    }

    double operator*(Double user)
    {
        return getValue() * user.getValue();
    }

    double operator/(Double user)
    {
        return getValue() / user.getValue();
    }
};

class Float : public Integer<float, float>
{
public:
    Float(float userValue, int memAddress)
        : Integer<float, float>(userValue, memAddress) {}

    Float();

    float operator+(Float& user)
    {
        return getValue() + user.getValue();
    }

    float operator-(Float user)
    {
        return getValue() - user.getValue();
    }

    float operator*(Float user)
    {
        return getValue() * user.getValue();
    }

    float operator/(Float user)
    {
        return getValue() / user.getValue();
    }
};

    void print( std::string message, int number)
    {
        std::cout << message << number << std::endl;
    }

    Double add(Double num1, Double num2)
        {
            return Double(num1.getValue() + num2.getValue(),0);
        }

    Double subtract(Double num1, Double num2)
        {
            return Double(num1.getValue() - num2.getValue(),0);
        }

    Double multiply(Double num1, Double num2)
        {
            return Double(num1.getValue() * num2.getValue(),0);
        }

    Double divide(Double num1, Double num2)
        {
            if (num2.getValue() != 0)
                return Double(num1.getValue() / num2.getValue(),0);
            else
            {
                std::cout << "Can divide by zero";
                return Double(0,0);
            }
        }

}

using namespace aliLanguage;

int main()
{
    int x1=input("enter a first number:");
    print(x1);
    std::cout<<"\n";


    aliLanguage::Double num1(0,0);
    aliLanguage::Double num2(0,0);



    num1 = aliLanguage::Double(aliLanguage::input("\nEnter the first number: "),0);
    num2 = aliLanguage::Double(aliLanguage::input("\nEnter the second number: "),0);

    aliLanguage::Double sum = aliLanguage::add(num1, num2);
    aliLanguage::print("Sum: ", sum.getValue());

    aliLanguage::Double difference = aliLanguage::subtract(num1, num2);
    aliLanguage::print("Difference: ", difference.getValue());

    aliLanguage::Double product = aliLanguage::multiply(num1, num2);
    aliLanguage::print("Product: ", product.getValue());

    aliLanguage::Double quotient = aliLanguage::divide(num1, num2);
    aliLanguage::print("Quotient: ", quotient.getValue());
    return 0;
}
