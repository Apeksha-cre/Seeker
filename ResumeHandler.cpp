#include "ResumeHandler.hpp"

void Logical_View::Domain::Resume::ResumeHandler::uploadResume(std::string name, std::string workExperience, std::string professionalSkills, std::string interests, std::string volunteerWork, std::string education) {
	std::cout << "Resume is uploaded\n";
	std::cout << "your Resume is 70% Good .... Need to inprove 30% on sentance structure...\n";
}

void Logical_View::Domain::Resume::ResumeHandler::reviewResume(std::string name, std::string workExperience, std::string education, std::string professionalSkill, std::string interests, std::string volunteerWork) {
	std::cout << "Resume Review Response \n";
}

std::string Logical_View::Domain::Resume::ResumeHandler::paymentInfoSubmitted(std::string creditCardNumber, std::string cardHolderName, std::string csv, std::string amount) {
	std::cout << "Payment is Successful \n";
}

void Logical_View::Domain::Resume::ResumeHandler::endSession() {
	std::cout << "You Have Been Logged Out \n";
}
