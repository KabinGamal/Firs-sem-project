#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

typedef struct {
    int id;
    char name[50];
    char specialization[50];
    char contact[15];
    int available; 
} Doctor;

typedef struct {
    int id;
    char name[50];
    int age;
    char gender;
    char address[100];
    char contact[15];
    char bloodType[5];
    char medicalHistory[200];
} Patient;

typedef struct {
    int id;
    int patientId;
    int doctorId;
    char date[11]; 
    char time[6];  
    char purpose[100];
    int completed; 
} Appointment;

Doctor doctors[100];
Patient patients[100];
Appointment appointments[200];
int doctorCount = 0;
int patientCount = 0;
int appointmentCount = 0;

void displayMainMenu();
void manageDoctors();
void managePatients();
void manageAppointments();
void displayHospitalStats();
void loadData();
void saveData();
void addDoctor();
void viewDoctors();
void searchDoctor();
void updateDoctor();
void addPatient();
void viewPatients();
void searchPatient();
void updatePatient();
void scheduleAppointment();
void viewAppointments();
void completeAppointment();
void cancelAppointment();
void displayPatientCard(int patientId);
void displayDoctorSchedule(int doctorId);
void displayUpcomingAppointments();
void displayEmergencyContacts();
void getCurrentDateTime(char *date, char *time);
void clearInputBuffer();
void printHeader(const char *title);
void pressAnyKeyToContinue();
int validateDate(const char *date);
int validateTime(const char *time);
int main() {
    loadData();
    
    int choice;
    do {
        displayMainMenu();
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        clearInputBuffer();
        
        switch(choice) {
            case 1:
                manageDoctors();
                break;
            case 2:
                managePatients();
                break;
            case 3:
                manageAppointments();
                break;
            case 4:
                displayHospitalStats();
                break;
            case 5:
                displayEmergencyContacts();
                break;
            case 6:
                printf("\nSaving data and exiting system...\n");
                saveData();
                printf("Thank you for using the Hospital Management System.\n");
                break;
            default:
                printf("\nInvalid choice. Please try again.\n");
                pressAnyKeyToContinue();
        }
    } while(choice != 6);
    
    return 0;
}