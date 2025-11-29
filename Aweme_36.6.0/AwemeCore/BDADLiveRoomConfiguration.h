@interface BDADLiveRoomConfiguration : NSObject

+ (BOOL)enableAutoTracker;
+ (BOOL)enableGurdPreload;
+ (BOOL)shouldUseNativeDownloadCard;
+ (BOOL)useNewFragmentEnable;
+ (BOOL)animationControlEnabled;
+ (BOOL)commerceComponentApiRetrofit;
+ (BOOL)useNewToolbarIcon;
+ (BOOL)liveShowEducationUrlEnable;
+ (BOOL)mpLiveLynxContainerV2Enable;
+ (BOOL)liveCardLynxEnable;
+ (double)liveInnerAdCardShow;
+ (double)liveAdCardShowDelaySeconds;
+ (BOOL)isContainedInPreRenderWhiteList:(id)a0;
+ (BOOL)shouldSchemaJoinParamsInLiveScene;
+ (BOOL)windmillLazyLoadEnable;
+ (BOOL)preloadAppInfoEnable;
+ (id)settings;

@end
