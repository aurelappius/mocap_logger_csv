#include "default_participant.h"
#include "default_subscriber.h"
#include "sub_callback.h"



#include <iostream>
#include <fstream>
#include <string.h>
#include <time.h>


using std::chrono::milliseconds;
using std::chrono::seconds;
using std::this_thread::sleep_for;


 

int main() {

// Famocap_msgDDS objects
// Create participant. Arguments-> Domain id, QOS name
DefaultParticipant dp(0, "mocap_subscriber");

// Create publisher with msg type
DDSSubscriber mocap_sub(idl_msg::MocapPubSubType(), &sub::mocap_msg, "mocap_pose", dp.participant());


// Initalize mocap_publisher
mocap_sub.init();
//////////////////////////////////////////////////////////

//create fstream
auto timenow = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
std::string Date = ctime(&timenow);
std::replace( Date.begin(), Date.end(), ' ', '_');
Date.pop_back();
std::ofstream myLog;
//std::string name="no_name";
//std::cout << "file name: ";
//std::cin >> name;
myLog.open ("log/Flight_"+Date+".csv");
//myfile << "Frame, Framerate, Latency, x, y, z, roll, pitch, yaw,\n";
std::cout << "Started logging to flight_" << Date << ".csv\n";

for(;;) {
    mocap_sub.listener->wait_for_data();
    //create file
    
    //outstream to console
    std::cout << "Timestamp: " << sub::mocap_msg.header.timestamp << std::endl;
    // std::cout << "roll: " << sub::mocap_msg.pose.orientation_euler.roll << std::endl;
    // std::cout << "pitch: " << sub::mocap_msg.pose.orientation_euler.pitch << std::endl;
    // std::cout << "yaw: " << sub::mocap_msg.pose.orientation_euler.yaw << std::endl;
    // std::cout << "x: " << sub::mocap_msg.pose.position.x << std::endl;
    // std::cout << "y: " << sub::mocap_msg.pose.position.y << std::endl;
    // std::cout << "z: " << sub::mocap_msg.pose.position.z << std::endl;

    //outstream to file
    myLog << sub::mocap_msg.header.timestamp << ",";
    myLog << sub::mocap_msg.pose.position.x << ",";
    myLog << sub::mocap_msg.pose.position.y << ",";
    myLog << sub::mocap_msg.pose.position.z << ",";
    myLog << sub::mocap_msg.pose.orientation_euler.roll << ",";
    myLog << sub::mocap_msg.pose.orientation_euler.pitch << ",";
    myLog << sub::mocap_msg.pose.orientation_euler.yaw << "\n";

    std::cout << std::endl;

    

}

}