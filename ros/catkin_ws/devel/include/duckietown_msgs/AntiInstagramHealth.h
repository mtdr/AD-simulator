// Generated by gencpp from file duckietown_msgs/AntiInstagramHealth.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_ANTIINSTAGRAMHEALTH_H
#define DUCKIETOWN_MSGS_MESSAGE_ANTIINSTAGRAMHEALTH_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace duckietown_msgs
{
template <class ContainerAllocator>
struct AntiInstagramHealth_
{
  typedef AntiInstagramHealth_<ContainerAllocator> Type;

  AntiInstagramHealth_()
    : header()
    , J1(0.0)
    , J2(0.0)
    , J3(0.0)  {
    }
  AntiInstagramHealth_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , J1(0.0)
    , J2(0.0)
    , J3(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _J1_type;
  _J1_type J1;

   typedef float _J2_type;
  _J2_type J2;

   typedef float _J3_type;
  _J3_type J3;





  typedef boost::shared_ptr< ::duckietown_msgs::AntiInstagramHealth_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::duckietown_msgs::AntiInstagramHealth_<ContainerAllocator> const> ConstPtr;

}; // struct AntiInstagramHealth_

typedef ::duckietown_msgs::AntiInstagramHealth_<std::allocator<void> > AntiInstagramHealth;

typedef boost::shared_ptr< ::duckietown_msgs::AntiInstagramHealth > AntiInstagramHealthPtr;
typedef boost::shared_ptr< ::duckietown_msgs::AntiInstagramHealth const> AntiInstagramHealthConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::duckietown_msgs::AntiInstagramHealth_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::duckietown_msgs::AntiInstagramHealth_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace duckietown_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'duckietown_msgs': ['/home/anton/github/aido-auto/ros/catkin_ws/src/duckietown_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::AntiInstagramHealth_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::AntiInstagramHealth_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::AntiInstagramHealth_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::AntiInstagramHealth_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::AntiInstagramHealth_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::AntiInstagramHealth_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::duckietown_msgs::AntiInstagramHealth_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3a6e17ea173536e892b4dde76e515fb4";
  }

  static const char* value(const ::duckietown_msgs::AntiInstagramHealth_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3a6e17ea173536e8ULL;
  static const uint64_t static_value2 = 0x92b4dde76e515fb4ULL;
};

template<class ContainerAllocator>
struct DataType< ::duckietown_msgs::AntiInstagramHealth_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duckietown_msgs/AntiInstagramHealth";
  }

  static const char* value(const ::duckietown_msgs::AntiInstagramHealth_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::duckietown_msgs::AntiInstagramHealth_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
float32 J1\n\
float32 J2\n\
float32 J3\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::duckietown_msgs::AntiInstagramHealth_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::duckietown_msgs::AntiInstagramHealth_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.J1);
      stream.next(m.J2);
      stream.next(m.J3);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AntiInstagramHealth_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::duckietown_msgs::AntiInstagramHealth_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::duckietown_msgs::AntiInstagramHealth_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "J1: ";
    Printer<float>::stream(s, indent + "  ", v.J1);
    s << indent << "J2: ";
    Printer<float>::stream(s, indent + "  ", v.J2);
    s << indent << "J3: ";
    Printer<float>::stream(s, indent + "  ", v.J3);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_ANTIINSTAGRAMHEALTH_H
