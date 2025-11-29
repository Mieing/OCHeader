@class NSLock, NSMutableOrderedSet;

@interface AppMonitorMetricSet : NSObject

@property (retain, nonatomic) NSMutableOrderedSet *metrics;
@property (retain, nonatomic) NSLock *lock;

+ (id)sharedInstance;

- (id)metricForModule:(id)a0 monitorPoint:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)addMetric:(id)a0;

@end
