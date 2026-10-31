#include <iostream>
#include <string>

class Active_people{
private:
	int next_id;
	int id;

	std::string name;
	std::string rarity;
	int age;
	int health;
public:
	Active_people() {
		id = ++next_id;
		name = "NoName";
		health = 100;
		std::cout << "default constructor\n";
	}
	Active_people(std::string name_, int age_) {
		id = ++next_id;
		name = name_;
		age = age_;
		health = 100;
	}
	Active_people(const Active_people& p) {
		std::cout << "copy constructor\b";
		id = ++next_id;
	}
};

class Monster{
private:
	std::string name;
	float V;
	short rating;
public:
	Monster(std::string name_, float V_) {
		name = name_;
		V = V_;
		std::cout << "init constructor\nMonster has been spawned in Mir Monsters\n";
	}
	void stats() {
		std::cout << "Name: " << name << "\nV: " << std::to_string(V);
	}
};

int Active_people::next_id = 0;

int main() {
	Active_people ivan;
	Active_people Leha("Lesha", 19);
	Active_people Vitya(Leha);

	Monster pipline_punsh{ "PipeLine Punch", 0.5 };
	Monster pipline_punsh_IIR{ pipline_punsh };

	pipline_punsh_IIR.stats();

	return 0;
}