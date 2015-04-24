/* Auto-generated by genmsg_cpp for file /home/robo328d/fuerte_workspace/ee_cart_imped/ee_cart_imped_msgs/msg/StiffPoint.msg */
#ifndef EE_CART_IMPED_MSGS_MESSAGE_STIFFPOINT_H
#define EE_CART_IMPED_MSGS_MESSAGE_STIFFPOINT_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "std_msgs/Header.h"
#include "geometry_msgs/Pose.h"
#include "geometry_msgs/Wrench.h"

namespace ee_cart_imped_msgs
{
template <class ContainerAllocator>
struct StiffPoint_ {
  typedef StiffPoint_<ContainerAllocator> Type;

  StiffPoint_()
  : header()
  , pose()
  , wrench_or_stiffness()
  , isForceX(false)
  , isForceY(false)
  , isForceZ(false)
  , isTorqueX(false)
  , isTorqueY(false)
  , isTorqueZ(false)
  , time_from_start()
  {
  }

  StiffPoint_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , pose(_alloc)
  , wrench_or_stiffness(_alloc)
  , isForceX(false)
  , isForceY(false)
  , isForceZ(false)
  , isTorqueX(false)
  , isTorqueY(false)
  , isTorqueZ(false)
  , time_from_start()
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_type;
   ::geometry_msgs::Pose_<ContainerAllocator>  pose;

  typedef  ::geometry_msgs::Wrench_<ContainerAllocator>  _wrench_or_stiffness_type;
   ::geometry_msgs::Wrench_<ContainerAllocator>  wrench_or_stiffness;

  typedef uint8_t _isForceX_type;
  uint8_t isForceX;

  typedef uint8_t _isForceY_type;
  uint8_t isForceY;

  typedef uint8_t _isForceZ_type;
  uint8_t isForceZ;

  typedef uint8_t _isTorqueX_type;
  uint8_t isTorqueX;

  typedef uint8_t _isTorqueY_type;
  uint8_t isTorqueY;

  typedef uint8_t _isTorqueZ_type;
  uint8_t isTorqueZ;

  typedef ros::Duration _time_from_start_type;
  ros::Duration time_from_start;


  typedef boost::shared_ptr< ::ee_cart_imped_msgs::StiffPoint_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ee_cart_imped_msgs::StiffPoint_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct StiffPoint
typedef  ::ee_cart_imped_msgs::StiffPoint_<std::allocator<void> > StiffPoint;

typedef boost::shared_ptr< ::ee_cart_imped_msgs::StiffPoint> StiffPointPtr;
typedef boost::shared_ptr< ::ee_cart_imped_msgs::StiffPoint const> StiffPointConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::ee_cart_imped_msgs::StiffPoint_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::ee_cart_imped_msgs::StiffPoint_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace ee_cart_imped_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::ee_cart_imped_msgs::StiffPoint_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::ee_cart_imped_msgs::StiffPoint_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::ee_cart_imped_msgs::StiffPoint_<ContainerAllocator> > {
  static const char* value() 
  {
    return "2b6b597656e805a0ca2e1de07dc31a66";
  }

  static const char* value(const  ::ee_cart_imped_msgs::StiffPoint_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x2b6b597656e805a0ULL;
  static const uint64_t static_value2 = 0xca2e1de07dc31a66ULL;
};

template<class ContainerAllocator>
struct DataType< ::ee_cart_imped_msgs::StiffPoint_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ee_cart_imped_msgs/StiffPoint";
  }

  static const char* value(const  ::ee_cart_imped_msgs::StiffPoint_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::ee_cart_imped_msgs::StiffPoint_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
#The pose to achieve in the stiffness directions\n\
geometry_msgs/Pose pose\n\
#Wrench or stiffness for each dimension\n\
geometry_msgs/Wrench wrench_or_stiffness\n\
#The following are True if a force/torque should\n\
#be exerted and False if a stiffness should be used.\n\
bool isForceX\n\
bool isForceY\n\
bool isForceZ\n\
bool isTorqueX\n\
bool isTorqueY\n\
bool isTorqueZ\n\
#The time from the start of the trajectory that this\n\
#point should be achieved.\n\
duration time_from_start\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Wrench\n\
# This represents force in free space, seperated into \n\
# it's linear and angular parts.  \n\
Vector3  force\n\
Vector3  torque\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const  ::ee_cart_imped_msgs::StiffPoint_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::ee_cart_imped_msgs::StiffPoint_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::ee_cart_imped_msgs::StiffPoint_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::ee_cart_imped_msgs::StiffPoint_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.pose);
    stream.next(m.wrench_or_stiffness);
    stream.next(m.isForceX);
    stream.next(m.isForceY);
    stream.next(m.isForceZ);
    stream.next(m.isTorqueX);
    stream.next(m.isTorqueY);
    stream.next(m.isTorqueZ);
    stream.next(m.time_from_start);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct StiffPoint_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ee_cart_imped_msgs::StiffPoint_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::ee_cart_imped_msgs::StiffPoint_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "pose: ";
s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "wrench_or_stiffness: ";
s << std::endl;
    Printer< ::geometry_msgs::Wrench_<ContainerAllocator> >::stream(s, indent + "  ", v.wrench_or_stiffness);
    s << indent << "isForceX: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isForceX);
    s << indent << "isForceY: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isForceY);
    s << indent << "isForceZ: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isForceZ);
    s << indent << "isTorqueX: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isTorqueX);
    s << indent << "isTorqueY: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isTorqueY);
    s << indent << "isTorqueZ: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isTorqueZ);
    s << indent << "time_from_start: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.time_from_start);
  }
};


} // namespace message_operations
} // namespace ros

#endif // EE_CART_IMPED_MSGS_MESSAGE_STIFFPOINT_H

