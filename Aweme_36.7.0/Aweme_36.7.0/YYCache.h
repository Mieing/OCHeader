@class NSString, YYDiskCache, YYMemoryCache;

@interface YYCache : NSObject

@property (readonly, copy) NSString *name;
@property (readonly) YYMemoryCache *memoryCache;
@property (readonly) YYDiskCache *diskCache;

+ (id)cacheWithPath:(id)a0;
+ (void)setYYCacheTrimEnableAfterMemoryWarning:(BOOL)a0 expirationSeconds:(long long)a1;
+ (void)setYYCacheLRUDisable:(BOOL)a0;
+ (id)cacheWithName:(id)a0;

- (void)removeAllObjectsWithBlock:(id /* block */)a0;
- (void)setObject:(id)a0 forKey:(id)a1 withBlock:(id /* block */)a2;
- (void)removeObjectForKey:(id)a0 withBlock:(id /* block */)a1;
- (void)objectForKey:(id)a0 withBlock:(id /* block */)a1;
- (void)containsObjectForKey:(id)a0 withBlock:(id /* block */)a1;
- (void)removeAllObjectsWithProgressBlock:(id /* block */)a0 endBlock:(id /* block */)a1;
- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)objectForKey:(id)a0;
- (void)addEntriesFromDictionary:(id)a0;
- (id)init;
- (void)removeAllObjects;
- (BOOL)containsObjectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (id)initWithName:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
