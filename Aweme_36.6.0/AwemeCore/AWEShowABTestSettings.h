@interface AWEShowABTestSettings : NSObject

+ (id)getIPDetailPageAbTestConfig;
+ (BOOL)enableOpenIPDetailPageOptimize;
+ (id)playletCenterDefaultTypeFeedConfig;
+ (BOOL)enableTrackScreenShotPanelClickClose;
+ (double)getIPDetailPageDataCacheExpireSeconds;
+ (double)getIPDetailPageDataCacheMaxCount;
+ (id)getIPDetailPageSchema;
+ (id)profileDefaultLandingEntTabAuthorIds;
+ (BOOL)shouldShowProfileMixTabSeriesSubContentType;
+ (BOOL)shouldSortSeriesSubContentTypeForTop;

@end
