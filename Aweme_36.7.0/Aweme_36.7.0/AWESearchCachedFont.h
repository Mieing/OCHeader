@class NSMutableDictionary;

@interface AWESearchCachedFont : NSObject

@property (retain, nonatomic) NSMutableDictionary *fontCache;
@property (nonatomic) BOOL fontCacheEnable;

+ (id)aweSearch_systemFontOfSize:(double)a0 weight:(long long)a1;
+ (id)aweSearch_fontOfClass:(long long)a0 weight:(long long)a1;
+ (id)awe_searchRegularPingFangFont:(double)a0;
+ (id)sharedFont;

- (id)aweSearch_systemFontOfSize:(double)a0 weight:(long long)a1;
- (id)aweSearch_fontOfClass:(long long)a0 weight:(long long)a1;
- (id)awe_searchRegularPingFangFont:(double)a0;
- (void)handleMemoryWarning:(id)a0;
- (BOOL)enableMemoryOptimizeWithNunki;
- (void)didReceiveMemeoryDangerLevelTopNotification;
- (void)preloadAsset;
- (id)cacheFontOfClass:(long long)a0 weight:(long long)a1;
- (id)cacheSystemFontOfSize:(double)a0 weight:(long long)a1;
- (id)cachePingFangFontOfSize:(double)a0 weight:(long long)a1;
- (id)cacheKeyWithPrefix:(id)a0 size:(id)a1 weight:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
