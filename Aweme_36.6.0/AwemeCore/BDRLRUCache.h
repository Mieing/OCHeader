@class NSMutableDictionary, BDRLRUCacheNode;

@interface BDRLRUCache : NSObject

@property (retain, nonatomic) BDRLRUCacheNode *headNode;
@property (retain, nonatomic) BDRLRUCacheNode *tailNode;
@property (retain, nonatomic) NSMutableDictionary *nodeMap;
@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long capacity;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } rwlock;

- (void)moveNodeToTop:(id)a0;
- (void)insertNodeAtTop:(id)a0;
- (void)eliminate;
- (id)popNodeFromEnd;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)removeAllObjects;
- (void)print;
- (id)allObjects;
- (void)removeObjectForKey:(id)a0;
- (void)dealloc;
- (void)setup;
- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)count;
- (id)allKeys;
- (void)removeNode:(id)a0;

@end
