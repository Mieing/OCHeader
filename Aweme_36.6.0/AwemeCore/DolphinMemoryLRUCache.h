@class NSRecursiveLock, NSString, NSMutableDictionary, LRUNode;
@protocol DolphinMemoryCacheDelegate;

@interface DolphinMemoryLRUCache : NSObject <DolphinMemoryCache> {
    NSMutableDictionary *_backing;
    LRUNode *_head;
    LRUNode *_tail;
    long long _count;
    NSRecursiveLock *_lock;
}

@property (weak, nonatomic) id<DolphinMemoryCacheDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pushFront:(id)a0;
- (id)allLRUNodeValues;
- (void)improvePriority:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1 priority:(double)a2;
- (void)filterCacheObject:(id /* block */)a0;
- (void)removeOldestUntilCount:(long long)a0;
- (void)improvePriority:(double)a0 forKey:(id)a1;
- (void)see;
- (void)remove:(id)a0;
- (void).cxx_destruct;
- (void)removeAll;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)removeAllObjects;
- (id)allValues;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (long long)count;

@end
