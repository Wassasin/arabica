/*
 * $Id$
 */
#ifdef _MSC_VER
#pragma warning(disable: 4786 4800)
#endif

#include <SAX/ParserConfig.h>
#include <SAX/wrappers/saxxerces.h>

namespace SAX
{

namespace XercesImpl
{
  void xerces_initializer::doInitialize()
  {
	  if(!count_)
      XERCES_CPP_NAMESPACE::XMLPlatformUtils::Initialize();
	  ++count_;
  } // doInitialize

  void xerces_initializer::doTerminate()
  {
	  --count_;
	  if (!count_)
      XERCES_CPP_NAMESPACE::XMLPlatformUtils::Terminate();
  } // doTerminate

  int xerces_initializer::count_ = 0;
} //namespace xerces_implemenation_helper

} // namespace SAX
// end of file
