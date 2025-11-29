@class NSDictionary, NSMutableDictionary, CJPayNFCConfig;

@interface AWEPayNFCRedirectCache : NSObject

@property (retain, nonatomic) NSDictionary *gurdCache;
@property (retain, nonatomic) NSMutableDictionary *memoryCache;
@property (nonatomic) double memoryLastUpdateTime;
@property (nonatomic) double memoryValidDuration;
@property (retain, nonatomic) CJPayNFCConfig *nfcSettings;

+ (void)_aweLazyRegisterStaticLoad;
+ (void)preloadCacheAfterDelay:(BOOL)a0 force:(BOOL)a1;
+ (void)preloadCache:(BOOL)a0;
+ (BOOL)isNeedPreloadCache:(BOOL)a0;
+ (void)saveLastUseTime;
+ (id)defaultCache;

- (id)p_resourceDirectoryForChannel;
- (id)getCache:(id)a0 session:(id)a1;
- (void)saveMemoryCache:(id)a0 url:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
