@class NSTimer, NSMutableArray, WCFinderUserPrefetchRelatedInfo;
@protocol WCFinderPrefetchModelDelegate;

@interface WCFinderPrefetchModel : NSObject

@property (weak, nonatomic) NSTimer *updateTimer;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) WCFinderUserPrefetchRelatedInfo *userRelatedInfo;
@property (retain, nonatomic) NSMutableArray *probMatrix;
@property (retain, nonatomic) NSMutableArray *timeProbArray;
@property (nonatomic) unsigned long long lastForegroundPrefetchTimestamp;
@property (retain, nonatomic) NSTimer *prefetchTimer;
@property (weak, nonatomic) id<WCFinderPrefetchModelDelegate> delegate;

+ (id)MMKVKeyWithPrfetchScene:(unsigned long long)a0;
+ (id)prefetchConfigWithScene:(unsigned long long)a0;

- (id)initWithPrefetchScene:(unsigned long long)a0;
- (void)dealloc;
- (void)save;
- (void)updateModel;
- (BOOL)shouldPrefetchNow;
- (void)updateUserRelatedInfoIfNeeded:(unsigned long long)a0 config:(id)a1;
- (double)currentEnterProb;
- (double)enterProbBaseOnTime;
- (double)enterProbBaseOnActionSeries;
- (double)currentEnterProbWithCurrentTimestamp:(unsigned long long)a0 config:(id)a1;
- (double)probDueToTime:(unsigned long long)a0 config:(id)a1;
- (double)probDueToSeriesWithConfig:(id)a0;
- (BOOL)isPrefetchSwitchOn;
- (void)resumeModel;
- (void)calculateProbMatrixWithConfig:(id)a0;
- (void)calculateTimeRelatedDataWithConfig:(id)a0;
- (void)addCountFromScene:(unsigned long long)a0 toScene:(unsigned long long)a1;
- (void)enablePrefetchTimerIfNeeded;
- (void)foregroundPrefetchIfNeeded;
- (void)foregroundPrefetchNow;
- (void)onWechatEnterForeground:(id)a0;
- (void)onWechatEnterBackground:(id)a0;
- (void)addObserverForForegroundNotification;
- (void)removeObserverForForegroundNotification;
- (unsigned long long)getPrefetchSceneWithLastFeature:(id)a0 timestamp:(unsigned long long)a1;
- (void).cxx_destruct;

@end
