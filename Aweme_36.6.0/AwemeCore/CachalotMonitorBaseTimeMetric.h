@class NSString, NSNumber;

@interface CachalotMonitorBaseTimeMetric : NSObject

@property (copy, nonatomic) NSString *metric;
@property (retain, nonatomic) NSNumber *defaultTime;

+ (id)metricDataWithMetrics:(id)a0 triggerMap:(id)a1;

- (id)timeWithTriggerMap:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
