#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student {
    int id;
    char name[50];
    float marks;
};

struct Student students[MAX];
int count = 0;

void addStudent() {
    if (count >= MAX) {
        printf("Student limit reached.\n");
        return;
    }
    printf("Enter ID: ");
    scanf("%d", &students[count].id);
    printf("Enter Name: ");
    scanf(" %[^\n]", students[count].name);  // Read string with spaces
    printf("Enter Marks: ");
    scanf("%f", &students[count].marks);
    count++;
}

void displayStudents() {
    if (count == 0) {
        printf("No students to display.\n");
        return;
    }
    for (int i = 0; i < count; i++) {
        printf("\nID: %d\nName: %s\nMarks: %.2f\n",
               students[i].id, students[i].name, students[i].marks);
    }
}

int main() {
    int choice;
    do {
        printf("\n1. Add Student\n2. Display Students\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: printf("Exiting...\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 3);
    return 0;
}



#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student {
    int id;
    char name[50];
    float feePaid;
};

struct Student students[MAX];
int count = 0;

void addStudent() {
    if (count >= MAX) {
        printf("Limit reached.\n");
        return;
    }
    printf("Enter ID: ");
    scanf("%d", &students[count].id);
    printf("Enter Name: ");
    scanf(" %[^\n]", students[count].name);
    printf("Enter Fee Paid: ");
    scanf("%f", &students[count].feePaid);
    count++;
}

void displayFees() {
    if (count == 0) {
        printf("No records.\n");
        return;
    }
    for (int i = 0; i < count; i++) {
        printf("\nID: %d\nName: %s\nFee Paid: %.2f\n",
               students[i].id, students[i].name, students[i].feePaid);
    }
}

int main() {
    int choice;
    do {
        printf("\n1. Add Student Fee\n2. Display Fees\n3. Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayFees(); break;
            case 3: printf("Goodbye!\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 3);
    return 0;
}



#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student {
    int id;
    char name[50];
    float hoursWorked;
    float hourlyRate;
};

struct Student students[MAX];
int count = 0;

void addPayroll() {
    if (count >= MAX) {
        printf("Limit reached.\n");
        return;
    }
    printf("Enter ID: ");
    scanf("%d", &students[count].id);
    printf("Enter Name: ");
    scanf(" %[^\n]", students[count].name);
    printf("Hours Worked: ");
    scanf("%f", &students[count].hoursWorked);
    printf("Hourly Rate: ");
    scanf("%f", &students[count].hourlyRate);
    count++;
}

void displayPayroll() {
    if (count == 0) {
        printf("No payroll records.\n");
        return;
    }
    for (int i = 0; i < count; i++) {
        float salary = students[i].hoursWorked * students[i].hourlyRate;
        printf("\nID: %d\nName: %s\nSalary: %.2f\n",
               students[i].id, students[i].name, salary);
    }
}

int main() {
    int choice;
    do {
        printf("\n1. Add Payroll\n2. Display Payroll\n3. Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addPayroll(); break;
            case 2: displayPayroll(); break;
            case 3: printf("Exiting...\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 3);
    return 0;
}



#include <stdio.h>
#include <string.h>

#define MAX 100

struct Inventory {
    int id;
    char itemName[50];
    int quantity;
};

struct Inventory items[MAX];
int count = 0;

void addItem() {
    if (count >= MAX) {
        printf("Inventory full.\n");
        return;
    }
    printf("Enter Item ID: ");
    scanf("%d", &items[count].id);
    printf("Enter Item Name: ");
    scanf(" %[^\n]", items[count].itemName);
    printf("Enter Quantity: ");
    scanf("%d", &items[count].quantity);
    count++;
}

void displayInventory() {
    if (count == 0) {
        printf("No items in inventory.\n");
        return;
    }
    for (int i = 0; i < count; i++) {
        printf("\nItem ID: %d\nName: %s\nQuantity: %d\n",
               items[i].id, items[i].itemName, items[i].quantity);
    }
}

int main() {
    int choice;
    do {
        printf("\n1. Add Item\n2. Display Inventory\n3. Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addItem(); break;
            case 2: displayInventory(); break;
            case 3: printf("Exiting...\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 3);
    return 0;
}



#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student {
    int id;
    char name[50];
    float marks;
};

struct Student students[MAX];
int count = 0;

void addStudent() {
    if (count >= MAX) {
        printf("Limit reached.\n");
        return;
    }
    printf("Enter ID: ");
    scanf("%d", &students[count].id);
    printf("Enter Name: ");
    scanf(" %[^\n]", students[count].name);
    printf("Enter Marks: ");
    scanf("%f", &students[count].marks);
    count++;
}

void showReport() {
    if (count == 0) {
        printf("No data available.\n");
        return;
    }
    float total = 0, max = students[0].marks, min = students[0].marks;
    int maxIdx = 0, minIdx = 0;
    for (int i = 0; i < count; i++) {
        total += students[i].marks;
        if (students[i].marks > max) { max = students[i].marks; maxIdx = i; }
        if (students[i].marks < min) { min = students[i].marks; minIdx = i; }
    }
    printf("Total Students: %d\nAverage Marks: %.2f\n", count, total / count);
    printf("Topper: %s (%.2f)\nLowest: %s (%.2f)\n",
           students[maxIdx].name, max, students[minIdx].name, min);
}

int main() {
    int choice;
    do {
        printf("\n1. Add Student\n2. Show Report\n3. Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addStudent(); break;
            case 2: showReport(); break;
            case 3: printf("Exiting...\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 3);
    return 0;
}







