#include "accountdb.h"

static int number_of_active_accounts = 0;

static void display_single_account(const account_t*)
{
  //TODO: fill your code
}
void add_account(char* pcustomer_id, char* pcustomer_name, double pbalance)
{
  //TODO: fill your code
}
void remove_account(char* pcustomer_id)
{
   //TODO: fill your code
}
void display_all_accounts(const account_t*)
{
    //TODO: fill your code
}

account_t* find_account_by_id(const account_t*, pcustomer_id)
{
    //TODO: fill your code
}
account_t* find_account_by_name(const account_t*, pcustomer_name)
{
    //TODO: fill your code
}
double find_average_balance(const account_t*)
{
    //TODO: fill your code
}   
double find_minimum_balance(const account_t*)
{
    //TODO: fill your code
}
double find_maximum_balance(const account_t*)
{
    //TODO: fill your code
}
int count_accounts_with_balance_range(const account_t*, double, double)
{
    //TODO: fill your code
}
