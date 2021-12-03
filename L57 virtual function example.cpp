#include<iostream>
using namespace std;
class CWH{
	protected:
		string title;
		int rating;
	public:
	    CWH(string s,int r)
		{
			title=s;
			rating=r;
		}	
		void virtual display()
		{ 
		cout<<"I am virtual function "<<endl;
		/*This function will not call from base pointer point to derived object, there
		is only case ,if there is any derived function is not present so there only
		compiler call to base function and the upper cout statement will print*/
		}
};
class CWH_Video:public CWH{
	private:
		float length;
	public:
	    CWH_Video(string s,int r,float l):CWH(s,r)
		{
		  length=l;	
		}	
		void display();
		
};
void CWH_Video::display()
{
	cout<<"Title of Video : "<<title<<endl;
	cout<<"Rating is : "<<rating<<" out of 5"<<endl;
	cout<<"Length of Video : "<<length<<endl;
}
class CWH_Text:public CWH{
	private:
		int word;
	public:
		 CWH_Text(string s,int r,int w):CWH(s,r)
		{
		  word=w;	
		}
		void display();
};
void CWH_Text::display()
{
	cout<<"Title of Lecture TEXT : "<<title<<endl;
	cout<<"Rating is : "<<rating<<" out of 5"<<endl;
	cout<<"Words of Lecture : "<<word<<endl;
}
int main()
{
	string title="Code With Harry C++";
	int rating=4;
	float length=4.5;
	int word=566;
	CWH_Video video(title,rating,length);
	CWH_Text text(title,rating,word);
	CWH *ptr[2];
	ptr[0]=&video;
	ptr[0]->display();
	cout<<endl;
	ptr[1]=&text;
	ptr[1]->display();
}
