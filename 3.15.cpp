#include <iostream>
#include<string>
using namespace std;
class date {

private:
	int month;
	int day;
	int year;

public:
 date (int m,int d,int y) {
		month=m;
		day=d;
		year=y;
	}
	

	void setmonth(int m){
	    if(m>=1&&m<=12) {
			month=m;
		} else {
			month=1;
		}
	}
	
	void setday(int d){
	    if(d>=1&&m<=31) {
	    	day=d;
	    }
	}
	
	void setyear(int y){
	    if(y>0)
	    year=y;
	}
	

	int getmonth(){
	    return month;
	}
	int getday(){
	    return day;
	}
	int getyear(){
	    return year;
	}
	void displaydate(){
	    cout<<month<<"/"<<day<<"/"<<year<<endl;
	}
};

int main()
{
    date date1(10,20,1996);
    
    cout<<"initial date:";
    date1.displaydate();
    
    date1.setmonth(1);
    date1.setday(1);
    date1.setyear(2020);
    
    cout<<"updated date:";
    date1.displaydate();
    
	return 0;
}
