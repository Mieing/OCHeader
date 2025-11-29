@interface SLIPerfMetricsMonitor : NSObject

+ (id)shared;

- (void)reportPerfEventWithMetrics:(id)a0 eventType:(long long)a1 errorOccured:(id)a2 templateInfo:(id)a3 extraParams:(id)a4 sliceInstance:(id)a5;

@end
