#include <stdio.h> 
#include <string.h> 

struct Lecturer
{
  char Lecturer_Name[50];
  int Total_Experience;
  int Experience_In_This_College;
};

void PassBy_Reference(struct Lecturer *Lecturers);

int main() 
{
  struct Lecturer Lecturer1;
   
  printf("\nPlease Enter the Lecturer Name \n");
  scanf(" %s",Lecturer1.Lecturer_Name);
  
  printf("Please Enter Lecturers Total Years of Experience\n");
  scanf("%d",&Lecturer1.Total_Experience);
  
  printf("Enter Lecturers Total Years of Experience in this College\n");
  scanf("%d",&Lecturer1.Experience_In_This_College);
  
  PassBy_Reference(&Lecturer1);   
 
  printf("\n Lecturer Name = %s", Lecturer1.Lecturer_Name); 
  printf("\n Lecturers Total Years of Experience = %d", Lecturer1.Total_Experience); 
  printf("\n Years of Experience in this College = %d", Lecturer1.Experience_In_This_College); 
  
  return 0;
}

void PassBy_Reference(struct Lecturer *Lecturers)
{
  strcpy(Lecturers->Lecturer_Name, "Tutorial Gateway");
  Lecturers->Total_Experience = 5;
  Lecturers->Experience_In_This_College = 3;
}
