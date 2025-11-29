@class NSString, NSArray;

@interface BDGDataXMLNode : NSObject {
    struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *xmlNode_;
    BOOL shouldFreeXMLNode_;
    NSString *cachedName_;
    NSArray *cachedChildren_;
    NSArray *cachedAttributes_;
}

+ (id)elementWithName:(id)a0;
+ (id)elementWithName:(id)a0 stringValue:(id)a1;
+ (id)nodeConsumingXMLNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0;
+ (id)localNameForName:(id)a0;
+ (id)nodeBorrowingXMLNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0;
+ (id)elementWithName:(id)a0 URI:(id)a1;
+ (id)attributeWithName:(id)a0 URI:(id)a1 stringValue:(id)a2;
+ (id)textWithStringValue:(id)a0;
+ (id)namespaceWithName:(id)a0 stringValue:(id)a1;
+ (id)prefixForName:(id)a0;
+ (void)initialize;
+ (id)attributeWithName:(id)a0 stringValue:(id)a1;

- (id)initConsumingXMLNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0;
- (id)initBorrowingXMLNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0;
- (void)releaseCachedValues;
- (id)stringFromXMLString:(const char *)a0;
- (id)qualifiedName;
- (id)nodesForXPath:(id)a0 namespaces:(id)a1 error:(id *)a2;
- (struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)XMLNodeCopy;
- (struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)XMLNode;
- (BOOL)shouldFreeXMLNode;
- (void)setShouldFreeXMLNode:(BOOL)a0;
- (id)prefix;
- (id)URI;
- (id)children;
- (unsigned long long)kind;
- (id)localName;
- (id)description;
- (id)name;
- (void)setStringValue:(id)a0;
- (unsigned long long)childCount;
- (id)methodSignatureForSelector:(SEL)a0;
- (unsigned long long)hash;
- (id)stringValue;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)childAtIndex:(unsigned int)a0;
- (id)nodesForXPath:(id)a0 error:(id *)a1;
- (id)XMLString;

@end
