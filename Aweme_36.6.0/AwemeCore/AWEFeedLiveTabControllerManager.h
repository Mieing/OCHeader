@class NSString, NSMutableDictionary, NSDateFormatter, NSDictionary, AWEFeedLiveTabOnePageMonitor;

@interface AWEFeedLiveTabControllerManager : NSObject <IESLiveTabDataHolderProtocol>

@property (nonatomic) BOOL revisitBehavior;
@property (nonatomic) BOOL revisitBehaviorOpen;
@property (nonatomic) BOOL disableTrace;
@property (retain, nonatomic) NSMutableDictionary *traceTimeInfo;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (copy, nonatomic) NSString *enterFromMerge;
@property (copy, nonatomic) NSString *enterSource;
@property (nonatomic) BOOL isEnteredLiveTab;
@property (nonatomic) BOOL isLiveTabEnterOtherPage;
@property (nonatomic) BOOL hasRendered;
@property (nonatomic) BOOL hasRenderedMultiTab;
@property (nonatomic) BOOL hasRenderedRevisit;
@property (nonatomic) BOOL watchLayer;
@property (retain, nonatomic) NSDictionary *landingParams;
@property (retain, nonatomic) NSDictionary *appearParams;
@property (retain, nonatomic) AWEFeedLiveTabOnePageMonitor *onePageMonitor;
@property (nonatomic) BOOL manualOpenRevisit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)clearChannelRelease;
- (void)reportTraceInfo;
- (BOOL)enableShowGuideAnimationWithType:(long long)a0 currentTabIsTop:(BOOL)a1;
- (void)recordGestureFrequency:(long long)a0;
- (void)setupDataFormatter;
- (void)clearRender;
- (BOOL)shouldCloseRevisitV2;
- (id)getLiveTabFollowAvatarTimestampKey;
- (id)cacheGestureGlobalTimestamp;
- (id)cacheCountWithType:(long long)a0;
- (id)cacheTimestampWithType:(long long)a0;
- (id)getLiveTabOperationInfoTimestamKey;
- (id)getLiveTabCapsuleInfoTimestamKey;
- (BOOL)fromPush;
- (id)getOperationModuleLastVisitDateKey;
- (id)getOperationModuleVisitCountKey;
- (id)getOperationModuleClickDatesKey;
- (BOOL)isDate:(id)a0 beyondDays:(long long)a1 fromDate:(id)a2;
- (BOOL)hasClickBehaviorInRecentDays:(id)a0 clickDates:(id)a1;
- (void)refreshWillAppearParams:(id)a0;
- (BOOL)shouldCloseRevisit;
- (BOOL)enableShowAnchorLiveAvatar;
- (BOOL)enableShowOperationGuide;
- (BOOL)enableShowCapsuleGuide;
- (void)recordRevisitBehavior:(BOOL)a0;
- (void)recordLiveTabCapsuleFrequency;
- (void)recordLiveAvatarFrequency;
- (void)recordOperationInfoFrequency;
- (void)traceLiveTabEnterStage:(long long)a0;
- (void)traceLiveTabRevisitViewConsume:(double)a0 params:(id)a1;
- (void)traceLiveTabFetchConsume:(double)a0 params:(id)a1;
- (void)refreshLandingParams:(id)a0;
- (BOOL)shouldExpandOperationModule;
- (BOOL)shouldFoldOperationWhenLanding;
- (void)recordOperationModuleClick;
- (void)recordLiveTabRevisitVisit;
- (id)userIdentifier;
- (void).cxx_destruct;
- (void)resetAllData;

@end
