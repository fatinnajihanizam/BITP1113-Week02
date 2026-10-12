#include <iostream>
using namespace std;

// Function prototypes
double inputBitrate();
double inputMinutes();
void computeDataMB(double bitrate, double minutes, double& totalMB, double& totalGB);
void display(double totalMB, double totalGB);

int main()
{
    // 1. Get input
    double bitrate = inputBitrate();
    double minutes = inputMinutes();

    // Variables for outputs
    double totalMB = 0.0;
    double totalGB = 0.0;

    // 2. Compute data usage
    computeDataMB(bitrate, minutes, totalMB, totalGB);

    // 3. Display results
    display(totalMB, totalGB);

    return 0;
}

// Module to input bitrate
double inputBitrate() 
{
    double bitrate;
    cout << "Enter bitrate (Mbps): ";
    cin >> bitrate;
    return bitrate;
}

// Module to input minutes
double inputMinutes() 
{
    double minutes;
    cout << "Enter duration (minutes): ";
    cin >> minutes;
    return minutes;
}

// Module to calculate MB and GB
void computeDataMB(double bitrate, double minutes, double& totalMB, double& totalGB)
{
    double seconds = minutes * 60;
    double megabits = bitrate * seconds;
    totalMB = megabits / 8;
    totalGB = totalMB / 1024;
}

// Module to display results
void display(double totalMB, double totalGB)
{
    cout << "\n--- Streaming Data Usage Results ---" << endl;
    cout << "Total Data Used: " << totalMB << " MB" << endl;
    cout << "Total Data Used: " << totalGB << " GB" << endl;
}