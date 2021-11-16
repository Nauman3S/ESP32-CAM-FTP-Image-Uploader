#include <WiFiClient.h> 
#include <ESP32_FTPClient.h>

#include <NTPClient.h>
#include <WiFiUdp.h>

#include "time.h"



// Define NTP Client to get time
WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP);

// Variables to save date and time
String formattedDate;
String dayStamp;
String timeStamp;

char ftp_server[] = "192.168.0.3";
char ftp_user[]   = "admin";
char ftp_pass[]   = "admin";
ESP32_FTPClient ftp (ftp_server,ftp_user,ftp_pass, 5000, 2);