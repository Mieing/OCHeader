@interface AWEFeedDCMidSearchConfig : NSObject

+ (id)searchMiddlePageQualityConfig;
+ (long long)initOuterRetryTimes;
+ (long long)innerRetryTimes;
+ (long long)outerRetryTimeOut;
+ (BOOL)enableSystemTransition;
+ (BOOL)enableSearchMiddlePageUseCache;
+ (BOOL)searchMiddlePageCacheTypeDefault;
+ (BOOL)searchMiddlePageCacheTypeUnUsedFirst;
+ (BOOL)enableSearchDCFeedNetOpt;
+ (BOOL)enableFixSearchDCFeed;
+ (BOOL)disableShowTag;
+ (BOOL)enableRemoveChildVcIfDealloc;
+ (BOOL)enableChangeMonitorBeginTime;
+ (BOOL)enablePrefetchACK;
+ (BOOL)enablePreloadInnerVideo;
+ (BOOL)enableScrollEndPreloadVideo;
+ (BOOL)enableScrollEndPreloadImage;
+ (double)scrollEndPreloadVideoDelayTime;
+ (double)scrollEndPreloadImageDelayTime;
+ (BOOL)enablePreloadSecondImage;
+ (BOOL)enableVideoImageShrink;
+ (BOOL)enableAsyncLoadCache;
+ (BOOL)enableLoadCacheWhenPress;
+ (BOOL)enableLoadCacheWhenPressDebugToast;
+ (BOOL)enableRequestPB;

@end
