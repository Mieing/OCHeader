@class MMLRUCache, NSRecursiveLock;

@interface WCFinderThreadSafeLRUCache : NSObject

@property (retain, nonatomic) MMLRUCache *cache;
@property (retain, nonatomic) NSRecursiveLock *lock;

- (id)initWithCapacity:(unsigned int)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (void)removeAllObjects;
- (unsigned int)capacity;
- (unsigned long long)count;
- (id)allKeys;
- (id)allObjects;
- (id)allKeysAndObjects;
- (void).cxx_destruct;

@end
