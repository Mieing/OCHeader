@class NSString, NodeList, NamedNodeMap, Document;

@interface Node : NSObject

@property (retain, nonatomic) NSString *nodeName;
@property (retain, nonatomic) NSString *nodeValue;
@property (nonatomic) int nodeType;
@property (weak, nonatomic) Node *parentNode;
@property (retain, nonatomic) NodeList *childNodes;
@property (retain, nonatomic) NamedNodeMap *attributes;
@property (weak, nonatomic) Document *ownerDocument;
@property (retain, nonatomic) NSString *namespaceURI;
@property (retain, nonatomic) NSString *prefix;
@property (retain, nonatomic) NSString *localName;
@property (readonly, weak, nonatomic) Node *firstChild;
@property (readonly, weak, nonatomic) Node *lastChild;
@property (readonly, weak, nonatomic) Node *previousSibling;
@property (readonly, weak, nonatomic) Node *nextSibling;
@property (nonatomic) BOOL hasChildNodes;
@property (nonatomic) BOOL hasAttributes;
@property (readonly, weak, nonatomic) NSString *textContent;

- (id)initType:(int)a0 name:(id)a1 inNamespace:(id)a2;
- (void)postInitNamespaceHandling:(id)a0;
- (void)appendXMLToString:(id)a0 availableNamespaces:(id)a1 activeNamespaces:(id)a2;
- (id)initType:(int)a0 name:(id)a1 value:(id)a2 inNamespace:(id)a3;
- (id)initType:(int)a0 name:(id)a1;
- (id)initType:(int)a0 name:(id)a1 value:(id)a2;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)removeChild:(id)a0;
- (id)appendChild:(id)a0;
- (id)insertBefore:(id)a0 refChild:(id)a1;
- (id)replaceChild:(id)a0 oldChild:(id)a1;

@end
