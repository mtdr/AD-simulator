// Generated by gencpp from file duckietown_msgs/Rects.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_RECTS_H
#define DUCKIETOWN_MSGS_MESSAGE_RECTS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <duckietown_msgs/Rect.h>

namespace duckietown_msgs
{
template <class ContainerAllocator>
struct Rects_
{
  typedef Rects_<ContainerAllocator> Type;

  Rects_()
    : rects()  {
    }
  Rects_(const ContainerAllocator& _alloc)
    : rects(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::duckietown_msgs::Rect_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::duckietown_msgs::Rect_<ContainerAllocator> >::other >  _rects_type;
  _rects_type rects;





  typedef boost::shared_ptr< ::duckietown_msgs::Rects_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::duckietown_msgs::Rects_<ContainerAllocator> const> ConstPtr;

}; // struct Rects_

typedef ::duckietown_msgs::Rects_<std::allocator<void> > Rects;

typedef boost::shared_ptr< ::duckietown_msgs::Rects > RectsPtr;
typedef boost::shared_ptr< ::duckietown_msgs::Rects const> RectsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::duckietown_msgs::Rects_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::duckietown_msgs::Rects_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace duckietown_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'duckietown_msgs': ['/home/anton/github/aido-auto/ros/catkin_ws/src/duckietown_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::Rects_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::Rects_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::Rects_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::Rects_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::Rects_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::Rects_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::duckietown_msgs::Rects_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f5b74b2b15b5d4d2f299389f9f4ca7f8";
  }

  static const char* value(const ::duckietown_msgs::Rects_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf5b74b2b15b5d4d2ULL;
  static const uint64_t static_value2 = 0xf299389f9f4ca7f8ULL;
};

template<class ContainerAllocator>
struct DataType< ::duckietown_msgs::Rects_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duckietown_msgs/Rects";
  }

  static const char* value(const ::duckietown_msgs::Rects_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::duckietown_msgs::Rects_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duckietown_msgs/Rect[] rects\n\
================================================================================\n\
MSG: duckietown_msgs/Rect\n\
# all in pixel coordinate\n\
# (x, y, w, h) defines a rectangle\n\
int32 x\n\
int32 y\n\
int32 w\n\
int32 h\n\
";
  }

  static const char* value(const ::duckietown_msgs::Rects_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::duckietown_msgs::Rects_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.rects);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Rects_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::duckietown_msgs::Rects_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::duckietown_msgs::Rects_<ContainerAllocator>& v)
  {
    s << indent << "rects[]" << std::endl;
    for (size_t i = 0; i < v.rects.size(); ++i)
    {
      s << indent << "  rects[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::duckietown_msgs::Rect_<ContainerAllocator> >::stream(s, indent + "    ", v.rects[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_RECTS_H
