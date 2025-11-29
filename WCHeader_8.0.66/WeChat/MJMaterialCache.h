@class NSDictionary;
@protocol MJMaterialCacheDelegate;

@interface MJMaterialCache : NSObject

@property (retain, nonatomic) NSDictionary *cacheMap;
@property (weak, nonatomic) id<MJMaterialCacheDelegate> delegate;

+ (id)createCacheMapFromConfigs:(id)a0;
+ (id)loadLRUCacheFromMMKVWithKey:(id)a0 capacity:(unsigned long long)a1;
+ (id)createCacheWithCapacity:(unsigned long long)a0 allKeysAndValues:(id)a1 comparator:(id /* block */)a2;
+ (id)loadCacheDictFromMMKVWithKey:(id)a0;
+ (void)saveCacheToMMKV:(id)a0 key:(id)a1;

- (id)initWithConfigs:(id)a0;
- (id)configForKey:(id)a0;
- (id)cacheForKey:(id)a0;
- (unsigned long long)capacityForCache:(id)a0;
- (id)allMaterialIDsInCache:(id)a0;
- (id)allItemsInCache:(id)a0;
- (id)itemWithID:(id)a0 inCache:(id)a1;
- (BOOL)containsItemWithID:(id)a0 inCache:(id)a1;
- (void)addItem:(id)a0 inCache:(id)a1;
- (void)removeItem:(id)a0 inCache:(id)a1;
- (void)clearCache:(id)a0;
- (void)onCacheDidUpdate:(id)a0 withKey:(id)a1;
- (void).cxx_destruct;

@end
