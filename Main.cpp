#include <iostream>
#include <cstring>
#include "Employee.h"
#include "Answer_Script.h"
#include "Feedback.h"
#include "Inquiry.h"
#include "Examination.h"
#include "Result.h"
#include "ExamAdministrator.h"
#include "Staff.h"
#include "Examiner.h"
#include "CustomOfficer.h"
#include "Admin.h"


using namespace std;

int main()
{
  //My part of Main.cpp - (IT21096570)
  
	Staff* examiner = new Examiner(); //Object for Examiner class
	
	//Calling Methods
	examiner -> findAvailableMaterial();
	examiner -> MarkQuestions();
	examiner ->putMarks();
	examiner ->calculateTotalMark();
	examiner ->sendResult();
	
	Result result1(); //Object for Resulr class
	
	//Calling Methods
	result1.storeAndDisplayResult();
	result1.displayCandidateDetails();

  //object for customer officer class
  Staff* CustomOfficer = new  CustomOfficer();
  
  //calling methods
  CustomOfficer->displayCustomOfficerDetails();
  CustomOfficer->	viewInquiry();
	CustomOfficer->collectFeedback();
	CustomOfficer->sendSolutions();

  //object for inquiry class
  Inquiry inquiry1();

  //calling methods
  inquiry1.displayInquiryDetails();

  //object for feedback class
  Feedback feedback1();

  //calling methods
  feedback1.displayFeedbackDetails();


  //object for ExamAdministrator class
  Staff* ExamAdministrator= new ExamAdministrator();

  //calling methods
  ExamAdministrator->addExam();
	ExamAdministrator->viewExam();
	ExamAdministrator->removeExam();
	ExamAdministrator->updateExam();

  //object for Examination class
  Examination examination1();

  //calling methods
  examination1.displayExamDetails();
	examination1.displayExam();
	examination1.getAnswers();

  //Creating objects for Employee class
  Employee *emp = new Employee();

  //calling methods
  emp -> takeExam();
  emp -> uploadAnswerScript();
  emp -> viewResults();
  emp -> updateUserDetails();
  emp -> sendInquiry();
  emp -> sendFeedback();


  //Creating objects for answer scripts
  Answer_Script* script = new Answer_Script();

  //calling methods
  script -> displayAnswerpaper();

  

  Staff* Admin = new Admin(); //Object for Admin class
	
	//Calling Methods
	Admin -> addStaff();
	Admin -> updateStaff();
	Admin -> deletStaff();


  

  //deleting objects
  delete CustomOfficer;
  delete ExamAdministrator;
  delete emp;
  delete script;
  delete examiner;
  delete Admin;
    
	return 0;
}
