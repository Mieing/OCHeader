@class NSMutableDictionary;

@interface AWEDitoPOIFavoritePreloadManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *modelDict;

+ (id)cacheConfig;
+ (id)preloadConfig;
+ (id)collectFMPOptConfig;
+ (BOOL)isFMPOptEnable;
+ (BOOL)isSubTabPrefetchEnable;
+ (long long)requestCount;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (BOOL)isCacheExist:(id)a0;
- (void)registerMessage;
- (void)handleLynxBroadcastNotification:(id)a0;
- (void)didReceivePOICollectionStatusChanged:(id)a0;
- (BOOL)cacheResponseData:(id)a0 withKey:(id)a1;
- (id)fetchResponseDataWithKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
