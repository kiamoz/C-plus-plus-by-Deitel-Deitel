#include <iostream>
#include<string>
using namespace std;
class date {


private:
	int month;
	int day;
	int year;
	static const int max_month_days[12];

	//int max_month_days[];

public:
 date (int m,int d,int y) {
		month=m;
		setday(d);//day=d;
		year=y;
		//max_month_days[]= {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	}
	

	void setmonth(int m){
	    if(m>=1&&m<=12) {
			month=m;
		} else {
			month=1;
		}
	}
	
	void setday(int d){
	    
	    int max_day = max_month_days[month-1];
	    // int max_day = 30;
	    if(d>max_day){
	        day = max_day;
	    }else{
	        day = d;
	    }
	    
	    
	}
	
	void setyear(int y){
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

const int date::max_month_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
    date date1(4,31,1996);
    
    cout<<"initial date:";
    date1.displaydate();
    
    date1.setmonth(1);
    date1.setday(1);
    date1.setyear(2020);
    
    cout<<"updated date:";
    date1.displaydate();
    
	return 0;
}
