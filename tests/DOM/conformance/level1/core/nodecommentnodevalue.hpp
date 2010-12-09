
/*
This c++ source file was generated by for Arabica
and is a derived work from the source document.
The source document contained the following notice:


Copyright (c) 2001 World Wide Web Consortium,
(Massachusetts Institute of Technology, Institut National de
Recherche en Informatique et en Automatique, Keio University). All
Rights Reserved. This program is distributed under the W3C's Software
Intellectual Property License. This program is distributed in the
hope that it will be useful, but WITHOUT ANY WARRANTY; without even
the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
PURPOSE.
See W3C License http://www.w3.org/Consortium/Legal/ for more details.

*/

#ifndef test_nodecommentnodevalue
#define test_nodecommentnodevalue

#include "dom_conf_test.hpp"

/**
 *     The string returned by the "getNodeValue()" method for a 
 *     Comment Node is the content of the comment.
 *     
 *     Retrieve the comment in the XML file and   
 *     check the string returned by the "getNodeValue()" method. 
 *     It should be equal to "This is comment number 1".
* @author NIST
* @author Mary Brady
* @see <a href="http://www.w3.org/TR/1998/REC-DOM-Level-1-19981001/level-one-core#ID-F68D080">http://www.w3.org/TR/1998/REC-DOM-Level-1-19981001/level-one-core#ID-F68D080</a>
* @see <a href="http://www.w3.org/TR/1998/REC-DOM-Level-1-19981001/level-one-core#ID-1728279322">http://www.w3.org/TR/1998/REC-DOM-Level-1-19981001/level-one-core#ID-1728279322</a>
*/

template<class string_type, class string_adaptor>
class nodecommentnodevalue : public DOMTestCase<string_type, string_adaptor> 
{
   public: 
     nodecommentnodevalue(std::string name) : DOMTestCase(name)
     {

       //   check if loaded documents are supported for content type
       const std::string contentType = getContentType();
    preload(contentType, "staff", false);
    }

  typedef typename DOMTestCase<string_type, string_adaptor> baseT;
  using baseT::DOMImplementation;
  using baseT::Document; 
  using baseT::DocumentType;
  using baseT::DocumentFragment; 
  using baseT::Node;
  using baseT::Element;
  using baseT::Attr;
  using baseT::NodeList;
  using baseT::NamedNodeMap;
  using baseT::Entity;
  using baseT::EntityReference;
  using baseT::CharacterData;
  using baseT::CDATASection;
  using baseT::Text;
  using baseT::Comment;
  using baseT::ProcessingInstruction;
  using baseT::Notation;

  typedef typename Arabica::DOM::DOMException DOMException;
  typedef string_type String;
  typedef string_adaptor SA;
  typedef bool boolean;

   /*
    * Runs the test case.
    */
   void runTest()
   {
      Document doc;
      NodeList elementList;
      Node commentNode;
      String commentName;
      String commentValue;
      doc = (Document) load("staff", false);
      elementList = doc.getChildNodes();
      for (int indexN65600 = 0; indexN65600 != elementList.getLength(); indexN65600++) {
          commentNode = (Node) elementList.item(indexN65600);
    commentName = commentNode.getNodeName();
      
      if (equals("#comment", commentName)) {
          commentValue = commentNode.getNodeValue();
      assertEquals(" This is comment number 1.", commentValue);
  }
      }
      
   }
  
   /*
    *  Gets URI that identifies the test.
    */
   std::string getTargetURI() const
   {
      return "http://www.w3.org/2001/DOM-Test-Suite/level1/core/nodecommentnodevalue";
   }
};

#endif