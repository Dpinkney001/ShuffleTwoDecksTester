#include<iostream>
#include<vector>
#include<string>
#include<random>
#include<list>


using namespace std;

int main() {
	std::list<std::string> Deck1 = { "Dark_Ruler_Ha_Des",
				  "Monster_Reborn",
"Lightning_Vortex",
"Solemn_Judgement",
"Enemy_Controller",
"Contract_With_The_Dark_Master",
"Brain_Control",
"Monster_Reincarnation",
"Goblin_Zombie",
	 "Berserk_Dragon",
	 "A_Deal_With_Dark_Ruler",
	 "Newdoria",
	 "Opticlops",
	 "Deck_Devastation_Virus",
	 "Brain_Jacker",
	 "Ectoplasmer",
	 "Double_Spell",
	 "Newdoria",
	 "Jowgen_The_Spiritualist",
	 "Return_From_The_Different_Dimension",
	 "Card_Destruction",
	 "Mystical_Space_Typhoon",
	"Headless_Knight",
	 "Archfiend_Soldier",
	"My_Body_As_A_Shield",
	"Megamorph",
	 "Mask_Of_Darkness",
	 "Despair_From_The_Dark",
	 "Mystic_Plasma_Zone",
	 "Dark_Master_ - _Zorc",
	 "Dark_Necrofear",
	 "Possessed_Dark_Soul",
	 "Necroface",
	"Sangan",
	 "Mirror_Force",
	 "Gernia",
	 "Shrink",
	 "Zoma_The_Spirit",
	 "Zoma_The_Spirit",
	"Sakuretsu_Armor",
	 "Heavy_Storm",
	 "Malice_Doll_Of_Demise"
	};
	std::vector<std::reference_wrapper<const std::string>> v(Deck1.cbegin(), Deck1.cend());
	std::random_device rd;
	std::mt19937 generator(rd());
	std::shuffle(v.begin(), v.end(), generator);
	std::cout << "shuffled deck:   " << endl;
	std::copy(v.cbegin(), v.cend(), std::ostream_iterator<std::string>(std::cout, " "));
	std::cout << " cards in the hand are:    " << endl;
	std::copy(v[0], v[4], std::ostream_iterator<std::string>(std::cout, " "));



}





