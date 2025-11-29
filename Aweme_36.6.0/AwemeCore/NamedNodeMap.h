@class NSMutableDictionary;

@interface NamedNodeMap : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableDictionary *internalDictionary;
@property (retain, nonatomic) NSMutableDictionary *internalDictionaryOfNamespaces;
@property (readonly) unsigned long long length;

- (id)setNamedItemNS:(id)a0 inNodeNamespace:(id)a1;
- (id)allNodesUnsortedDOM1;
- (id)allNodesUnsortedDOM2;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)item:(unsigned long long)a0;
- (id)getNamedItem:(id)a0;
- (id)setNamedItem:(id)a0;
- (id)removeNamedItem:(id)a0;
- (id)getNamedItemNS:(id)a0 localName:(id)a1;
- (id)setNamedItemNS:(id)a0;
- (id)removeNamedItemNS:(id)a0 localName:(id)a1;

@end
