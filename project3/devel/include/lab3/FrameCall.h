// Generated by gencpp from file lab3/FrameCall.msg
// DO NOT EDIT!


#ifndef LAB3_MESSAGE_FRAMECALL_H
#define LAB3_MESSAGE_FRAMECALL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Transform.h>

namespace lab3
{
template <class ContainerAllocator>
struct FrameCall_
{
  typedef FrameCall_<ContainerAllocator> Type;

  FrameCall_()
    : rbt()
    , name()
    , to_add(false)  {
    }
  FrameCall_(const ContainerAllocator& _alloc)
    : rbt(_alloc)
    , name(_alloc)
    , to_add(false)  {
    }



   typedef  ::geometry_msgs::Transform_<ContainerAllocator>  _rbt_type;
  _rbt_type rbt;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef uint8_t _to_add_type;
  _to_add_type to_add;




  typedef boost::shared_ptr< ::lab3::FrameCall_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::lab3::FrameCall_<ContainerAllocator> const> ConstPtr;

}; // struct FrameCall_

typedef ::lab3::FrameCall_<std::allocator<void> > FrameCall;

typedef boost::shared_ptr< ::lab3::FrameCall > FrameCallPtr;
typedef boost::shared_ptr< ::lab3::FrameCall const> FrameCallConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::lab3::FrameCall_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::lab3::FrameCall_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace lab3

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'lab3': ['/home/ee106/ee106b/project3/src/lab3/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::lab3::FrameCall_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::lab3::FrameCall_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lab3::FrameCall_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lab3::FrameCall_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lab3::FrameCall_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lab3::FrameCall_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::lab3::FrameCall_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dd65101815e67ba4d73d834625689ad5";
  }

  static const char* value(const ::lab3::FrameCall_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdd65101815e67ba4ULL;
  static const uint64_t static_value2 = 0xd73d834625689ad5ULL;
};

template<class ContainerAllocator>
struct DataType< ::lab3::FrameCall_<ContainerAllocator> >
{
  static const char* value()
  {
    return "lab3/FrameCall";
  }

  static const char* value(const ::lab3::FrameCall_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::lab3::FrameCall_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Transform rbt\n\
string name\n\
bool to_add\n\
\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Transform\n\
# This represents the transform between two coordinate frames in free space.\n\
\n\
Vector3 translation\n\
Quaternion rotation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::lab3::FrameCall_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::lab3::FrameCall_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.rbt);
      stream.next(m.name);
      stream.next(m.to_add);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct FrameCall_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::lab3::FrameCall_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::lab3::FrameCall_<ContainerAllocator>& v)
  {
    s << indent << "rbt: ";
    s << std::endl;
    Printer< ::geometry_msgs::Transform_<ContainerAllocator> >::stream(s, indent + "  ", v.rbt);
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "to_add: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.to_add);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LAB3_MESSAGE_FRAMECALL_H
