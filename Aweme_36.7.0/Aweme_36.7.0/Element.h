@class NSString;

@interface Element : Node

@property (retain, nonatomic) NSString *tagName;

- (id)initWithLocalName:(id)a0 attributes:(id)a1;
- (id)initWithQualifiedName:(id)a0 inNameSpaceURI:(id)a1 attributes:(id)a2;
- (void).cxx_destruct;
- (BOOL)hasAttribute:(id)a0;
- (void)setAttribute:(id)a0 value:(id)a1;
- (id)getElementsByTagName:(id)a0;
- (id)getAttribute:(id)a0;
- (id)getAttributeNode:(id)a0;
- (void)removeAttribute:(id)a0;
- (id)getElementsByTagNameNS:(id)a0 localName:(id)a1;
- (id)setAttributeNode:(id)a0;
- (id)removeAttributeNode:(id)a0;
- (id)getAttributeNS:(id)a0 localName:(id)a1;
- (void)setAttributeNS:(id)a0 qualifiedName:(id)a1 value:(id)a2;
- (id)getAttributeNodeNS:(id)a0 localName:(id)a1;

@end
