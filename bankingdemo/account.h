#ifndef __ACCOUNT_H
#define __ACCOUNT_H

#define MAX_CUSTOMER_ID_LENGTH     20
#define MAX_CUSTOMER_NAME_LENGTH   50
#define MAX_CUSTOMER_PHONE_LENGTH  12

struct Account
{
    char m_customer_id[MAX_CUSTOMER_ID_LENGTH];
    char m_customer_name[MAX_CUSTOMER_NAME_LENGTH];
    double m_balance;
    //char m_customer_phone_numer[MAX_CUSTOMER_PHONE_LENGTH];
};

typedef struct Account account_t;
typedef struct Account* paccount_t;

void initialize_account(char* pid, char* pname, double pbalance);
void debit(account_t*, double amount);
void credit(account_t*, double amount);

#endif
