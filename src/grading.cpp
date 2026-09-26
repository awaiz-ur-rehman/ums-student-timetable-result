#include <cmath>

double roundToTwoDecimals(double value) {
    return round(value * 100.0) / 100.0;
}

double calculateGPA(double gp1, int ch1, double gp2, int ch2) {
    double totalPoints = (gp1 * ch1) + (gp2 * ch2);
    int totalHours = ch1 + ch2;
    return roundToTwoDecimals(totalPoints / totalHours);
}

bool isPassingGrade(double gpa) {
    return gpa >= 2.0;
}
