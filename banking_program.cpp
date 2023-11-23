#include <iostream>

double balance = 0;
double showBalance(double balance);
double withdraw(double balance);
double deposit(double balance);

int main(){
    int choice;
    std::cout << "Hello! Welcome to our banking app\nPlease, choose an option: \n";
    std::cout << "**********************************\n";
    do{
    std::cout << "1.Show my balance\n2.To deposit\n3.To withdraw\n4.Exit\n\n";
    std::cout << "**********************************\n";
    std::cin >> choice;

    switch (choice){
    case 1: showBalance(balance);
        continue;
    case 2: deposit(balance);
        continue;
    case 3: withdraw(balance);
        continue;
    case 4: std::cout << "Thank you! Good bye!";
        break;
    default: std::cout << "Please, choose the right option!";
        continue;
    }
    }while(choice != 4);
    //std::cout << showBalance(::balance);
    //std::cout << deposit(::balance);
    return 0;
}
double showBalance(double balance){
    std::cout << "Your balance is: $" << balance << '\n';
    return 0;
}

double deposit(double balance){
    double sum = 0;
    std::cout << "Please, enter the sum that you want to deposit: ";
    std::cin >> sum;
    ::balance += sum;
    std::cout << "Your balance is: $" << ::balance << '\n';
    return 0;
}
double withdraw(double balance){
    double sum = 0;
    std::cout << "Please, enter the sum that you want to withdraw: ";
    std::cin >> sum;
    ::balance -= sum;
    std::cout << "Your balance is: $" << ::balance << '\n';
    return 0;
}