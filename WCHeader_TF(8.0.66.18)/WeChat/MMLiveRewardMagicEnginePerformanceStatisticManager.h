@class NSMutableDictionary, MMLiveMagicEnginePerformanceRecordTask, MMLiveTaskId, NSString, MMLiveMetricsInfoRecordInfo;

@interface MMLiveRewardMagicEnginePerformanceStatisticManager : NSObject <LiveGiftMRHandlerListener, WeChat.IMRViewResListener, WeChat.IMRViewListener, MMLiveTaskMgrExt>

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (retain, nonatomic) MMLiveMetricsInfoRecordInfo *latestMetricsRecordInfo;
@property (retain, nonatomic) NSMutableDictionary *performanceRecordTaskDict;
@property (readonly, nonatomic) BOOL isRecording;
@property (retain, nonatomic) MMLiveMagicEnginePerformanceRecordTask *currRecordTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enablePerformanceStatistic;

- (id)initWithTaskId:(id)a0;
- (void)dealloc;
- (void)initDefaultData;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)monitorPerformanceForMagicRewardHandler:(id)a0;
- (void)cancelMonitorForMagicRewardHandler:(id)a0;
- (void)reportPerformance;
- (void)extractMedianPerformanceData:(id /* block */)a0;
- (void)registerRecordTaskWithMagicRewardHandlerIfNeed:(id)a0;
- (void)notifyRecordTaskCancelMonitorForMagicRewardHandler:(id)a0;
- (id)createPerformanceRecordTaskWithGiftName:(id)a0 productId:(id)a1;
- (id)createUniqueKeyWithGiftName:(id)a0 productId:(id)a1;
- (void)updateLatestMetricsRecordInfo:(id)a0;
- (void)updateCurrRecordTask:(id)a0;
- (id)getRecordTaskWithHandler:(id)a0;
- (void)onLiveTask:(id)a0 didCollectMetricsInfo:(id)a1;
- (void)onAnimationPreparePlayWithHandler:(id)a0 actionInfo:(id)a1;
- (void)onAnimationPrepareEditWithHandler:(id)a0 actionInfo:(id)a1;
- (void)tryStartPerformanceRecordWithHandler:(id)a0 scene:(unsigned long long)a1;
- (void)onResLoadedWithHandler:(id)a0;
- (void)onAnimationCancelWithHandler:(id)a0;
- (void)onAnimationEndWithWithHandler:(id)a0;
- (void)onAnimationTimeoutWithHandler:(id)a0;
- (void).cxx_destruct;

@end
