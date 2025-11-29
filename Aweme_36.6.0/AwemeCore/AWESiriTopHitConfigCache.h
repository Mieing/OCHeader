@class NSDictionary, MMKV;

@interface AWESiriTopHitConfigCache : NSObject

@property (retain, nonatomic) MMKV *mmkv;
@property (copy, nonatomic) NSDictionary *cacheDict;

+ (id)sharedInstance;

- (BOOL)isCacheExpired:(id)a0;
- (id)getCachedConfig;
- (id)loadConfigFromCache;
- (void)saveConfigToCache:(id)a0 requestGDLabel:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)clearCache;
- (BOOL)isCacheValid;

@end
