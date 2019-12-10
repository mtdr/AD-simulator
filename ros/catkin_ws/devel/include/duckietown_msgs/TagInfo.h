// Generated by gencpp from file duckietown_msgs/TagInfo.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_TAGINFO_H
#define DUCKIETOWN_MSGS_MESSAGE_TAGINFO_H


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
struct TagInfo_
{
  typedef TagInfo_<ContainerAllocator> Type;

  TagInfo_()
    : header()
    , id(0)
    , tag_type(0)
    , street_name()
    , traffic_sign_type(0)
    , vehicle_name()
    , location(0.0)  {
    }
  TagInfo_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , id(0)
    , tag_type(0)
    , street_name(_alloc)
    , traffic_sign_type(0)
    , vehicle_name(_alloc)
    , location(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _id_type;
  _id_type id;

   typedef uint8_t _tag_type_type;
  _tag_type_type tag_type;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _street_name_type;
  _street_name_type street_name;

   typedef uint8_t _traffic_sign_type_type;
  _traffic_sign_type_type traffic_sign_type;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _vehicle_name_type;
  _vehicle_name_type vehicle_name;

   typedef float _location_type;
  _location_type location;



  enum {
    S_NAME = 0u,
    SIGN = 1u,
    LIGHT = 2u,
    LOCALIZE = 3u,
    VEHICLE = 4u,
    STOP = 5u,
    YIELD = 6u,
    NO_RIGHT_TURN = 7u,
    NO_LEFT_TURN = 8u,
    ONEWAY_RIGHT = 9u,
    ONEWAY_LEFT = 10u,
    FOUR_WAY = 11u,
    RIGHT_T_INTERSECT = 12u,
    LEFT_T_INTERSECT = 13u,
    T_INTERSECTION = 14u,
    DO_NOT_ENTER = 15u,
    PEDESTRIAN = 16u,
    T_LIGHT_AHEAD = 17u,
    DUCK_CROSSING = 18u,
  };


  typedef boost::shared_ptr< ::duckietown_msgs::TagInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::duckietown_msgs::TagInfo_<ContainerAllocator> const> ConstPtr;

}; // struct TagInfo_

typedef ::duckietown_msgs::TagInfo_<std::allocator<void> > TagInfo;

typedef boost::shared_ptr< ::duckietown_msgs::TagInfo > TagInfoPtr;
typedef boost::shared_ptr< ::duckietown_msgs::TagInfo const> TagInfoConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::duckietown_msgs::TagInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::duckietown_msgs::TagInfo_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::duckietown_msgs::TagInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::TagInfo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::TagInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::TagInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::TagInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::TagInfo_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::duckietown_msgs::TagInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1a498b8e4c39d9cac00bfc0db23fe7f0";
  }

  static const char* value(const ::duckietown_msgs::TagInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1a498b8e4c39d9caULL;
  static const uint64_t static_value2 = 0xc00bfc0db23fe7f0ULL;
};

template<class ContainerAllocator>
struct DataType< ::duckietown_msgs::TagInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duckietown_msgs/TagInfo";
  }

  static const char* value(const ::duckietown_msgs::TagInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::duckietown_msgs::TagInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
int32 id\n\
\n\
# (StreetName, TrafficSign, Localization, Vehicle…)\n\
uint8 tag_type\n\
\n\
uint8 S_NAME=0\n\
uint8 SIGN=1	\n\
uint8 LIGHT=2\n\
uint8 LOCALIZE=3\n\
uint8 VEHICLE=4\n\
\n\
string street_name\n\
\n\
uint8 traffic_sign_type\n\
# (12 possible traffic sign types)\n\
\n\
uint8 STOP=5\n\
uint8 YIELD=6\n\
uint8 NO_RIGHT_TURN=7\n\
uint8 NO_LEFT_TURN=8\n\
uint8 ONEWAY_RIGHT=9\n\
uint8 ONEWAY_LEFT=10\n\
uint8 FOUR_WAY=11\n\
uint8 RIGHT_T_INTERSECT=12\n\
uint8 LEFT_T_INTERSECT=13\n\
uint8 T_INTERSECTION=14\n\
uint8 DO_NOT_ENTER=15\n\
uint8 PEDESTRIAN=16\n\
uint8 T_LIGHT_AHEAD=17\n\
uint8 DUCK_CROSSING=18\n\
\n\
string vehicle_name\n\
\n\
# Just added a single number for location. Probably want to use Vector2D.msg, but I get errors when I try to add it.\n\
float32 location\n\
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

  static const char* value(const ::duckietown_msgs::TagInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::duckietown_msgs::TagInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.id);
      stream.next(m.tag_type);
      stream.next(m.street_name);
      stream.next(m.traffic_sign_type);
      stream.next(m.vehicle_name);
      stream.next(m.location);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TagInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::duckietown_msgs::TagInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::duckietown_msgs::TagInfo_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "tag_type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.tag_type);
    s << indent << "street_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.street_name);
    s << indent << "traffic_sign_type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.traffic_sign_type);
    s << indent << "vehicle_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.vehicle_name);
    s << indent << "location: ";
    Printer<float>::stream(s, indent + "  ", v.location);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_TAGINFO_H
