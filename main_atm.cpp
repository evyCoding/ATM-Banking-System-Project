// TODO HEADER FILES:
#include "iostream"
#include "vector"
#include "cmath"
#include "typeinfo"
#include "string"
//  TODO GLOBALE VARIABLES:
std::vector<std::string> transactions;
long int ur_balance = 1225000;
bool global_boolen = true;
//  TODO CLASSES:
class balance;

class currency
{
private:
    double the_amount_whish_to_transfer;

public:
    void mad_to_usd(double amount);
    void mad_to_jpy(double amount);
    void usd_to_mad(double amount);
    void usd_to_jpy(double amount);
    void jpy_to_mad(double amount);
    void jpy_to_usd(double amount);
};

class bill
{
private:
    int memeber_ship_amount = 30;
    uint64_t phone_number;

public:
    bill();
    void phone_bill();
};

class forwardTo
{
private:
    uint64_t rub;
    std::string name;
    int totale_amount;

public:
    void get_infor();
    void all_in_one(int amount, uint64_t num, std::string str);
    bool check_if_upper(std::string str);
    bool check_16_digits(uint64_t num);
    bool check_total_amount(int amount);
    void chech_10_digite(uint64_t phnum, int memer);
    friend void make_discount_one(int disc);
};

class checkinfo
{
private:
    std::string user_name;
    int password;

public:
    void cheking();
};

class balance
{
public:
    balance();
    void add();
    void withdraw();
    friend void make_discount_one(int disc);
};

// TODO FUNCTIONS(no refferance):
void basement();

bool no_negative_amount(int balance, int disc)
{
    if (balance < disc)
        return false;
    else
        return true;
}

void choose_curr()
{
    currency o7;
    int amount;
    int choice;
    std::cout << "(1): MAD TO USD" << std::endl;
    std::cout << "(2): MAD TO YEN" << std::endl;
    std::cout << "(3): USD TO MAD" << std::endl;
    std::cout << "(4): USD TO YEN" << std::endl;
    std::cout << "(5): YEN TO MAD" << std::endl;
    std::cout << "(6): YEN TO USD" << std::endl;
    std::cout << "(7): go back" << std::endl;
    std::cin >> choice;
    switch (choice)
    {
    case 1:
        {
            std::cout<< "enter the amount: ";
            std::cin >> amount;
            o7.mad_to_usd(amount);
            choose_curr();
            break;
        }
    case 2:
        {
            std::cout<< "enter the amount: ";
            std::cin >> amount;
            o7.mad_to_jpy(amount);
            choose_curr();
            break;
        }
    case 3:
        {
            std::cout<< "enter the amount: ";
            std::cin >> amount;
            o7.usd_to_mad(amount);
            choose_curr();
            break;
        }
    case 4:
        {
            std::cout<< "enter the amount: ";
            std::cin >> amount;
            o7.usd_to_jpy(amount);
            choose_curr();
            break;
        }
    case 5:
        {
            std::cout<< "enter the amount: ";
            std::cin >> amount;
            o7.jpy_to_mad(amount);
            choose_curr();
            break;
        }
    case 6:
        {
            std::cout<< "enter the amount: ";
            std::cin >> amount;
            o7.jpy_to_usd(amount);
            choose_curr();
            break;
        }
    case 7:
        {
            basement();
        }
    }
}

void dipaly_list(std::vector<std::string> vec)
{
    for (std::string x : vec)
        std::cout << x << std::endl;
}

void add_a_tarnsaction(int amount)
{
    std::string str = "a disposit with an amount of : " + std::to_string(amount) + '$';
    transactions.push_back(str);
}

void withdraw_a_tarnsaction(int amount)
{
    std::string str = "a withdraw with an amount of : " + std::to_string(amount) + '$';
    transactions.push_back(str);
}

void phone_bill_a_tarnsaction(int amount)
{
    std::string str = "a payement of : " + std::to_string(amount) + '$' + " for phone monthly subscription";
    transactions.push_back(str);
}

void make_discount_one(int disc)
{
    ur_balance -= disc;
}

void send_a_transaction(int amount, std::string person)
{
    std::string str = "a transfer with an amount of : " + std::to_string(amount) + '$' + " to " + person;
    transactions.push_back(str);
}

void basement()
{
    std::cout << "hello yahya,_________Your balance: " << ur_balance << '$' << std::endl;
    std::cout << "(1): disposit & withdraw \n"<< "(2): list of transaction. \n";
    std::cout << "(3): send money \n"<< "(4): pay bills \n"<< "(5): convert currency \n"<< "(6): Exite. \n";
    int swi;
    std::cin >> swi;
    switch (swi)
    {
    case 1:
    {
        balance o1;
        break;
    }
    case 2:
    {
        dipaly_list(transactions);
        break;
    }
    case 3:
    {
        forwardTo ob3;
        ob3.get_infor();
        break;
    }
    case 4:
    {
        bill o6;
        break;
    }
    case 5:
    {
        choose_curr();
        break;
    }
    case 6:
    {
        global_boolen = false;
    }
    }
}

