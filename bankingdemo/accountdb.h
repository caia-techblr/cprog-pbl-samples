#ifndef __ACCOUNTDB_H
#define __ACCOUNTDB_H

#define MAX_NUMBER_OF_ACCOUNTS 10

static void display_single_account(const account_t*);

void add_account(char* pcustomer_id, char* pcustomer_name, double pbalance);
void remove_account(char* pcustomer_id);
void display_all_accounts(const account_t*);

account_t* find_account_by_id(const account_t*, pcustomer_id);
account_t* find_account_by_name(const account_t*, pcustomer_name); 
double find_average_balance(const account_t*);
double find_minimum_balance(const account_t*);
double find_maximum_balance(const account_t*);
int count_accounts_with_balance_range(const account_t*, double, double);

#endif
