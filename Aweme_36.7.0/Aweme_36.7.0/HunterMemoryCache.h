@class YYMemoryCache;

@interface HunterMemoryCache : NSObject

@property (retain, nonatomic) YYMemoryCache *cache;

+ (void)removeHunterCommentManager:(id)a0;
+ (void)cacheHunterCommentManager:(id)a0;
+ (void)cacheHunterAppPlugin:(id)a0;
+ (void)cacheHunterContainer:(id)a0;
+ (void)removeHunterContainer:(id)a0;
+ (void)removeHunterAppPlugin:(id)a0;
+ (id)keyFromSchemaString:(id)a0;
+ (id)objectForKey:(id)a0;
+ (void)removeObjectForKey:(id)a0;
+ (id)sharedManager;
+ (void)setObject:(id)a0 forKey:(id)a1;

- (void).cxx_destruct;

@end
