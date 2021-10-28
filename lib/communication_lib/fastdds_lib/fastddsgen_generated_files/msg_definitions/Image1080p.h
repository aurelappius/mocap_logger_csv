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
 * @file Image1080p.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _IDL_MSG_IMAGE1080P_H_
#define _IDL_MSG_IMAGE1080P_H_

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
#if defined(Image1080p_SOURCE)
#define Image1080p_DllAPI __declspec( dllexport )
#else
#define Image1080p_DllAPI __declspec( dllimport )
#endif // Image1080p_SOURCE
#else
#define Image1080p_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define Image1080p_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace idl_msg {
    /*!
     * @brief This class represents the structure Image1080p defined by the user in the IDL file.
     * @ingroup IMAGE1080P
     */
    class Image1080p
    {
    public:

        /*!
         * @brief Default constructor.
         */
        eProsima_user_DllExport Image1080p();

        /*!
         * @brief Default destructor.
         */
        eProsima_user_DllExport ~Image1080p();

        /*!
         * @brief Copy constructor.
         * @param x Reference to the object idl_msg::Image1080p that will be copied.
         */
        eProsima_user_DllExport Image1080p(
                const Image1080p& x);

        /*!
         * @brief Move constructor.
         * @param x Reference to the object idl_msg::Image1080p that will be copied.
         */
        eProsima_user_DllExport Image1080p(
                Image1080p&& x);

        /*!
         * @brief Copy assignment.
         * @param x Reference to the object idl_msg::Image1080p that will be copied.
         */
        eProsima_user_DllExport Image1080p& operator =(
                const Image1080p& x);

        /*!
         * @brief Move assignment.
         * @param x Reference to the object idl_msg::Image1080p that will be copied.
         */
        eProsima_user_DllExport Image1080p& operator =(
                Image1080p&& x);

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
         * @brief This function copies the value in member frame
         * @param _frame New value to be copied in member frame
         */
        eProsima_user_DllExport void frame(
                const std::array<uint8_t, 1920*1080*3>& _frame);

        /*!
         * @brief This function moves the value in member frame
         * @param _frame New value to be moved in member frame
         */
        eProsima_user_DllExport void frame(
                std::array<uint8_t, 1920*1080*3>&& _frame);

        /*!
         * @brief This function returns a constant reference to member frame
         * @return Constant reference to member frame
         */
        eProsima_user_DllExport const std::array<uint8_t, 1920*1080*3>& frame() const;

        /*!
         * @brief This function returns a reference to member frame
         * @return Reference to member frame
         */
        eProsima_user_DllExport std::array<uint8_t, 1920*1080*3>& frame();

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
                const idl_msg::Image1080p& data,
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
        std::array<uint8_t, 1920*1080*3> m_frame;
    };
} // namespace idl_msg

#endif // _IDL_MSG_IMAGE1080P_H_