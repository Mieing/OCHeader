@class YYMemoryCache;

@interface SearchDynamicCache : NSObject

@property (retain, nonatomic) YYMemoryCache *cache;

+ (id)objectForKey:(id)a0;
+ (void)removeObjectForKey:(id)a0;
+ (id)sharedManager;
+ (void)setObject:(id)a0 forKey:(id)a1;

- (void).cxx_destruct;

@end
