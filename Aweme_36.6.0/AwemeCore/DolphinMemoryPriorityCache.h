@class NSString, NSMutableDictionary, NSRecursiveLock;
@protocol DolphinMemoryCacheDelegate;

@interface DolphinMemoryPriorityCache : NSObject <DolphinMemoryCache> {
    NSMutableDictionary *_backing;
    NSRecursiveLock *_lock;
}

@property (weak, nonatomic) id<DolphinMemoryCacheDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sortByPriority;
- (void)improvePriority:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1 priority:(double)a2;
- (void)filterCacheObject:(id /* block */)a0;
- (void)removeOldestUntilCount:(long long)a0;
- (void)improvePriority:(double)a0 forKey:(id)a1;
- (void)see;
- (id)allPriorityNodeValues;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)removeAllObjects;
- (id)allValues;
- (void)removeObjectForKey:(id)a0;
- (long long)count;

@end
