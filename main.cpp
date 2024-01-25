#include <io_stream>
#include <string>

using namespace std;

int main() {
	:start
	cout<<"Witaj w kalkulatorze technologie. Co chcialbys zrobic (dodawanie lub odejmowanie): "<<;
	string buffer;
	int buffer_int=0;
	int sum=0;
	cin>>buffer;
	cout<<endl;
	if(buffer=="dodawanie") {
		cout<<"Podaj liczby ktore chcesz dodac i zaakceptuj przyciskiem ENTER, aby zakonczyc podawanie liczb nie podawaj nic i wcisnij enter: ";
		buffer=-1;
		while(buffer)

	}
	else if(buffer=="odejmowanie") {
	}
	else {
		cout<<"Blad wejsciaa. Sproboj ponownie";
		getch();
		system("cls");
		goto start;
	}
}
