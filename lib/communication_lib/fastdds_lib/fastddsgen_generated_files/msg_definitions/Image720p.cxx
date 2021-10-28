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
 * @file Image720p.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "Image720p.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

idl_msg::Image720p::Image720p()
{
    // m_header com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@36f0f1be

    // m_frame com.eprosima.idl.parser.typecode.ArrayTypeCode@157632c9
    memset(&m_frame, 0, (1280*720*3) * 1);

}

idl_msg::Image720p::~Image720p()
{


}

idl_msg::Image720p::Image720p(
        const Image720p& x)
{
    m_header = x.m_header;
    m_frame = x.m_frame;
}

idl_msg::Image720p::Image720p(
        Image720p&& x)
{
    m_header = std::move(x.m_header);
    m_frame = std::move(x.m_frame);
}

idl_msg::Image720p& idl_msg::Image720p::operator =(
        const Image720p& x)
{

    m_header = x.m_header;
    m_frame = x.m_frame;

    return *this;
}

idl_msg::Image720p& idl_msg::Image720p::operator =(
        Image720p&& x)
{

    m_header = std::move(x.m_header);
    m_frame = std::move(x.m_frame);

    return *this;
}

size_t idl_msg::Image720p::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += idl_msg::Header::getMaxCdrSerializedSize(current_alignment);
    current_alignment += ((1280*720*3) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

size_t idl_msg::Image720p::getCdrSerializedSize(
        const idl_msg::Image720p& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += idl_msg::Header::getCdrSerializedSize(data.header(), current_alignment);
    if ((1280*720*3) > 0)
    {
        current_alignment += ((1280*720*3) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }


    return current_alignment - initial_alignment;
}

void idl_msg::Image720p::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_header;
    scdr << m_frame;


}

void idl_msg::Image720p::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_header;
    dcdr >> m_frame;

}

/*!
 * @brief This function copies the value in member header
 * @param _header New value to be copied in member header
 */
void idl_msg::Image720p::header(
        const idl_msg::Header& _header)
{
    m_header = _header;
}

/*!
 * @brief This function moves the value in member header
 * @param _header New value to be moved in member header
 */
void idl_msg::Image720p::header(
        idl_msg::Header&& _header)
{
    m_header = std::move(_header);
}

/*!
 * @brief This function returns a constant reference to member header
 * @return Constant reference to member header
 */
const idl_msg::Header& idl_msg::Image720p::header() const
{
    return m_header;
}

/*!
 * @brief This function returns a reference to member header
 * @return Reference to member header
 */
idl_msg::Header& idl_msg::Image720p::header()
{
    return m_header;
}
/*!
 * @brief This function copies the value in member frame
 * @param _frame New value to be copied in member frame
 */
void idl_msg::Image720p::frame(
        const std::array<uint8_t, 1280*720*3>& _frame)
{
    m_frame = _frame;
}

/*!
 * @brief This function moves the value in member frame
 * @param _frame New value to be moved in member frame
 */
void idl_msg::Image720p::frame(
        std::array<uint8_t, 1280*720*3>&& _frame)
{
    m_frame = std::move(_frame);
}

/*!
 * @brief This function returns a constant reference to member frame
 * @return Constant reference to member frame
 */
const std::array<uint8_t, 1280*720*3>& idl_msg::Image720p::frame() const
{
    return m_frame;
}

/*!
 * @brief This function returns a reference to member frame
 * @return Reference to member frame
 */
std::array<uint8_t, 1280*720*3>& idl_msg::Image720p::frame()
{
    return m_frame;
}

size_t idl_msg::Image720p::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;





    return current_align;
}

bool idl_msg::Image720p::isKeyDefined()
{
    return false;
}

void idl_msg::Image720p::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
      
}

