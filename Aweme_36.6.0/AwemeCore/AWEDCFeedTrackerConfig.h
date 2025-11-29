@class NSString;
@protocol AWEDCFeedFeedClientShowVisibleCheckProtocol;

@interface AWEDCFeedTrackerConfig : AWEDCFeedBaseConfig

@property (nonatomic) BOOL enableDefaultTracker;
@property (nonatomic) BOOL enablePrecisionTracker;
@property (nonatomic) BOOL enableCellTitleTracker;
@property (nonatomic) BOOL enableCommonLynxCellTracker;
@property (copy, nonatomic) id /* block */ interceptEventBlock;
@property (retain, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *innerPreviousPage;
@property (copy, nonatomic) id /* block */ commonExtraParamsBlock;
@property (copy, nonatomic) id /* block */ hookEventParamsBlock;
@property (copy, nonatomic) id /* block */ feedClientShowExtraParamsBlock;
@property (copy, nonatomic) id /* block */ feedClientClickExtraParamsBlock;
@property (copy, nonatomic) id /* block */ feedClientClickCloseExtraParamsBlock;
@property (copy, nonatomic) id /* block */ feedClientStayTimeExtraParamsBlock;
@property (copy, nonatomic) id /* block */ cellVisiblePercentForFeedClientStayTimeBlock;
@property (nonatomic) BOOL enableNotTrackCacheCellStayTime;
@property (nonatomic) BOOL enableTrackEnterBackgroundForStayTime;
@property (copy, nonatomic) id /* block */ enterInnerFlowExtraParamsBlock;
@property (copy, nonatomic) id /* block */ transmissionExtraParamsBlock;
@property (copy, nonatomic) id /* block */ innerFlowExtraParamsBlock;
@property (copy, nonatomic) id /* block */ enterDualSceneExtraParamsBlock;
@property (copy, nonatomic) id /* block */ exitDualSceneExtraParamsBlock;
@property (copy, nonatomic) id /* block */ dualSceneSlideExtraParamsBlock;
@property (copy, nonatomic) id /* block */ videoPlayExtraParamsBlock;
@property (retain, nonatomic) NSString *enterHomepageTabProcessID;
@property (nonatomic) BOOL enableEnterDualSceneProcessID;
@property (copy, nonatomic) id /* block */ cellEnableExposureEventBlock;
@property (copy, nonatomic) id /* block */ shouldDelayTrackClientShowBlock;
@property (retain, nonatomic) NSString *delayTrackClientShowEnterMethod;
@property (copy, nonatomic) id /* block */ firstEnterSwitchPreviewTimeStampBlock;
@property (nonatomic) BOOL disableAddIndexPathsToNeedToTrack;
@property (copy, nonatomic) id /* block */ feedLiveShowExtraParamsBlock;
@property (copy, nonatomic) id /* block */ dislikeExtraParamsBlock;
@property (copy, nonatomic) id /* block */ feedClientTotalShowExtraParamsBlock;
@property (nonatomic) BOOL enableAsyncQueueTrackEvent;
@property (nonatomic) BOOL enableFeedClientShowVisibleCheck;
@property (retain, nonatomic) id<AWEDCFeedFeedClientShowVisibleCheckProtocol> visibleCheckHandler;

- (void)setupDefaultConfig;
- (void).cxx_destruct;

@end
