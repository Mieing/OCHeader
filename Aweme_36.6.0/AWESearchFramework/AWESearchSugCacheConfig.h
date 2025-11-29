@class NSMutableDictionary;

@interface AWESearchSugCacheConfig : NSObject

@property (retain, nonatomic) NSMutableDictionary *cacheConfigDict;
@property (nonatomic) BOOL enableCache;
@property (nonatomic) unsigned long long cacheMaxCount;

+ (id)sharedInstance;

- (void)saveCacheConfigDict;
- (void)updateCacheConfig:(id)a0;
- (void).cxx_destruct;

@end
