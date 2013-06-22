#pragma once		// ���. ���� ���
//----------------------------------------------------------------------------------------------
// ���������� ������: Employee
//----------------------------------------------------------------------------------------------
class Employee
{
	private:
		// member variables				(�������� ������, ����������-����� ������)
		//-------------------------------------------------------------------------
		string name;
		int	 id_number;
		string department;
		string position;

	public:
		// member functions				(������ ������)
		//-------------------------------------------------------------------------
		// contructors					(������������)
		// default constructor			(����������� �� ���������)
		Employee();
		// 1 overloaded constructor		(������������� �����������)
		Employee( string name, int id_number, string department, string position );
		// 2 overloaded constructor		(������������� �����������)
		Employee( string name, int id_number );


		// setters						(mutator functions)
		void setName( string name );
		void setId_number( int id_number );
		void setDepartment( string department );
		void setPosition( string position );
		void setEmployee( string name, int id_number, string department, string position );

		// getters						(accessor functions)
		string getName();
		int getId_number();
		string getDepartment();
		string getPosition();

		// user functions				(������� ������������)
		void showEmployees( Employee *employeeDB, int size );
				
		// destructor					(����������)
		~Employee();
};