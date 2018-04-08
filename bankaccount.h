#include <iostream>
using namespace std;

class bankaccount
{
    public:
    bankaccount()
    {
        this->accountnumber=3;
        this->accountholder="MUHAMMAD FAHAD IRFAN";
        this->currentbalance=700000;}
        
        void display()
        {
            cout<<" I AM A 'B A N K A C C O U N T' "<<endl;
            cout<<this->accountnumber<<endl;
            cout<<this->accountholder<<endl;
            cout<<this->currentbalance<<endl;
            
        }
        
        int withdraw(int a)
        {
            currentbalance=currentbalance-a;
            return this->currentbalance;}
        
        int getaccountnumber()
        {
            return this->accountnumber;}
            
            string getaccountholder()
            
        {
            return this->accountholder;}
            
          int getcurrentbalance()
            {
                return this->currentbalance;}
                
                void setaccountnumber()
                {
                    this->accountnumber=3;}
                    
                    void setaccountholder()
                    {
                        this->accountholder="MUHAMMAD FAHAD IRFAN";}
                        
                        void setcurrentbalance()
                        {
                            this->currentbalance=700000;}
                            
                        
    
    
    
    
    
    
    
    
    private:
    
    int accountnumber;
    string accountholder;
   int currentbalance;
    
    int a;
    
    
    
    
    
    
    
    
    
};
