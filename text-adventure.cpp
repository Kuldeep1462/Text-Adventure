#include <iostream>
int main () {

  char first = 'A';
  char gun = 'x';
  char granade = 'x';
  char qstn = 'x';

std::cout << "A day in a soldier´s life\n";

std::cout << "It all started on July 28, 1912. You were very calm one new morning when they knocked on your door and told you\n";
std::cout << "hello Mike new war had just started and we needed you in it.\n";
std::cout << "You have to decide if you are in o not\n";
std::cout << " A) Yes im in\n";
std::cout << " B) sorry I can`t\n";
std::cin >> first;
if (first == 'A' || first == 'a') {
  std::cout << "ok soldier see you tomorrow at 5 a.m. at the base\n";
} 
 else if (first == 'B' || first == 'b') {
   std::cout << "The end\n";
   return 0;
 }
 
 else {
   std::cout << "invalid\n";
   
    return 0;
 }
  std::cout << "The next Day\n";
  std::cout << "- Good morning soldiers, today your training begins to be able to go to the battlefield, you will wish you had not been born when you are facing the French\n";
std::cout << "Two months later\n";
std::cout << "- After two hard months of work, tomorrow is the day that everything will be worth it. Tomorrow at 5 a.m. the plane leaves to go to defend their country and your families\n";
std::cout << "The next day\n";
std::cout << "- Good mornig soldiers today is the day. in the nex hours you will be on the battlefield fighting for your coutry\n ";
std::cout << "- Soldier you what do you want to do\n";
std::cout << "A) I want to be in a tank\n";
std::cout << "B) I want to be outside\n";
std::cin >> gun;
if (gun == 'A' || gun == 'a') {
  std::cout << "- Ok soldier, go out and get ready\n";
  std::cout << "- Soldiers what we need to do is make way for our comrades who are outside, in order to gain ground in that way\n";
  std::cout << "mate- see you in the tank\n";
  std::cout << "one hour later\n";
  std::cout << "mate- They are locking us up! we need to break through now! or we don't get out of here\n";
  std::cout << "mate- Grande!!!!!\n";
  std::cout << "You have 5 seconds to think if you\n";
  std::cout << "A) Throw you on the granade and save your parthner\n";
  std::cout << " B) Try to get the grenade out of the tank and save both\n";
  std::cin >> granade;
  if (granade == 'A' || granade == 'a') {
     std::cout << "Mate- NOOOOOO!\n";
     std::cout << "4 hours later\n";
     std::cout << "Sergeant- What hapend?\n";
     std::cout << "Mate- He gave his life for mine\n";
     std::cout << "Mate- He is a hero\n";
     std::cout << "He not only gave his life for you, he also gave it for his country and family\n";
     std::cout << "\n";
     std::cout << "\n";
     std::cout << "\n";
     std::cout << "You die like a hero and we appreciate that\n";
     std::cout << "\n";
     std::cout << "\n";
     std::cout << "\n";
     std::cout << "The end\n";
     return 0;

  }
   else if (granade == 'B' || granade == 'b') {
     std::cout << "Mike- I feel it close\n";
     std::cout << "Mate- Are u ok?\n";
     std::cout << "Mike- Yes\n";
     std::cout << "Mate- Let`s finsh them\n";
     std::cout << "4 hours later\n";
     std::cout << "Sergeant- good job soldier\n";
     std::cout << "You can now return home knowing that you gave everything in the field and that will remain forever in history\n";
     std::cout << "\n";
     std::cout << "\n";
     std::cout << "\n";
     std::cout << "You are a hero\n";
     std::cout << "\n";
     std::cout << "\n";
     std::cout << "\n";
     std::cout << "The end\n";
   }
    else {
      std::cout << "invalid\n";
      return 0;
    }




}
 else if (gun == 'B' || gun == 'b') {
   std::cout << "- Ok soldier, go out and get ready\n";
   std::cout << "One hour later\n";
   std::cout << "Sergeant- We need to stay behind the tanks as they make way for us\n";
   std::cout << "Segeant- Mike do u se the RPG that is over there\n";
   std::cout << "Mike- Yes I see it\n";
   std::cout << "Sergeant- I need you go for it\n";
   std::cout << "Mike- here it is\n";
   std::cout <<  "Sergeant- I need you to decide whether to stay\n";
   std::cout << "A) Here to fight\n";
   std::cout << "or\n";
   std::cout << "B) help us take your partner back to camp because he is injured\n";
   std::cin >> qstn;
   if (qstn == 'A' || qstn == 'a') {
     std::cout << "Sergeant- Ok soldier I need ypu to shoot to those tanks whith the RPG\n";
     std::cout << "Mike- Yes sir\n";
     std::cout << "Mike- I allready destroy one\n";
     std::cout << "Sergeant- Good job soldier\n";
     std::cout << "Sergeant- As soon as this fight is over we go home\n";
     std::cout << "4 Hours later\n";
     std::cout << "you did a great job soldiers\n";
     std::cout << "Sergeant- Now you can return back home knowing yoou are a heroe\n";
     std::cout << "\n";
     std::cout << "\n";
     std::cout << "\n";
     std::cout << "The end.\n";
   }
    else if (qstn == 'B' || qstn == 'b') {
      std::cout << "Mate- Thank you for helping me\n";
      std::cout << "Mike- We are a team\n";
      std::cout << "30 minutes later\n";
      std::cout << "Mate- They see us, they know we are over here\n";
      std::cout << "Mike- We need to huury up\n";
      std::cout << "Mate- We aint gonna make it\n";
      std::cout << "Mate- Leve me here\n";
      std::cout << "Mike- I can`t do that\n";
      std::cout << "Mate- If you stay here they gonna kill you\n";
      std::cout << "Mate- GOOOO!\n";
      std::cout << "one hour later\n";
      std::cout << "Sergeant- were is your team mate?\n";
      std::cout << "Mike- He told me to leve him, because they are gonna kill us\n";
      std::cout << "Sergeant- He give his life for your life, he is a heroe\n";
      std::cout << "Mike- yes he is\n";
      std::cout << "Sergeant- Your job here is done.\n";
      std::cout << "Sergeant- retur back home knowing you are a hero.\n";
      std::cout << "\n";
      std::cout << "\n";
      std::cout << "\n";
      std::cout << "The end\n";
    }
     else {
       std::cout << "invalid\n";
       return 0;
     }

 
    }
     else {
       std::cout << "invalid\n";
       return 0;
     }




 

}