@class NSObject, NSMapTable, LynxLruCacheNode;
@protocol OS_dispatch_queue;

@interface LynxLruCache : NSObject {
    id /* block */ createBlock;
    id /* block */ evictedBlock;
}

@property (retain, nonatomic) NSMapTable *dictionary;
@property (retain, nonatomic) LynxLruCacheNode *rootNode;
@property (retain, nonatomic) LynxLruCacheNode *tailNode;
@property (nonatomic) unsigned long long size;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) unsigned long long capacity;

- (id)initWithCapacity:(unsigned long long)a0 recreate:(id /* block */)a1 viewEvicted:(id /* block */)a2;
- (void)putNodeToTop:(id)a0;
- (void)checkSpace;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)commonSetup;

@end
