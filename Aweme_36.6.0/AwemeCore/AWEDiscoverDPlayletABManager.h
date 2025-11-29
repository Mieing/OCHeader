@interface AWEDiscoverDPlayletABManager : NSObject

+ (long long)preloadSize;
+ (id)playletInnerFirstFrameOp;
+ (BOOL)playletSmartPreloadEnable;
+ (BOOL)needCarryAwemeModelForFirstPreload;
+ (BOOL)needScrollPreload;
+ (BOOL)needHidePanelView;
+ (BOOL)needShowPlayletVideoGuide;
+ (id)limitBarRefer;
+ (BOOL)preloadVideoInSelectPanel;
+ (BOOL)fastEnterFromInPersonPage;
+ (BOOL)payVideoFromBarUseful;
+ (long long)playletSeriesAwemePreloadRequestExpiredTimeOfSetting;
+ (BOOL)playletPreloadRequestSeriesAwemeEnable;
+ (BOOL)needServerParamsPlayletAdFilter;
+ (BOOL)fastEnterLimitEnable;
+ (BOOL)playletInnerTransitionInHomepageHotEnable;
+ (BOOL)playletInnerIgnoreHasPaidVideoEnable;
+ (BOOL)playletInnerInitPreloadEasyRequestEnable;

@end
