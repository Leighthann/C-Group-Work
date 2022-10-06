#ifndef DATE_H_
#define DATE_H_

class Date
{
private:
	int day;
	int month;
	int year;

public:
	Date(int day , int month , int year)
	{
		this->day = day;
		this->month = month;
		this->year = year;
	}
	//Mutator or setters
		void setDay(int day)
		{
			this->day = day;
		}

		 //Mutator or setters
		void setMonth(int month)
		{
			this->month = month;
		}


		void setYear(int year)
		{
			this->year = year;
		}


		int getMonth()
		{
			return month;
		}

		int getYear()
		{
			return year;
		}
		int setDay()
		{
			return day;
		}

		void display()
	{
		cout << day << "/" << month << "/" << year<< endl;
	}
};



#endif /* DATE_H_ */
