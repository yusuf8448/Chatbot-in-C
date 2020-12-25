#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include "library.h"



// When creating the structs I used them in order to be used multiple times throughout
// the code 

struct student
{
	
		char name[30]; //users can enter their name//
		int age;//users can enter their age//
		


} student;


struct University
{

	char Start[4];
	char UniversityChoice[50];
	char UniverstiySubject[50];
	char UniversityChoiceDescription[150];


} Universtiy;


struct Hobbies
{

	char HobbyChoice[50];
	char HobbyOpinion[150];

} Hobbies;

struct TheirStatement
{

	char TheirStatement[150];


} TheirStatement;


struct AllYesNo
{
	char Option[5];
};


struct Holiday
{
	char HolidayDestination[100];
	char HolidayOpinion[150];


} Holiday;

struct Sport

{
	char FavouriteSport[25];
	char SportOpinion[100];


} Sport;



// initialising the program


int main()
{
	struct student std;
	printf("Enter name: ");
	gets(std.name);
	printf("Enter age: ");
	scanf("%d", &std.age);
	printf("\nName : %s \nage : %d \n\n\n", std.name, std.age);
	if (std.age > 18)
	{
		printf("You are old enough to use the chatbot\n\n\n");

	}

	else if (std.age < 18)
	{

		printf("Sorry you are unable to use this chatbot\n\n\n");
		return 0;
	}



	printf("   *************Hello and welcome to the chatbot %s*************  \n\n", std.name);

	struct University u;
	char yes[4] = "yes";
	char no[4] = "no";
	u.Start[3] = '\0';
	printf("My name is CB, and I would like to get to know you.	\n ");   // introducing the idea of choice within the chatbot, if user picks yes then conversation route is redirected

	do
	{
		printf("Do you currently attend university?\n");
		scanf(" %s", &u.Start);
	} while (!(strcmp(u.Start, yes) == 0 || strcmp(u.Start, no) == 0));   // error handling for main part of the code 

	if (strcmp(u.Start, yes) == 0)
	{

		printf("What university are you currently going to?\n");
		scanf(" %[^\t\n]s", &u.UniversityChoice);


		printf("Ooh thats interesting, what course are you currently studying at %s?\n", &u.UniversityChoice);   //  first inital route // Using coditional statements to redirect conversation
		scanf(" %[^\t\n]s", &u.UniverstiySubject);
		printf("Do you like %s?   \n ", &u.UniverstiySubject);
		scanf(" %[^\t\n]s", &u.UniversityChoiceDescription);  // scanning a large input 

		if (isGood(u.UniversityChoiceDescription))  // using the function and library header to analyse key words from user input 
		{

			printf("Thats nice to hear that you enjoy your course!! \n");
		}


		else if (isBad(u.UniversityChoiceDescription))
		{
			printf(" Oh, sorry to hear that you don't like your course. \n");
		};


		struct Hobbies h;           // initialising more structs for specific section 


		printf("What other hobbies do you do in your free time? \n");
		scanf(" %[^\t\n]s", &h.HobbyChoice);

		if (isHobby(h.HobbyChoice))
		{

			printf("I wish I could do %s, the only thing im good at is compressing\n ", &h.HobbyChoice);


		}


		struct AllYesNo ayn;

		char yes[4] = "yes";
		char no[4] = "no";
		ayn.Option[5] = '\0';

		printf("Would you like to know a fact?\n");
		scanf(" %3s", ayn.Option);

		if (strcmp(ayn.Option, yes) == 0)
		{

			printf("Spacecraft often run using old-fashioned computer systems because engineers are confident their programs do the job well and making a new one is risky and expensive. NASA’s reusable spacecraft, the Space Shuttle, went into space using a computer designed in the 1970s. It had less code than most of today’s mobile phones!\n");

		}

		else if (strcmp(ayn.Option, no) == 0)
		{

			printf("Then would you like to talk about something else?\n");

			char yes[4] = "yes";
			char no[4] = "no";
			ayn.Option[5] = '\0';


			if (strcmp(ayn.Option, yes) == 0)
			{
				
				struct Holiday Holi;
				char yes[4] = "yes";
				char no[4] = "no";
				ayn.Option[5] = '\0';
				printf("Have you ever been on holiday before?\n");
				scanf(" %3s", ayn.Option);

				if (strcmp(ayn.Option, yes) == 0) {

					printf("Thats good, where did you visit?\n");
					scanf(" %[^\t\n]s", &Holi.HolidayDestination);
					printf("Thats nice is  %s nice?\n", &Holi.HolidayDestination);
					scanf(" %[^\t\n]s", Holi.HolidayOpinion);

						if (isGood(Holi.HolidayOpinion))
						{

							printf("Thats nice to hear that you enjoyed your holiday \n");
						}

						else if (isBad(Holi.HolidayOpinion))
						{
							printf(" Oh, sorry to hear that you didn't like your holiday \n");
						};


				



				}

				else if (strcmp(ayn.Option, no) == 0)               // conditional statements to follow user opinons 
				{
					struct Sport s;
					printf("In that case what is your favourite sport?\n");
					scanf(" %[^\t\n]s", s.FavouriteSport);
					printf("Do you play for your local %s team?\n", s.FavouriteSport);
					scanf(" %3s", ayn.Option);

					if (strcmp(ayn.Option, yes) == 0)
					{
						printf("Wow thats really cool! \n");

					}

					else if (strcmp(ayn.Option, no) == 0)
					{
						printf("You should try to play for them if they have one.\n");
					}



				}


			}


			else if (strcmp(ayn.Option, no) == 0)
			{


				char yes[4] = "yes";
				char no[4] = "no";
				ayn.Option[5] = '\0';
				printf("Would you like to exit the program then?\n ");
				scanf(" %3s", ayn.Option);


				if (strcmp(ayn.Option, yes) == 0)
				{

					return 0;
				}
				else if (strcmp(ayn.Option, no) == 0)
				{

				};





			}





		}


		struct Holiday Holi;
		char yess[4] = "yes";
		char noo[4] = "no";
		ayn.Option[5] = '\0';
		printf("Have you ever been on holiday before?\n");
		scanf(" %3s", ayn.Option);

		if (strcmp(ayn.Option, yes) == 0)
		{

			printf("Thats good, where did you visit?\n");
			scanf(" %[^\t\n]s", &Holi.HolidayDestination);
			printf("Thats nice is  %s nice?\n", &Holi.HolidayDestination);
			scanf(" %[^\t\n]s", Holi.HolidayOpinion);

				if (isGood(Holi.HolidayOpinion))
				{

					printf("Thats nice to hear that you enjoyed your holiday \n");
				}

				else if (isBad(Holi.HolidayOpinion))
				{
					printf(" Oh, sorry to hear that you didn't like your holiday \n");
				};


			



		}

		else if (strcmp(ayn.Option, no) == 0)
		{
			struct Sport s;
			printf("In that case what is your favourite sport?\n");
			scanf(" %[^\t\n]s", s.FavouriteSport);
			printf("Do you play for your local %s team?\n", s.FavouriteSport);
			scanf(" %3s", ayn.Option);

			if (strcmp(ayn.Option, yes) == 0)
			{
				printf("Wow thats really cool!\n ");

			}

			else if (strcmp(ayn.Option, no) == 0)
			{
				printf("You should try to play for them if they have one\n.");
			}

			else if (strcmp(ayn.Option, no) == 0)
			{


				char yes[4] = "yes";
				char no[4] = "no";
				ayn.Option[5] = '\0';

				printf("Would you like to exit the program then?\n ");
				scanf(" %3s", ayn.Option);


				if (strcmp(ayn.Option, yes) == 0)
				{

					return 0;
				}
				else if (strcmp(ayn.Option, no) == 0)
				{

				};


			}

		}
	}

	else if (strcmp(u.Start, no) == 0)
	{

		printf("Okay let's talk about something else then\n");


		struct AllYesNo ayn;

		char yes[4] = "yes";
		char no[4] = "no";
		ayn.Option[5] = '\0';

		printf("Would you like to know a fact?");
		scanf(" %3s", ayn.Option);

		if (strcmp(ayn.Option, yes) == 0)
		{

			printf("Spacecraft often run using old-fashioned computer systems because engineers are confident their programs do the job well and making a new one is risky and expensive. NASA’s reusable spacecraft, the Space Shuttle, went into space using a computer designed in the 1970s. It had less code than most of today’s mobile phones!\n");

		}

		else if (strcmp(ayn.Option, no) == 0)
		{
			char yes[4] = "yes";
			char no[4] = "no";
			ayn.Option[5] = '\0';
			printf("Then would you like to talk about something else?\n");
			scanf(" %3s", ayn.Option);

			


			if (strcmp(ayn.Option, yes) == 0)
			{
				struct Holiday Holi;
				char yes[4] = "yes";
				char no[4] = "no";
				ayn.Option[5] = '\0';
				printf("Have you ever been on holiday before?\n");

				if (strcmp(ayn.Option, yes) == 0) {

					printf("Thats good, where did you visit?\n");
					scanf(" %[^\t\n]s", &Holi.HolidayDestination);
					printf("Thats nice is  %s nice?\n", &Holi.HolidayDestination);
					scanf(" %[^\t\n]s", Holi.HolidayOpinion);

						if (isGood(Holi.HolidayOpinion))
						{

							printf("Thats nice to hear that you enjoyed your holiday \n");
						}

						else if (isBad(Holi.HolidayOpinion))
						{
							printf(" Oh, sorry to hear that you didn't like your holiday \n");
						};


					



				}

				else if (strcmp(ayn.Option, no) == 0)
				{
					struct Sport s;
					printf("In that case what is your favourite sport?\n");
					scanf(" %[^\t\n]s", s.FavouriteSport);
					printf("Do you play for your local %s team?\n", s.FavouriteSport);
					scanf(" %3s", ayn.Option);

					if (strcmp(ayn.Option, yes) == 0)
					{
						printf("Wow thats really cool!\n ");

					}

					else if (strcmp(ayn.Option, no) == 0)
					{
						printf("You should try to play for them if they have one. \n");
					}



				}


			}

			else if (strcmp(ayn.Option, no) == 0)
			{


				char yes[4] = "yes";
				char no[4] = "no";
				ayn.Option[5] = '\0';

				printf("Would you like to exit the program then? \n ");    // incorporation of user wanting to exit program 


				if (strcmp(ayn.Option, yes) == 0)
				{

					return 0;
				}
				else if (strcmp(ayn.Option, no) == 0)
				{

				};
			};





		}


		struct Holiday Holi;
		char yesss[4] = "yes";
		char nooo[4] = "no";
		ayn.Option[5] = '\0';
		printf("Have you ever been on holiday before?\n");
		scanf(" %3s", ayn.Option);

		if (strcmp(ayn.Option, yes) == 0) {

			struct Holiday Holi;
			printf("Thats good, where did you visit?\n");
			scanf(" %[^\t\n]s", &Holi.HolidayDestination);
			printf("Thats nice is  %s nice?\n", &Holi.HolidayDestination);
			scanf(" %[^\t\n]s", Holi.HolidayOpinion);

				if (isGood(Holi.HolidayOpinion))
				{

					printf("Thats nice to hear that you enjoyed your holiday \n");
				}

				else if (isBad(Holi.HolidayOpinion))
				{
					printf(" Oh, sorry to hear that you didn't like your holiday \n");
				};


			



		}

		else if (strcmp(ayn.Option, no) == 0)

		{
			struct Sport s;
			printf("In that case what is your favourite sport?\n");
			scanf(" %[^\t\n]s", s.FavouriteSport);
			printf("Do you play for your local %s team?\n", s.FavouriteSport);
			scanf(" %3s", ayn.Option);

			if (strcmp(ayn.Option, yes) == 0)
			{
				printf("Wow thats really cool! \n");

			}

			else if (strcmp(ayn.Option, no) == 0)
			{
				printf("You should try to play for them if they have one.\n");
			}



		}

		else if (strcmp(ayn.Option, no) == 0)
		{


			char yes[4] = "yes";
			char no[4] = "no";
			ayn.Option[5] = '\0';

			printf("Would you like to exit the program then?\n ");
			scanf(" %3s", ayn.Option);


			if (strcmp(ayn.Option, yes) == 0)
			{

				return 0;
			}
			else if (strcmp(ayn.Option, no) == 0)
			{
				
			};





		}


	


	}

printf("Sorry got to go it was good talking to you \n");   // end program 
	printf("Bye!");
	return 0;
}