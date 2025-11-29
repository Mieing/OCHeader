@interface AWEDiscoverDPlayletPreloadRequestUtil : NSObject

+ (void)preloadSeriesAwemeRequestWithParams:(id)a0 holder:(id)a1 scene:(id)a2 enterFrom:(id)a3;
+ (id)tokenPreloadRequestWithParams:(id)a0 holder:(id)a1 scene:(id)a2;
+ (BOOL)preloadEnable;
+ (long long)cursorWithParams:(id)a0;
+ (id)timeIdentifyWithScene:(id)a0 cursor:(long long)a1;
+ (double)preloadRequestExpired;
+ (void)startRequestTrackerWithFrom:(id)a0 scene:(id)a1 playletID:(id)a2;
+ (id)preloadRequestParamsWithQuery:(id)a0 scene:(id)a1 enterFrom:(id)a2;
+ (void)responseTrackerWithFrom:(id)a0 scene:(id)a1 playletID:(id)a2 delta:(double)a3 error:(id)a4;
+ (id)resultIdentifyWithScene:(id)a0 cursor:(long long)a1;
+ (long long)currentEpisodeWithParams:(id)a0;
+ (void)nonCursorTrackerWithFrom:(id)a0 scene:(id)a1 playletID:(id)a2;
+ (void)resetTimeIdentifyWithHolder:(id)a0 key:(id)a1;
+ (void)requestReuseTrackerWithFrom:(id)a0 scene:(id)a1 playletID:(id)a2;

@end
