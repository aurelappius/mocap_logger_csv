// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file AttitudeRateCommand.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _IDL_MSG_ATTITUDERATECOMMAND_H_
#define _IDL_MSG_ATTITUDERATECOMMAND_H_

#include "Header.h"

#include <stdint.h>
#include <array>
#include <string>
#include <vector>
#include <map>
#include <bitset>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(AttitudeRateCommand_SOURCE)
#define AttitudeRateCommand_DllAPI __declspec( dllexport )
#else
#define AttitudeRateCommand_DllAPI __declspec( dllimport )
#endif // AttitudeRateCommand_SOURCE
#else
#define AttitudeRateCommand_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define AttitudeRateCommand_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace idl_msg {
    /*!
     * @brief This class represents the structure AttitudeRateCommand defined by the user in the IDL file.
     * @ingroup ATTITUDERATECOMMAND
     */
    class AttitudeRateCommand
    {
    public:

        /*!
         * @brief Default constructor.
         */
        eProsima_user_DllExport AttitudeRateCommand();

        /*!
         * @brief Default destructor.
         */
        eProsima_user_DllExport ~AttitudeRateCommand();

        /*!
         * @brief Copy constructor.
         * @param x Reference to the object idl_msg::AttitudeRateCommand that will be copied.
         */
        eProsima_user_DllExport AttitudeRateCommand(
                const AttitudeRateCommand& x);

        /*!
         * @brief Move constructor.
         * @param x Reference to the object idl_msg::AttitudeRateCommand that will be copied.
         */
        eProsima_user_DllExport AttitudeRateCommand(
                AttitudeRateCommand&& x);

        /*!
         * @brief Copy assignment.
         * @param x Reference to the object idl_msg::AttitudeRateCommand that will be copied.
         */
        eProsima_user_DllExport AttitudeRateCommand& operator =(
                const AttitudeRateCommand& x);

        /*!
         * @brief Move assignment.
         * @param x Reference to the object idl_msg::AttitudeRateCommand that will be copied.
         */
        eProsima_user_DllExport AttitudeRateCommand& operator =(
                AttitudeRateCommand&& x);

        /*!
         * @brief This function copies the value in member header
         * @param _header New value to be copied in member header
         */
        eProsima_user_DllExport void header(
                const idl_msg::Header& _header);

        /*!
         * @brief This function moves the value in member header
         * @param _header New value to be moved in member header
         */
        eProsima_user_DllExport void header(
                idl_msg::Header&& _header);

        /*!
         * @brief This function returns a constant reference to member header
         * @return Constant reference to member header
         */
        eProsima_user_DllExport const idl_msg::Header& header() const;

        /*!
         * @brief This function returns a reference to member header
         * @return Reference to member header
         */
        eProsima_user_DllExport idl_msg::Header& header();
        /*!
         * @brief This function sets a value in member roll_rate
         * @param _roll_rate New value for member roll_rate
         */
        eProsima_user_DllExport void roll_rate(
                float _roll_rate);

        /*!
         * @brief This function returns the value of member roll_rate
         * @return Value of member roll_rate
         */
        eProsima_user_DllExport float roll_rate() const;

        /*!
         * @brief This function returns a reference to member roll_rate
         * @return Reference to member roll_rate
         */
        eProsima_user_DllExport float& roll_rate();

        /*!
         * @brief This function sets a value in member pitch_rate
         * @param _pitch_rate New value for member pitch_rate
         */
        eProsima_user_DllExport void pitch_rate(
                float _pitch_rate);

        /*!
         * @brief This function returns the value of member pitch_rate
         * @return Value of member pitch_rate
         */
        eProsima_user_DllExport float pitch_rate() const;

        /*!
         * @brief This function returns a reference to member pitch_rate
         * @return Reference to member pitch_rate
         */
        eProsima_user_DllExport float& pitch_rate();

        /*!
         * @brief This function sets a value in member yaw_rate
         * @param _yaw_rate New value for member yaw_rate
         */
        eProsima_user_DllExport void yaw_rate(
                float _yaw_rate);

        /*!
         * @brief This function returns the value of member yaw_rate
         * @return Value of member yaw_rate
         */
        eProsima_user_DllExport float yaw_rate() const;

        /*!
         * @brief This function returns a reference to member yaw_rate
         * @return Reference to member yaw_rate
         */
        eProsima_user_DllExport float& yaw_rate();


        /*!
         * @brief This function returns the maximum serialized size of an object
         * depending on the buffer alignment.
         * @param current_alignment Buffer alignment.
         * @return Maximum serialized size.
         */
        eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
                size_t current_alignment = 0);

        /*!
         * @brief This function returns the serialized size of a data depending on the buffer alignment.
         * @param data Data which is calculated its serialized size.
         * @param current_alignment Buffer alignment.
         * @return Serialized size.
         */
        eProsima_user_DllExport static size_t getCdrSerializedSize(
                const idl_msg::AttitudeRateCommand& data,
                size_t current_alignment = 0);


        /*!
         * @brief This function serializes an object using CDR serialization.
         * @param cdr CDR serialization object.
         */
        eProsima_user_DllExport void serialize(
                eprosima::fastcdr::Cdr& cdr) const;

        /*!
         * @brief This function deserializes an object using CDR serialization.
         * @param cdr CDR serialization object.
         */
        eProsima_user_DllExport void deserialize(
                eprosima::fastcdr::Cdr& cdr);



        /*!
         * @brief This function returns the maximum serialized size of the Key of an object
         * depending on the buffer alignment.
         * @param current_alignment Buffer alignment.
         * @return Maximum serialized size.
         */
        eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
                size_t current_alignment = 0);

        /*!
         * @brief This function tells you if the Key has been defined for this type
         */
        eProsima_user_DllExport static bool isKeyDefined();

        /*!
         * @brief This function serializes the key members of an object using CDR serialization.
         * @param cdr CDR serialization object.
         */
        eProsima_user_DllExport void serializeKey(
                eprosima::fastcdr::Cdr& cdr) const;

    private:

        idl_msg::Header m_header;
        float m_roll_rate;
        float m_pitch_rate;
        float m_yaw_rate;
    };
} // namespace idl_msg

#endif // _IDL_MSG_ATTITUDERATECOMMAND_H_