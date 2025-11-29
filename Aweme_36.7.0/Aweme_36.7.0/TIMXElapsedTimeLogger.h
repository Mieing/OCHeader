@class TIMXThreadSafeMutableDictionary, TIMXProcessDuratiorMonitorModel;

@interface TIMXElapsedTimeLogger : NSObject

@property (retain, nonatomic) TIMXThreadSafeMutableDictionary *eventMonitorsDict;
@property (retain, nonatomic) TIMXProcessDuratiorMonitorModel *currentStageMonitor;
@property (retain, nonatomic) TIMXProcessDuratiorMonitorModel *currentSumMonitor;
@property (retain, nonatomic) TIMXProcessDuratiorMonitorModel *totalDurationMonitor;

- (void)recordStart;
- (void)recordEnd;
- (void)recordStartWithStageEvent:(id)a0;
- (id)elapsedTimeDict;
- (void)p_calculateTotalDurationWithSumMonitor:(id)a0;
- (void)recordStartSumEvent:(id)a0;
- (void)recordEndSumEvent:(id)a0;
- (void)addSubLogger:(id)a0;
- (id)initWithEvent:(id)a0;
- (void).cxx_destruct;

@end
