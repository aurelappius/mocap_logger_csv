#include "domain_participant.h"
#include "sub_callback.h"
#include "subscriber.h"

#include <fstream>
#include <iostream>
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
  cpp_msg::Mocap_msg msg;
  DDSSubscriber mocap_sub(idl_msg::Mocap_msgPubSubType(), &msg,
                          "mocap_srl_quad", dp.participant());

  //////////////////////////////////////////////////////////

  // create fstream
  auto timenow =
      std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
  std::string Date = ctime(&timenow);
  std::replace(Date.begin(), Date.end(), ' ', '_');
  Date.pop_back();
  std::ofstream myLog;
  myLog.open("log/Flight_" + Date + ".csv");
  std::cout << "Started logging to flight_" << Date << ".csv\n";

  // time

  std::chrono::time_point<std::chrono::system_clock> start =
      std::chrono::system_clock::now();

  for (;;) {
    std::cout << "subscribing" << std::endl;
    mocap_sub.listener->wait_for_data();
    // create file
    std::chrono::time_point<std::chrono::system_clock> now =
        std::chrono::system_clock::now();
    double time =
        std::chrono::duration_cast<std::chrono::milliseconds>(now - start)
            .count();
    // outstream to console
    // std::cout << "Timestamp: " << sub::mocap_msg.header.timestamp <<
    // std::endl;
    // std::cout << "roll: " << sub::mocap_msg.pose.orientation_euler.roll <<
    // std::endl; std::cout << "pitch: " <<
    // sub::mocap_msg.pose.orientation_euler.pitch << std::endl; std::cout <<
    // "yaw: " << sub::mocap_msg.pose.orientation_euler.yaw << std::endl;
    // std::cout << "x: " << sub::mocap_msg.pose.position.x << std::endl;
    // std::cout << "y: " << sub::mocap_msg.pose.position.y << std::endl;
    // std::cout << "z: " << sub::mocap_msg.pose.position.z << std::endl;

    std::cout << time << "\t" << msg.position.x << "\t" << msg.position.y
              << "\t" << msg.position.z << " \n";

    // outstream to file
    // myLog << time << ",";
    // myLog << sub::mocap_msg.position.x << ",";
    // myLog << sub::mocap_msg.position.y << ",";
    // myLog << sub::mocap_msg.position.z << " \n";
    // myLog << sub::mocap_msg.orientation.roll << ",";
    // myLog << sub::mocap_msg.orientation.pitch << ",";
    // myLog << sub::mocap_msg.orientation.yaw << "\n";

    // std::cout << std::endl;
  }
}