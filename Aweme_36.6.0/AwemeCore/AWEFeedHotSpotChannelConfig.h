@interface AWEFeedHotSpotChannelConfig : NSObject

+ (BOOL)enableCacheFromHotSearch;
+ (BOOL)disableSetHasWatchedInBackground;
+ (BOOL)enableWidgetPreload;
+ (BOOL)enableUseCache;
+ (id)hotspotChannelDataPreloadMethodConfig;
+ (id)otherPreloadMethods;
+ (BOOL)enableOtherMethodPreload;
+ (id)hotspotChannelCacheSourceConfig;
+ (BOOL)enableCacheExpandSourceType;
+ (id)cacheSourceType;
+ (BOOL)enableCacheFromFeed;
+ (BOOL)enableCacheFromOtherSource;
+ (id)homepageFramePreloadConfig;
+ (id)homepageFrameScrollPreloadConfig;
+ (id)homepageFramePitayaPreloadConfig;
+ (unsigned long long)hotSpotChannelPressPreloadType;
+ (BOOL)enableSkyLightPreDecodeTemplateBundle;
+ (long long)cacheExpiredTimeLimit;
+ (BOOL)enableCacheVideoDownload;
+ (BOOL)enablePlayBeforeCompletion;
+ (BOOL)enablePlayBeforeSkylightShow;
+ (BOOL)enableSkyLightDataRequestBeforeConfigUI;
+ (id)getLynxViewBackgroundConfig;
+ (BOOL)enableGuidePreload;
+ (BOOL)enableAsynCleanDynamicCache;
+ (BOOL)enableCallPlayAdvance;
+ (BOOL)enableToastFix;
+ (id)cacheSentenceTags;
+ (id)otherSourceTypeCachePatterns;
+ (BOOL)otherSourceTypeNeedSelectTopX;
+ (long long)otherSourceTypeTopXValue;
+ (BOOL)useCacheOnlyOneAweme;
+ (BOOL)canUseSchemaJumpFromChannel;
+ (BOOL)enableScrollPreload;
+ (BOOL)enableScrollAwemePreload;
+ (BOOL)enableScrollSkylightPreload;
+ (BOOL)enablePitayaPreload;
+ (BOOL)enablePitayaAwemePreload;
+ (BOOL)enablePitayaSkylightPreload;
+ (BOOL)enableRemoveLoadingStartPlay;

@end
