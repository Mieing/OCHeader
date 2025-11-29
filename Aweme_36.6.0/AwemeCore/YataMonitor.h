@class YataPerformanceMetrics, NSMutableArray;

@interface YataMonitor : YataModule

@property (retain, nonatomic) YataPerformanceMetrics *beforeUpscreenMetrics;
@property (retain, nonatomic) NSMutableArray *upscreenMetricsQueue;

- (void)handlePerfMetricsDict:(id)a0;
- (void)handleNetPerfMetrics:(id)a0 metricsID:(id)a1;
- (id)initWithYataInstance:(id)a0;
- (void)recordTimingTracePath:(unsigned long long)a0 pathMonitorAction:(unsigned long long)a1 extra:(id)a2;
- (void)registerScene:(id)a0 metricsID:(id)a1 triggerSource:(unsigned long long)a2 triggerBeginTimestamp:(double)a3;
- (void)recordUpscreenTimingEnd:(id)a0 isUpdated:(BOOL)a1;
- (void)reportTimingTrace;
- (id)beforeUpscreenMetricsID;
- (void)recordUpscreenTimingStart;
- (void).cxx_destruct;
- (void)dealloc;

@end
