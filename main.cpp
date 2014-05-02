#include<iostream>
#include<string>


void setNotes(std::string notes[17], int scale)
{
	
	if(scale == 1)
	{
		notes[0] = "A";
		notes[1] = "A#";
		notes[2] = "B";
		notes[3] = "C";
		notes[4] = "C#";
		notes[5] = "D";
		notes[6] = "D#";
		notes[7] = "E";
		notes[8] = "F";
		notes[9] = "F#";
		notes[10] = "G";
		notes[11] = "G#";
	}

	else if(scale == 2)
	{
		notes[0] = "Ab";
	}
	else if(scale == 0)
	{

	}
}


int checkInput(std::string in_note)
{
	if(in_note.find('#') != std::string::npos)
	{
		std::cout << "Sharp " << std::endl;
		return 1;
	}
	else if(in_note.find('b') != std::string::npos)
	{
		std::cout << "Flat " << std::endl;
		return 2;
	}
	else if(in_note.compare("F") == 0)
	{
		return 2;
	}
	else if(in_note.compare("C") == 0)
	{
		return 3;
	}
	else
	{
		return 1;
	}
}

void getInput(std::string& in_note)
{
	std::cout << "Enter in your note: " << std::endl;
	std::cin >> in_note;
}



int main()
{

	std::string in_note;
	std::string notes[17];
	int note_num;
	int scale;
 
	
	getInput(in_note);
	std::cout << "NOTE: " << in_note << std::endl;

	scale = checkInput(in_note);

	setNotes(notes, scale);
	for(int i = 0; i < 17; i++)
	{
		if(in_note.compare(notes[i]) == 0)
		{
			note_num = i;
			i = 18;
		}
	}
 
	std::cout << notes[note_num] << " is a fifth above " << in_note << std::endl;

	
	
	return 0;

}
