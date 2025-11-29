@class NSArray, NSString;

@interface CachalotMonitorDurationMetric : CachalotMonitorBaseTimeMetric

@property (copy, nonatomic) NSArray *triggerBegins;
@property (copy, nonatomic) NSString *triggerEnd;

+ (id)metricsWithMap:(id)a0;

- (id)timeWithTriggerMap:(id)a0;
- (void).cxx_destruct;

@end
