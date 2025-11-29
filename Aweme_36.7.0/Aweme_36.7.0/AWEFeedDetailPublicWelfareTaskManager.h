@class AWEUGPendantVideoTaskDetail, NSArray, AWEFeedDetailPublicWelfareTaskManagerModel, NSString;

@interface AWEFeedDetailPublicWelfareTaskManager : NSObject

@property (retain, nonatomic) AWEUGPendantVideoTaskDetail *currentTask;
@property (nonatomic) double enterTimeStamp;
@property (copy, nonatomic) NSArray *uniqueIDArray;
@property (retain, nonatomic) AWEFeedDetailPublicWelfareTaskManagerModel *taskModel;
@property (nonatomic) long long currentPlayTime;
@property (copy, nonatomic) NSString *itemId;
@property (nonatomic) BOOL isDonateClicked;
@property (nonatomic) BOOL hasShownToast;

+ (id)sharedManager;

- (void)startTask;
- (BOOL)shouldShowBottomBar;
- (void)configTaskModelWith:(id)a0;
- (void)onSceneDealloc;
- (BOOL)shouldStartTask;
- (long long)getMaxSunShine;
- (long long)getCurrentSunshine;
- (double)getCurrentTimeStamp;
- (void)tryToReportCompletedTask;
- (void)publishEventForPeriodicallyReport;
- (void)tryToReportCompletedTaskWithParams:(id)a0 RetryTime:(long long)a1 Extra:(id)a2;
- (void)publishEventIfNeedWithUniqueID:(id)a0 Response:(id)a1 Extra:(id)a2;
- (id)getHeaderDictWithUniqueID:(id)a0;
- (long long)getMaxPlayTime;
- (BOOL)shouldShowToast;
- (void)updatePlayTimeWithProgress:(id)a0;
- (void).cxx_destruct;
- (void)resetData;
- (void)startTask:(id)a0;
- (void)cleanData;

@end
