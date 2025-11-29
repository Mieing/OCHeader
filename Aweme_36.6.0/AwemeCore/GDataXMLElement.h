@interface GDataXMLElement : BDGDataXMLNode

+ (void)fixUpNamespacesForNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 graftingToTreeNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a1;
+ (void)deleteNamespacePtr:(struct _xmlNs { struct _xmlNs *x0; int x1; char *x2; char *x3; void *x4; struct _xmlDoc *x5; } *)a0 fromXMLNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a1;
+ (void)fixQualifiedNamesForNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 graftingToTreeNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a1;
+ (void)fixDuplicateNamespacesForNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 graftingToTreeNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a1 namespaceSubstitutionMap:(id)a2;
+ (void)fixUpNamespacesForNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 graftingToTreeNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a1 namespaceSubstitutionMap:(id)a2;

- (id)elementsForName:(id)a0;
- (id)elementsForLocalName:(id)a0 URI:(id)a1;
- (id)attributeForXMLNode:(struct _xmlAttr { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlAttr *x6; struct _xmlAttr *x7; struct _xmlDoc *x8; struct _xmlNs *x9; int x10; void *x11; } *)a0;
- (id)initWithXMLString:(id)a0 error:(id *)a1;
- (id)attributeForLocalName:(id)a0 URI:(id)a1;
- (id)resolvePrefixForNamespaceURI:(id)a0;
- (id)namespaces;
- (id)attributes;
- (void)addAttribute:(id)a0;
- (void)setNamespaces:(id)a0;
- (void)addChild:(id)a0;
- (id)attributeForName:(id)a0;
- (void)removeChild:(id)a0;
- (void)addNamespace:(id)a0;

@end
