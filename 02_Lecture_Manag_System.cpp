// Lecture Managment System

#include<iostream>
using namespace std;

class lecture
{
	string lec_name,sub_name,course_name;
	int lec_no,temp=0;	
	
	public:
		lecture(string lname,string sname,string cname,int lno) 
		{
			lec_name=lname;
			sub_name=sname;
			course_name=cname;
			lec_no=lno;
			temp++;
			
		}
		
		lecture()
		{
			lec_name="";
			sub_name="";
			course_name="";
			lec_no=0;
		}
		
		void lec_details()
		{
			if(temp==1)
			{
				cout<<"\n\n\t Lecture Start Date: 04/08/2024";
				cout<<"\n\n\t Lecture Start Time: 09:30 to 11:00";
			}
		}
		
		
};

main()
{
	lecture L[5];
	int lno;
	string lname,sname,cname;
	for(int i=0;i<5;i++)
			{
				cout<<"\n\n\t Enter Lecturer Name: ";
				cin>>lname;
		
				cout<<"\n\n\t Enter Subject Name: ";
				cin>>sname;
		
				cout<<"\n\n\t Enter Course Name: ";
				cin>>cname;
				
				cout<<"\n\n\t Enter Number of Lectures: ";
				cin>>lno;
				L[i]=lecture(lname,sname,cname,lno);
			}
	
	
	
}


