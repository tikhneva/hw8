// перевантаження констркуторів дз8.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*у кожному з пʼяти класів зробити по 4 конструктори (практика на перевантаження конструкторів).
один із конструкторів призначити умовно головним, інші три
- зробити залежними (використовувати делегування конструкторів, залежні конструктори звертаються до головного.
у головному конструкторі мають викликатися сеттери (без прямого звернення до полів).
все інше - не чіпаємо (параметри сеттерів називаються так само, як і поля в класі,
у сетерах застосовується покажчик this, геттери позначені як const) . зверніть увагу на
іменування полів (snake case) і методів (PascalCase).*/

#include <iostream>
using namespace std;

class Cat {
private:
	string nick;
	int energy;
	int sleepy;
	int hunger;
	string action;

public:

	Cat() : Cat("Soonie", 100) {}

	Cat(string nick, int sleepy) : Cat(nick, sleepy, "is playing") {}

	Cat(string nick, int sleepy, string action) : Cat(nick, sleepy, action, 49) {}

	Cat(string nick, int sleepy, string action, int energy)
	{
		SetNick(nick);
		SetEnergy(energy);
		SetSleepy(sleepy);
		SetHunger(50);
		SetAction(action);
	}

	void SetEnergy(int energy) {
		if (energy >= 0 && energy <= 100)
		{
			this->energy = energy;
		}
		else
		{
			cout << "Write the value from 0 to 100." << endl;
		}
	}
	int GetEnergy() const {
		return this->energy;
	}

	void SetHunger(int hunger) {
		if (hunger >= 0 && hunger <= 100)
		{
			this->hunger = hunger;
		}
		else
		{
			cout << "Write the value from 0 to 100." << endl;
		}
	}
	int GetHunger() const {
		return this->hunger;
	}

	void SetAction(string action)
	{
		this->action = action;
	}

	string GetAction() const
	{
		return action;
	}

	void SetSleepy(int sleepy) {
		if (sleepy >= 0 && sleepy <= 100)
		{
			cout << "Write the value from 0 to 100." << endl;
		}
		else
		{
			this->sleepy = sleepy;
		}
	}
	int GetSleepy() const {
		return this->sleepy;

	}
	void SetNick(string nick) {
		this->nick = nick;
	}
	string GetNick() const {
		return this->nick;
	}

	void Play() {
		if (sleepy > 40)
		{
			cout << nick << " is not able to play!!" << endl;
			return;
		}
		else
		{
			sleepy -= 40;
		}
	}

	void Eat() {
		if (hunger > 50)
		{
			cout << nick << " want to eat!!" << endl;
			return;
		}
		else
		{
			hunger -= 40;
		}
	}

	void Sleep() {
		if (energy >= 70)
		{
			cout << nick << " do not want to sleep!!" << endl;
			return;
		}
		else
		{
			energy += 30;
		}
	}

	void About() const
	{
		cout << "Name: " << nick << "\n";
		cout << "Energy level: " << energy << "%\n";
		cout << "Sleepy level: " << sleepy << "%\n";
		cout << "Hunger: ";
		if (hunger)
		{
			cout << "Yeees";
		}
		else
		{
			cout << "Nooo";
		}
	}
};

class Human {
private:
    string name;
    string eyes_color;
    string hair_color;
    string skill;
    double heigh;
    double beauty;
    double foot_size;

public:
    Human() : Human("Alice", 163) {}

    Human(string name, int heigh) : Human(name, heigh, "is cooking") {}

    Human(string name, int heigh, string skill) : Human(name, heigh, skill, 37) {}

    Human(string nick, int heigh, string skill, int foot_size)
    {
        SetName(name);
        SetFoot(foot_size);
        SetHeigh(heigh);
        SetBeauty(100);
        SetSkill(skill);
    }

    void SetName(string name) {
        this->name = name;
    }
    string GetName() const {
        return this->name;
    }

    void SetEye(string eye) {
        this->eyes_color = eye;
    }
    string GetEye() const {
        return this->eyes_color;
    }

    void SetHair(string hair) {
        this->hair_color = hair;
    }
    string GetHair() const {
        return this->hair_color;
    }

    void SetSkill(string skill) {
        this->skill = skill;
    }
    string GetSkill() const {
        return this->skill;
    }

    void SetHeigh(double heigh) {
        if (heigh == 163)
        {
            this->heigh = heigh;
        }
        else
        {
            cout << "This is the wrong heigh of this person" << endl;
        }
    }
    double GetHeigh() const {
        return this->heigh;
    }

    void SetBeauty(double beauty) {
        if (beauty >= 100)
        {
            this->beauty = beauty;
        }
        else
        {
            cout << "My human cannot be less than 100% beautiful!!" << endl;
        }
    }
    double GetBeauty() const {
        return this->beauty;
    }

    void SetFoot(double foot) {
        if (foot >= 36 && foot <= 38)
        {
            this->foot_size = foot;
        }
        else
        {
            cout << "Wrong foot size" << endl;
        }
    }
    double GetFoot() const {
        return this->foot_size;
    }

    void PetLover() {
        cout << "äèâè ÿêå êîøåíÿ!\n";
    }

    void LatestNews() {
        cout << "ÿ òîá³ çàðàç òàêå ðîçïîâ³ì!\n";
    }

    void Cooking(string pasta) {
        cout << "*Àë³ñà ãîòóº ñìà÷íó ñòðàâó äëÿ ïîäðóãè*" << pasta << "\n";
    }

    void Lateness() {
        cout << "âèáà÷òå çà çàï³çíåííÿ\n";
    }

    void Hobby() {
        cout << "äàâàé ñþäè ñâîþ ëàïöþ\n";
    }

    void About() const
    {
        cout << "Name: " << name << "\n";
        cout << "Heigh: " << heigh << "\n";
        cout << "Beauty level: " << beauty << "%\n";
        cout << "Foot size: " << foot_size << "\n";
    }
};

class Room {
private:
    string location;
    string size;
    int window_count;
    int residents_count;
    double comfort;

public:
    Room() : Room("Seoul", 2) {}

    Room(string location, int residents_count) : Room(location, residents_count, "very small") {}

    Room(string location, int residents_count, string size) : Room(location, residents_count, size, 1) {}

    Room(string location, int residents_count, string size, int window_count)
    {
        SetLocation(location);
        SetWindow(window_count);
        SetResidents(residents_count);
        SetComfort(4);
        SetSize(size);
    }

    void SetLocation(string location) {
        this->location = location;
    }
    string GetLocation() const {
        return this->location;
    }

    void SetSize(string size) {
        this->size = size;
    }
    string GetSize() const {
        return this->size;
    }

    void SetWindow(int window) {
        if (window == 1)
        {
            this->window_count = window;
        }
        else
        {
            cout << "There is only one window" << endl;
        }
    }
    int GetWindow() const {
        return this->window_count;
    }

    void SetResidents(int residents) {
        if (residents >= 1 && residents <= 4)
        {
            this->residents_count = residents;
        }
        else
        {
            cout << "There is no room to breathe" << endl;
        }
    }
    int GetResidents() const {
        return this->residents_count;
    }

    void SetComfort(double comfort) {
        if (comfort >= 6 && comfort <= 10)
        {
            this->comfort = comfort;
        }
        else
        {
            cout << "You would not be able to sleep with this comfort level" << endl;
        }
    }
    double GetComfort() const {
        return this->comfort;
    }

    void SleepPlace() {
        cout << "íà ï³äëîç³ ëåæèòü ìàòðàö, ùîá ñïàòè\n";
    }

    void NeighborhoodNoises() {
        cout << "knock bdjsdchk!\n";
    }

    void Food(string ramyeon) {
        cout << "äåñü á³ëÿ ðàêîâèíè º ðàìüîí" << ramyeon << "\n";
    }

    void AirConditioner() {
        cout << "ôøøøøøø\n";
    }

    void Door() {
        cout << "ãðàº ï³ñíÿ, êîëè â³ä÷³íÿþòüñÿ àáî çà÷èíÿþòüñÿ äâåð³\n";
    }

    void About() const
    {
        cout << "Location: " << location << "\n";
        cout << "Room size: " << size << "\n";
        cout << "Residents count: " << residents_count << "\n";
        cout << "Window count: " << window_count << "\n";
    }
};

class Phone {
private:
    string phone_model;
    string color;
    double display_diagonol;
    double memory;
    int cameras_count;

public:
    Phone() : Phone("IPhone13", 128) {}

    Phone(string phone_model, int memory) : Phone(phone_model, memory, "blue") {}

    Phone(string phone_model, int memory, string color) : Phone(phone_model, memory, color, 5.6) {}

    Phone(string phone_model, int memory, string color, double display_diagonol)
    {
        SetModel(phone_model);
        SetDisplay(display_diagonol);
        SetMemory(memory);
        SetCamera(2);
        SetColor(color);
    }

    void SetModel(string model) {
        this->phone_model = model;
    }
    string GetModel() const {
        return this->phone_model;
    }

    void SetColor(string color) {
        this->color = color;
    }
    string GetColor() const {
        return this->color;
    }

    void SetDisplay(double display) {
        if (display == 5.4)
        {
            this->display_diagonol = display;
        }
        else
        {
            cout << "Wrong display diagonol" << endl;
        }
    }
    double GetDisplay() const {
        return this->display_diagonol;
    }

    void SetMemory(double memory) {
        if (memory >= 32 && memory <= 128)
        {
            this->memory = memory;
        }
        else
        {
            cout << "You do not have such memory on this phone" << endl;
        }
    }
    double GetMemory() const {
        return this->memory;
    }

    void SetCamera(int camera) {
        if (camera >= 1 && camera <= 2)
        {
            this->cameras_count = camera;
        }
        else
        {
            cout << "You can make pictures only with one or two cameras on this phone" << endl;
        }
    }
    int GetCamera() const {
        return this->cameras_count;
    }

    void CameraClick() {
        cout << "click\n";
    }

    void Photo() {
        cout << "çàðàç ÿê çðîáëþ ãàðíå ôîòî\n";
    }

    void Memory() {
        cout << "íà ïðèñòð¿ íåìàº â³ëüíîãî ì³ñöÿ\n";

    }
    void Calls() {
        cout << "âõ³äíèé äçâ³íîê\n";
    }

    void Music() {
        cout << "I feel the rush" << "\n" << "Addicted to your touch\n";
    }

    void About() const
    {
        cout << "Model: " << phone_model << "\n";
        cout << "Color: " << color << "\n";
        cout << "Display diagonol: " << display_diagonol << "\n";
        cout << "Memory: " << memory << "\n";
    }
};

class Music {
private:
    string song_name;
    string kind_of_song;
    string song_author;
    string song_language;
    int song_release;

public:
    Music() : Music("i hate to admit", 2022) {}

    Music(string song_name, int song_release) : Music(song_name, song_release, "is sad") {}

    Music(string song_name, int song_release, string kind_of_song) : Music(song_name, song_release, kind_of_song, "Bang Chan") {}

    Music(string song_name, int song_release, string kind_of_song, string song_author)
    {
        SetSongName(song_name);
        SetAuthor(song_author);
        SetSongRelease(song_release);
        SetLanguage(song_language);
        SetSongKind(kind_of_song);
    }

    void SetSongName(string name) {
        this->song_name = name;
    }
    string GetSongName() const {
        return this->song_name;
    }

    void SetSongKind(string kind) {
        this->kind_of_song = kind;
    }
    string GetSongKind() const {
        return this->kind_of_song;
    }

    void SetAuthor(string author) {
        this->song_author = author;
    }
    string GetAuthor() const {
        return this->song_author;
    }

    void SetLanguage(string language) {
        this->song_language = language;
    }
    string GetLanguage() const {
        return this->song_language;
    }

    void SetSongRelease(int release) {
        if (release == 2022)
        {
            this->song_release = release;
        }
        else
        {
            cout << "Song release year is incorrect" << endl;
        }
    }
    int GetSongRelease() const {
        return this->song_release;
    }

    void Lyrics() {
        cout << "How could I forget" << "\n" << "The day you lied to me\n";
    }

    void Melody() {
        cout << "â³äòâîðþºòüñÿ ïðèºìíà ìåëîä³ÿ\n";
    }

    void Mood() {
        cout << "ÿêà ÷óäîâà ï³ñíÿ\n";
    }

    void Vocabulary() {
        cout << "î, íîâå ñëîâî\n";
    }

    void Headphones() {
        cout << "*ïîêà÷óþ ãîëîâîþ ó ðèòì ìóçèêè*\n";
    }

    void About() const
    {
        cout << "Song name: " << song_name << "\n";
        cout << "Author: " << song_author << "\n";
        cout << "Kind of song: " << kind_of_song << "\n";
        cout << "Song release: " << song_release << "\n";
        cout << "Song language: " << song_language << "\n";
    }
};

int main()
{
	setlocale(0, "");
	Cat cat;
	cat.SetNick("Soonie");
	cat.About();

	while (true)
	{
		cat.Sleep();
		cat.Play();
		cat.Eat();
		cat.About();
	}

    setlocale(0, "");
    Human human;
    human.SetName("Alice");
    human.About();

    while (true)
    {
        human.Lateness();
        human.Hobby();
        human.LatestNews();
        human.About();
    }

    setlocale(0, "");
    Room room;
    room.SetLocation("Seoul");
    room.About();

    while (true)
    {
        room.SleepPlace();
        room.Door();
        room.NeighborhoodNoises();
        room.About();
    }

    setlocale(0, "");
    Phone phone;
    phone.SetModel("IPhone13");
    phone.About();

    while (true)
    {
        phone.Photo();
        phone.Memory();
        phone.Calls();
        phone.About();
    }

    setlocale(0, "");
    Music music;
    music.SetSongName("i hate to admit");
    music.About();

    while (true)
    {
        music.Melody();
        music.Lyrics();
        music.Mood();
        music.About();
    }
}