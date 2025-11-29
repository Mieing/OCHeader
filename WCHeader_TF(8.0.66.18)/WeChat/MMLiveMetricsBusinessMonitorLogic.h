@class MMLiveUIPerfMonitorLogic, MMLiveTask, WCLoopMetrics, MMLiveTaskId;

@interface MMLiveMetricsBusinessMonitorLogic : NSObject

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (readonly, nonatomic) MMLiveTask *liveTask;
@property (retain, nonatomic) MMLiveUIPerfMonitorLogic *uiPerfMonitorLogic;
@property (nonatomic) unsigned long long metricsTriggerCnt;
@property (nonatomic) double lastCollectTime;
@property (readonly, nonatomic) unsigned long long scheduleCollectIntervalCnt;
@property (retain, nonatomic) WCLoopMetrics *lastCaptureEffectMetrics;

- (id)initWithTaskId:(id)a0;
- (void)initDefaultDatas;
- (void)onLiveMetricsMonitorScheduleCollect;
- (void)onLiveCaptureAndEffectMetricsUpdate:(id)a0;
- (BOOL)checkTimeToScheduleCollectMetricsBusiness;
- (void)scheduleCollectMetricsBusiness;
- (void)createUIPerfMonitorLogic;
- (void)collectUIPerfStatisticResult:(id)a0 inPeriod:(double)a1;
- (void)updateCaptureAndEffectMetrics:(id)a0;
- (void)collectCaptureAndEffectPerfStatisticResult:(id)a0 inPeriod:(double)a1;
- (void).cxx_destruct;

@end
