/* Auto-generated by genmsg_cpp for file /home/skel/roboskel_workspace/sandbox/cord_pub/msg/Coords.msg */
#ifndef CORD_PUB_MESSAGE_COORDS_H
#define CORD_PUB_MESSAGE_COORDS_H
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


namespace cord_pub
{
template <class ContainerAllocator>
struct Coords_ {
  typedef Coords_<ContainerAllocator> Type;

  Coords_()
  : x(0.0)
  , y(0.0)
  , z(0.0)
  {
  }

  Coords_(const ContainerAllocator& _alloc)
  : x(0.0)
  , y(0.0)
  , z(0.0)
  {
  }

  typedef double _x_type;
  double x;

  typedef double _y_type;
  double y;

  typedef double _z_type;
  double z;


  typedef boost::shared_ptr< ::cord_pub::Coords_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cord_pub::Coords_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct Coords
typedef  ::cord_pub::Coords_<std::allocator<void> > Coords;

typedef boost::shared_ptr< ::cord_pub::Coords> CoordsPtr;
typedef boost::shared_ptr< ::cord_pub::Coords const> CoordsConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::cord_pub::Coords_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::cord_pub::Coords_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace cord_pub

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::cord_pub::Coords_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::cord_pub::Coords_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::cord_pub::Coords_<ContainerAllocator> > {
  static const char* value() 
  {
    return "4a842b65f413084dc2b10fb484ea7f17";
  }

  static const char* value(const  ::cord_pub::Coords_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x4a842b65f413084dULL;
  static const uint64_t static_value2 = 0xc2b10fb484ea7f17ULL;
};

template<class ContainerAllocator>
struct DataType< ::cord_pub::Coords_<ContainerAllocator> > {
  static const char* value() 
  {
    return "cord_pub/Coords";
  }

  static const char* value(const  ::cord_pub::Coords_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::cord_pub::Coords_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float64 x\n\
float64 y\n\
float64 z\n\
\n\
";
  }

  static const char* value(const  ::cord_pub::Coords_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::cord_pub::Coords_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::cord_pub::Coords_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.x);
    stream.next(m.y);
    stream.next(m.z);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Coords_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cord_pub::Coords_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::cord_pub::Coords_<ContainerAllocator> & v) 
  {
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<double>::stream(s, indent + "  ", v.z);
  }
};


} // namespace message_operations
} // namespace ros

#endif // CORD_PUB_MESSAGE_COORDS_H
