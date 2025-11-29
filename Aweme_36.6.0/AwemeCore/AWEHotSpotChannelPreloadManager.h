@interface AWEHotSpotChannelPreloadManager : NSObject

+ (id)getContentVC;
+ (void)prefetchDataWithShouldFetchAweme:(BOOL)a0 shouldFetchSkyLight:(BOOL)a1 preloadType:(unsigned long long)a2 logExtra:(id)a3;
+ (void)releaseContentVC;

@end
