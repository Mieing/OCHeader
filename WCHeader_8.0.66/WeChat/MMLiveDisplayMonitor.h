@class NSArray, NSString, WCDisplayMetrics, WCDisplayMetricsMonitor;

@interface MMLiveDisplayMonitor : NSObject <WCDisplayMetricsMonitorDelegate>

@property (readonly, nonatomic) WCDisplayMetricsMonitor *metricsMonitor;
@property (readonly, nonatomic) WCDisplayMetrics *currentMetrics;
@property (readonly, nonatomic) NSArray *metricsRecords;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)startMetricsMonitor;
- (void)stopMetricsMonitor;
- (void)displayMetricsMonitor:(id)a0 didCollectMetrics:(id)a1;
- (void).cxx_destruct;

@end