void security()
{
    std::cout << "HELLO, please enter the your information for the checkout :)" << std::endl;
    checkinfo o;
    o.cheking();
}

// TODO FUNCTIONS(related to classes):
void currency :: mad_to_usd(double amount)
{
    the_amount_whish_to_transfer = amount;
    std::cout << the_amount_whish_to_transfer << " MAD is " << (the_amount_whish_to_transfer * 0.1) << "$" << std::endl;
}

void currency :: mad_to_jpy(double amount)
{
    the_amount_whish_to_transfer = amount;
    std::cout << the_amount_whish_to_transfer << " MAD is " << (the_amount_whish_to_transfer * 14.34) << "JPY" << std::endl;
}

void currency :: usd_to_mad(double amount)
{
    the_amount_whish_to_transfer = amount;
    std::cout << the_amount_whish_to_transfer << " $ is " << (the_amount_whish_to_transfer * 10) << "MAD" << std::endl;
}

void currency :: usd_to_jpy(double amount)
{
    the_amount_whish_to_transfer = amount;
    std::cout << the_amount_whish_to_transfer << " $ is " << (the_amount_whish_to_transfer * 143.51) << "$" << std::endl;
}

void currency :: jpy_to_mad(double amount)
{
    the_amount_whish_to_transfer = amount;
    std::cout << the_amount_whish_to_transfer << " JPY is " << (the_amount_whish_to_transfer / 14.34) << "MAD" << std::endl;
}

void currency :: jpy_to_usd(double amount)
{
    the_amount_whish_to_transfer = amount;
    std::cout << the_amount_whish_to_transfer << " JPY is " << (the_amount_whish_to_transfer / 143.51) << "$" << std::endl;
}

void forwardTo ::chech_10_digite(uint64_t phnum, int memer)
{
    std::string str = std::to_string(phnum);
    if ((phnum /= pow(10, 9)) == 0)
    {
        bool verify = (str.length() == 9) ? true : false;
        int counte(0);
        while (!verify && counte < 3)
        {
            uint64_t to_replace;
            std::cout << "the number must contain 10 digits, please reenter the number:";
            std::cin >> to_replace;
            phnum = to_replace;
            str = std::to_string(phnum);
            verify = (str.length() == 9) ? true : false;
            counte++;
        }
        if (verify)
        {
            char pay_or_not;
            std::cout << "you have a monthly subscription with 30$/month, would you like to pay(y/n):";
            std::cin >> pay_or_not;
            switch (static_cast<int>(pay_or_not))
            {
            case 121:
            {
                if (no_negative_amount(ur_balance, memer))
                {
                    make_discount_one(memer);
                    phone_bill_a_tarnsaction(memer);
                }
                else
                {
                    char dept;
                    std::cout << "insuffisant amount of money :( \n would you like to go with a dept with an addition of 25% ?(y/n)" << std::endl;
                    std::cin >> dept;
                    if (dept == 'y')
                    {
                        ur_balance -= (memer + (memer - ur_balance) * 0.25);
                    }
                    else
                        bill o5;
                }
            }
            case 110:
            {
                bill o5;
            }
            }
        }
    }
    else
    {
        bool verify = (str.length() == 10) ? true : false;
        int counte(0);
        while (!verify && counte < 3)
        {
            uint64_t to_replace;
            std::cout << "the number must contain 10 digits, please reenter the number:";
            std::cin >> to_replace;
            phnum = to_replace;
            str = std::to_string(phnum);
            verify = (str.length() == 10) ? true : false;
            counte++;
        }
        if (verify)
        {
            char pay_or_not;
            std::cout << "you have a monthly subscription with 30$/month, would you like to pay(y/n):";
            std::cin >> pay_or_not;
            switch (static_cast<int>(pay_or_not))
            {
            case 121:
            {
                if (no_negative_amount(ur_balance, memer))
                {
                    make_discount_one(memer);
                    phone_bill_a_tarnsaction(memer);
                }
                else
                {
                    char dept;
                    std::cout << "insuffisant amount of money :( \n would you like to go with a dept with an addition of 25% ?(y/n)" << std::endl;
                    std::cin >> dept;
                    if (dept == 'y')
                    {
                        ur_balance -= (memer + (memer - ur_balance) * 0.25);
                    }
                    else
                        bill o5;
                }
            }
            case 110:
            {
                bill o5;
            }
            }
        }
    }
}

void bill :: phone_bill()
{
    std::cout << "enter your phone number: ";
    std::cin >> phone_number;
    forwardTo ob4;
    ob4.chech_10_digite(phone_number, memeber_ship_amount);
}

bill :: bill()
{
    int to_choose_from;
    std::cout << "your in hold memberships: \n"<< "(1): phone bill \n";
    std::cout << "(2): exite \n";
    std::cin >> to_choose_from;
    switch (to_choose_from)
    {
    case 1:
    {
        phone_bill();
    }
    case 2:
    {
        basement();
    }
    }
}

