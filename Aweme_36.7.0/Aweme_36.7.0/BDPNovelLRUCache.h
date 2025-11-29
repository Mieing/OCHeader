@class BDPNovelLRUNode, NSMutableDictionary;

@interface BDPNovelLRUCache : NSObject

@property (retain, nonatomic) BDPNovelLRUNode *headNode;
@property (retain, nonatomic) BDPNovelLRUNode *tailNode;
@property (retain, nonatomic) NSMutableDictionary *nodeMap;
@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long capacity;

- (void)moveNodeToTop:(id)a0;
- (void)insertNodeAtTop:(id)a0;
- (void)eliminate;
- (id)popNodeFromEnd;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)removeAllObjects;
- (id)allObjects;
- (void)removeObjectForKey:(id)a0;
- (void)setup;
- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)count;
- (id)allKeys;
- (void)removeNode:(id)a0;

@end
