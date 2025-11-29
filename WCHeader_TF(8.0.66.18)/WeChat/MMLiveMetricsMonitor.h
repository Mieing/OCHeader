@class MMMetricsInfo, NSString, MMLiveTask;
@protocol MMLiveMetricsMonitorDelegate;

@interface MMLiveMetricsMonitor : NSObject <MMMetricsMonitorExt>

@property (readonly, nonatomic) double reportTimeInterval;
@property (retain, nonatomic) MMMetricsInfo *lastReportedMetricsInfo;
@property (weak, nonatomic) MMLiveTask<MMLiveMetricsMonitorDelegate> *liveTaskDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)startMonitoring;
- (void)stopMonitoring;
- (void)attachLiveInfoIntoMetricsInfo:(id)a0;
- (void)reportMetricsInfo:(id)a0;
- (void)metricsMonitor:(id)a0 didCollectMetricsInfo:(id)a1;
- (void).cxx_destruct;

@end
