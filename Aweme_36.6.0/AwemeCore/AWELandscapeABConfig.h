@interface AWELandscapeABConfig : NSObject

+ (BOOL)optimizeSplitScreen;
+ (BOOL)fixFirstVideoDoNotReportVideoPlay;
+ (BOOL)optimizeProgressSlider;
+ (BOOL)enableSuperResolution;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (BOOL)fixLandscapeElderMode;
+ (BOOL)supportSetHiddenForNewControl;
+ (BOOL)useGeneralPlayer;
+ (Class)aAWEFeedMultiDevicePlaySyncAdapterClass;
+ (BOOL)useNewTransiton;
+ (id)landscapeLayoutStrategy;
+ (id)landscapeUIDetailOptStrategy;
+ (BOOL)landscapeUIIconAndSizeOpt;
+ (BOOL)changeSplitScreenCompletion;
+ (BOOL)canExitSplitWhenLoadingData;
+ (BOOL)checkCurrentCellBeforeExitSplitScreen;
+ (BOOL)fixLandscapeLoadState;
+ (BOOL)fixLandscapeSupportOrientation;
+ (BOOL)fixVideoPlayEnterMethod;
+ (BOOL)landscapeFixStopNotCall;
+ (BOOL)fixLandscapeHitTestView;
+ (BOOL)fixLandscapePlayIfNeeded;
+ (BOOL)fixRecallVideo;
+ (BOOL)fixLandscapeCurrentPlayIndex;
+ (BOOL)optimizeMorePanelLayout;
+ (BOOL)fixLandscapeReminder;
+ (BOOL)fixJustPreload;
+ (BOOL)optimizeSupportOrientation;
+ (BOOL)supportPCContinuePlay;
+ (BOOL)optimizedTransitionUseCover;
+ (BOOL)optimizeAccessibility;
+ (BOOL)forbidCurrentIndexBeSetNil;
+ (long long)chapterProgressType;
+ (BOOL)fixNeedTrackLandscapeContentOffset;
+ (BOOL)fixPlayState;
+ (BOOL)fixScreenCastAutoPlay;
+ (BOOL)strategyPreloadEnable;
+ (BOOL)morePanelDownEnable:(id)a0;
+ (BOOL)castBtnEnable:(id)a0;
+ (BOOL)interactOnRightEnable:(id)a0;
+ (BOOL)morePanelPartitionEnable:(id)a0;
+ (BOOL)landscapeUIBackgroundAndMarginOpt;
+ (BOOL)landscapeFollowButtonOpt;
+ (BOOL)landscapeUIShowHideAnimationOpt;
+ (BOOL)supportPreloadManager;
+ (BOOL)fixPreloadCell;
+ (long long)brightnessAndVolumeOptType;
+ (BOOL)optimizePlayerCreationProcess;
+ (BOOL)optimizeProgressBigFont;
+ (BOOL)supportTimingClose;
+ (BOOL)supportTimingClosePortrait;

- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (id)aAWEFeedMultiDevicePlaySyncAdapter;

@end
