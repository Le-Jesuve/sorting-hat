#include <iostream>

int main (){
	int g = 0, h = 0, r = 0, s = 0;
	char ans;
  char repeat;
	
do{
	std::cout << "You approach the sorting hat. (press enter)";
	std::cin.ignore();
	std::cout << "hmm...";
	std::cin.ignore();
	std::cout << "...";
	std::cin.ignore();
	std::cin.ignore();
	std:: cout << "...";
	std::cout << "The hat shakes a little and nothing happens.";
	std::cin.ignore();
	std::cout << "*Oh my* says the big old wizard nearby.";
	std::cin.ignore();
	std::cout << "You look behind you nervously. The other students look impatient.";
	std::cin.ignore();
	std::cout << "*That isn't supposed to happen,* He seems severe.";
	std::cin.ignore();
	std::cout << "He walks to the hat and prods it, and turns to you.";
	std::cin.ignore();
	std::cout << "*We'll have to do this the old fashioned way.*";
	std::cin.ignore();
	std::cout << "You shift on your feet as he motions for a chair to be brought over. You sit, and in a booming voice which fills the room and echoes in the distant stone nooks of the ceiling, he begins.";
	std::cin.ignore();
label1:
	std::cout << "It is your birthday. Someone gives you a calfskin wallet. You\n\
					a) Regift it to your friend who needs a wallet\n\
					b) Thank the person who gave it to you and give them a hug\n\
					c) Immediately put it on your dresser where you'll keep money in it to save\n\
					d) Return it to the store and buy something more useful with the money\n";
	std::cin >> ans ;
	
	if(ans == 'a'){g++;}
		else if(ans == 'b'){h++;}
		else if(ans == 'c'){r++;}
		else if(ans == 'd'){s++;}
		else {goto label1;};

label2:
	std::cout << "You have got a little boy. He shows you his butterfly collection plus the killing jar. You\n\
					a) Make a mental note to buy him a butterfly net next time you're out\n\
					b) Cry because the butterflies are dead\n\
					c) Show him how to sell dead butterflies on Ebay\n\
					d) Chastise him for not killing the butterflies more efficiently\n";
	std::cin >> ans;
	
	
	if(ans == 'a'){g++;}
		else if(ans == 'b'){h++;}
		else if(ans == 'c'){r++;}
		else if(ans == 'd'){s++;}
		else {goto label2;};
	
label3:
	std::cout << "You are watching television. Suddenly you realize there is a wasp crawling on your arm. You\n\
					a) Carefully scoop it into a jar and take it outside \n\
					b) Let it live on your arm, and try to make friends with it\n\
					c) Feed it sugar water and grow a wasp farm to control the catterpilar population in your garden\n\
					d) Squeeze its thorax til it pops\n";
	std::cin >> ans;
	
	
	if(ans == 'a'){g++;}
		else if(ans == 'b'){h++;}
		else if(ans == 'c'){r++;}
		else if(ans == 'd'){s++;}
		else {goto label3;};
		
label4:
	std::cout << "You are in a desert walking along in the sand when all of the sudden you look down, and you see a tortoise, it is crawling toward you. You reach down, you flip the tortoise over on its back. The tortoise lays on its back, its belly baking in the hot sun, beating its legs trying to turn itself over, but it cannot, not without your help. But you are not helping. Why is that?\n\
					a) You're giving it a much needed break from walking on the hot sand\n\
					b) You're letting the hare behind it catch up\n\
					c) You're gathering firewood to make turtle soup\n\
					d) Heh.\n";
	std::cin >> ans;
	
	
	if(ans == 'a'){g++;}
		else if(ans == 'b'){h++;}
		else if(ans == 'c'){r++;}
		else if(ans == 'd'){s++;}
		else {goto label4;};
		
label5:
	std::cout << "Describe in single words, only the good things that come into your mind about your mother.\n\
					a) Brave\n\
					b) Kind\n\
					c) Strong\n\
					d) Aloof\n";
	std::cin >> ans;
	
	
	if(ans == 'a'){g++;}
		else if(ans == 'b'){h++;}
		else if(ans == 'c'){r++;}
		else if(ans == 'd'){s++;}
		else {goto label5;};
	
label6:
	std::cout << "You are reading a magazine. You come across a full-page nude photo of a girl. You show it to your husband. He likes it so much, he hangs it on your bedroom wall.\n\
					a) You look for more nude photos to give him\n\
					b) *My boyfriend will love that*\n\
					c) You call a lawyer and start drafting divorce papers\n\
					d) You email the magazine and express interest in modelling for them\n";
	std::cin >> ans;
	
	
	if(ans == 'a'){g++;}
		else if(ans == 'b'){h++;}
		else if(ans == 'c'){r++;}
		else if(ans == 'd'){s++;}
		else {goto label6;};
		
label7:
	std::cout << "You become pregnant by a man who runs off with your best friend, and you decide to get an abortion.\n\
					a) Sometimes you have to make hard decisions in life\n\
					b) You get distracted trying to make friends with the protesters outside the clinic\n\
					c) It's the logical course of action\n\
					d) You do it yourself at home and send it to them in a shoebox\n";
	std::cin >> ans;
	
	
	if(ans == 'a'){g++;}
		else if(ans == 'b'){h++;}
		else if(ans == 'c'){r++;}
		else if(ans == 'd'){s++;}
		else {goto label7;};

label8:
	std::cout << "You are watching a stage play - a banquet is in progress. The guests are enjoying an appetizer of raw oysters. The entree consists of boiled dog. You\n\
					a) Run onstage to help the dog\n\
					b) Bury your head into the shoulder of the audience member next to you\n\
					c) Aw shucks\n\
					d) Wish it was real so that a real dog was being eaten\n";
	std::cin >> ans;
	
	
	if(ans == 'a'){g++;}
		else if(ans == 'b'){h++;}
		else if(ans == 'c'){r++;}
		else if(ans == 'd'){s++;}
		else {goto label8;};
		
	std::cout << "The wizard strokes his beard and moves a gnarled fingernail down each line of his notes, whispering under his breath. Glancing behind you, the other students are all sitting around on the floor ";
	
	if (h>g && h>r && h>s) { 
		std::cout << "staring in disbelief at your sensitivity to the world. The wizard gets to the end of the page, leans back with his eyes closed for a minute and declares *Hufflepuff!* While moving you from the chair by your shoulders.\n";
	}
		else if (s>g && s>h && s>r) {
			std::cout << "glaring at you. The wizard says you're a Slytherin and you leave. What a waste of time.\n";
		}
		else if (g>h && g>r && g>s) { 
			std::cout << "slumped in a bored haze. The wizard says *Gryffindor!* you step up to the wizard and kneel, waiting to be knighted, but he ushers you away with jeers and laughter from your peers.\n";
		}
		else if (r>g && r>h && r>s) {
			std::cout << "bored to tears. The wizard thinks for a minute and says *Ravenclaw,*\n Makes sense.\n";
		};
		else if (g == h || g == r || g == s || h == r || h == s || r == s) {
		    std::cout << "and groans of boredom can be heard welling up from the tired mass. *You're a dirty Jew* says the wizard. *I mean Muggle.* The students jeer and start moving restlessly. The wizard curls his upper lip, *I think it's time you got out of our wizard place* He snarled. You fall off your chair scrambling to make it past the angry mob lethargically forming between you and the door."
		}
	
	std::cout << "Would you like to have another go on the hat? (y/n)";
	std::cin >> repeat;
}while (repeat == 'y' || 'Y');
return 0;
}