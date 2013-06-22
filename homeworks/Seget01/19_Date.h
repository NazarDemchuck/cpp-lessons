#pragma once		// ���. ���� ���
//----------------------------------------------------------------------------------------------
// ���������� ������: Date
//----------------------------------------------------------------------------------------------
class Date
{
	private:
		// member variables				(�������� ������, ����������-����� ������)
		//-------------------------------------------------------------------------
		int year;
		int month;
		int day;

	public:
		// member functions				(������ ������)
		//-------------------------------------------------------------------------
		// contructors					(������������)
		// default constructor			(����������� �� ���������)
		Date();
		// overloaded constructor		(������������� �����������)
		Date( int date_day, int date_month, int date_year );

		// setters						(mutator functions)
		void setDay( int date_day );
		void setMonth( int date_month );
		void setYear( int date_year);

		// getters						(accessor functions)
		const int getYear();
		const int getMonth();
		const int getDay();

		// user functions				(������� ������������)
		void showDate();
		void showDate_1();
		void showDate_2();
		void showDate_3();
		char* getMonth_char( int date_month );
				
		// destructor					(����������)
		~Date();
};