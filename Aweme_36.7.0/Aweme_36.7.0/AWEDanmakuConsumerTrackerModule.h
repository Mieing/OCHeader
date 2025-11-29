@class NSMutableDictionary, NSDictionary, NSMutableOrderedSet, NSMutableArray;

@interface AWEDanmakuConsumerTrackerModule : AWEDanmakuBaseModule

@property (nonatomic) BOOL hasTrackFirstDanmakuShow;
@property (retain, nonatomic) NSMutableDictionary *playTypeDic;
@property (nonatomic) long long danmakuPlayCount;
@property (nonatomic) long long danmakuDropCount;
@property (retain, nonatomic) NSMutableOrderedSet *displayedDanmakuIdList;
@property (retain, nonatomic) NSMutableArray *videoTimeList;
@property (nonatomic) BOOL hasTrackedDanmakuPlayResult;
@property (retain, nonatomic) NSMutableDictionary *activityDanmakuShowParams;
@property (retain, nonatomic) NSMutableDictionary *activityDanmakuDropParams;
@property (retain, nonatomic) NSMutableDictionary *dropDanmakuMaps;
@property (nonatomic) long long validDanmakuShowCount;
@property (nonatomic) double totalDanmakuShowTimeDuration;
@property (nonatomic) long long passingTimeCount;
@property (nonatomic) double passingTime;
@property (nonatomic) double dropFrameCount;
@property (nonatomic) unsigned long long authorDanmakuShowCount;
@property (nonatomic) double playStartTimeStamp;
@property (nonatomic) double videoPlayStartTime;
@property (retain, nonatomic) NSDictionary *danmakuQuestParams;
@property (nonatomic) long long danmakuQuestCountValue;
@property (nonatomic) BOOL danmakuSendQuestNoti;

+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;

- (void)didDisplay;
- (double)currentPlayTime;
- (double)playPercent;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (void)didDisplayDanmaku:(id)a0;
- (void)didDroppedDanmakus:(id)a0;
- (void)didFinishDanmakuLocationUpdated:(double)a0;
- (void)onPlayerPlay:(id)a0;
- (void)initializeModule;
- (void)configEvent;
- (void)didReceiveQuestionnaireRuleChangeNotification:(id)a0;
- (void)trackFirstDanmakuShow:(id)a0 currentPlaybackTime:(double)a1 playPercent:(double)a2;
- (void)trackFirstDanmakuShow:(id)a0;
- (BOOL)isLandScapeSceneType;
- (void)danmakuPublishTimeConsumeMonitor:(id)a0 currentPlayTime:(double)a1;
- (void)danmakuShowTimeDiffMonitor:(id)a0 currentPlayTime:(double)a1;
- (void)trackOfficialDanmakuShowIfNeed:(id)a0 currentPlaybackTime:(double)a1 playPercent:(double)a2;
- (void)handleDanmakuPlayImpressionWithModel:(id)a0 currentPlayTime:(double)a1;
- (void)danmakuPublishTimeConsumeMonitor:(id)a0;
- (void)danmakuShowTimeDiffMonitor:(id)a0;
- (void)trackOfficialDanmakuShowIfNeed:(id)a0;
- (void)handleDanmakuPlayImpressionWithModel:(id)a0;
- (void)updateDropDanmakusCountWithType:(id)a0 addCount:(long long)a1;
- (void)trackDanmakuImpressionIfNeed;
- (void)trackEmptyErrorIfNeed;
- (void)trackDanmakuErrorUnShowIfNeed;
- (id)getDanmakuPlayResultTrackParams;
- (id)getDanmakuDropCountsWithNeedReset:(BOOL)a0;
- (id)getPlayTrackParams;
- (long long)danmakusCountBeforeTime:(double)a0;
- (double)firstDanmakuTime;
- (double)currentPlayRate;
- (id)currentModelConfigPendantIDs;
- (BOOL)isVerticalSceneType;
- (double)showTimeOffsetWithDanmaku:(id)a0 currentTime:(double)a1;
- (void)trackDanmakuPlayResultIfNeed;
- (double)videoDuration;
- (void).cxx_destruct;
- (void)reset;
- (void)didEndDisplaying;
- (void)updateWithModel:(id)a0;
- (void)viewDidDisappear;
- (void)willDisplay;
- (void)viewWillDisappear;

@end
