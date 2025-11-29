@class NSCache;

@interface AWEIMMsgRefreshStorage : NSObject

@property (retain, nonatomic) NSCache *memoryCache;

+ (id)getUniqueKey:(id)a0 uniqueId:(id)a1;
+ (id)sharedInstance;

- (id)getObjectWith:(id)a0;
- (void)setObjectForKey:(id)a0 value:(id)a1;
- (id)p_memeryCacheObjectForKey:(id)a0;
- (id)p_storageCacheObjectForKey:(id)a0;
- (void)p_setMemeryCacheObject:(id)a0 forKey:(id)a1;
- (void)p_setStorageCacheObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;

@end