balance :: balance()
{
    std::cout << "your balance is:   " << ur_balance << "$ \n";
    int check_for_add;
    std::cout << "(1): would you like to deposit !" << std::endl;
    std::cout << "(2): withdraw money :]" << std::endl;
    std::cout << "(3): go back :)" << std::endl;
    std::cin >> check_for_add;
    switch (check_for_add)
    {
    case 1:
        add();
    case 2:
        withdraw();
    case 3:
        basement();
    }
}

bool forwardTo :: check_if_upper(std::string str)
{
    for (auto x : str)
        if (!isupper(x))
            return false;
    return true;
}

bool forwardTo :: check_16_digits(uint64_t num)
{
    std::string str1 = std::to_string(num);
    if (str1.length() == 16)
        return true;
    else
        return false;
}

bool forwardTo :: check_total_amount(int amount)
{
    if ((amount <= 1000) && (amount >= 10))
        return true;
    else
        return false;
}

void forwardTo :: all_in_one(int amount, uint64_t num, std::string str)
{

    bool the_right_one = (check_16_digits(num) && check_if_upper(str) && check_total_amount(amount));
    int retry_count = 0; // Counter for the number of retries

    while (!the_right_one && retry_count < 3)
    {
        if (!check_16_digits(num))
        {
            uint64_t second_rub;
            std::cout << "The RUB should contain 16 digits. Enter the RUB number again: ";
            std::cin >> second_rub;
            num = second_rub;
        }

        if (!check_total_amount(amount))
        {
            int second_amount;
            std::cout << "The transferred amount should be between 10$ and 1000$. Enter the amount again: ";
            std::cin >> second_amount;
            amount = second_amount;
        }

        if (!check_if_upper(str))
        {
            std::string second_str;
            std::cout << "The name should be all uppercase. Enter the name again: ";
            std::cin >> second_str;
            str = second_str;
        }

        the_right_one = (check_16_digits(num) && check_if_upper(str) && check_total_amount(amount));
        retry_count++;
    }

    if (the_right_one)
    {
        if (no_negative_amount(ur_balance, amount))
        {
            std::cout << "Well done! A transfer to " << str << " with an amount of " << amount << "$" << std::endl;
            make_discount_one(amount);
            send_a_transaction(amount, str);
        }
        else
        {
            char dept;
            std::cout << "insuffisant amount of money :( \n would you like to go with a dept with an addition of 25% ?(y/n)" << std::endl;
            std::cin >> dept;
            if (dept == 'y')
            {
                ur_balance -= (amount + (amount - ur_balance) * 0.25);
                std::cout << "Well done! A transfer to " << str << " with an amount of " << amount << "$" << std::endl;
                basement();
            }
            else
                basement();
        }
    }
    else
    {
        std::cout << "Max retries exceeded. Failed to perform the transfer.";
    }
}

void forwardTo :: get_infor()
{
    std::cout << "Enter the RUB number: ";
    std::cin >> rub;
    std::cout << "Enter the name: ";
    std::cin >> name;
    std::cout << "Enter the amount: ";
    std::cin >> totale_amount;
    all_in_one(totale_amount, rub, name);
}

void checkinfo :: cheking()
{
    std::cout << "username: ";
    std::cin >> user_name;
    std::cout << "password: ";
    std::cin >> password;
    bool ver = (user_name == "yahya") && (password == 2508);
    int counter(0);
    while (!ver && counter < 3)
    {
        std::cout << "_______try_again_______" << std::endl;
        if (user_name != "yahya")
        {
            std::string second_user;
            std::cout << "wrong username, try another username: ";
            std::cin >> second_user;
            user_name = second_user;
        }
        if (password != 2508)
        {
            int second_pass;
            std::cout << "wrong password, try another password: ";
            std::cin >> second_pass;
            password = second_pass;
        }
        ver = (user_name == "yahya") && (password == 2508);
        counter++;
    }
    if (ver)
    {
        std::cout << "*********connection done successfuly*********" << std::endl;
        std::cout << std::endl;
        basement();
    }
    else
        std::cout << "0 attempts left, You can try later :(";
}

void balance :: add()
{
    int value_added;
    std::cout << "enter the amount of money you wanna add: ";
    std::cin >> value_added;
    ur_balance += value_added;
    add_a_tarnsaction(value_added);
    balance o2;
}

void balance :: withdraw()
{
    int value_withdrawed;
    std::cout << "enter the amount of money you wanna withdraw: ";
    std::cin >> value_withdrawed;
    if (no_negative_amount(ur_balance, value_withdrawed))
    {
        ur_balance -= value_withdrawed;
        withdraw_a_tarnsaction(value_withdrawed);
    }
    else
    {
        char dept;
        std::cout << "insuffisant amount of money :( \n would you like to go with a dept with an addition of 25% ?(y/n)" << std::endl;
        std::cin >> dept;
        if (dept == 'y')
        {
            ur_balance -= (value_withdrawed + (value_withdrawed - ur_balance) * 0.25);
        }
        else
            balance o2;
    }
}

// TODO  MAIN CODE:
int main()
{
    security();
    basement();
    if (!global_boolen)
        return 0;
}
