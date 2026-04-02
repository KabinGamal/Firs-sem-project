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

