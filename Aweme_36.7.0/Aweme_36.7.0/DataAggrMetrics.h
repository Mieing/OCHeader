@class NSString, DataAggrMetricsConfiguration, NSArray, NSDictionary;

@interface DataAggrMetrics : NSObject <DataAggregatedMetrics> {
    NSArray *aggrFields;
    NSDictionary *dims;
}

@property (copy, nonatomic) NSString *metricsKey;
@property (weak, nonatomic) DataAggrMetricsConfiguration *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)metricsWithKey:(id)a0 configuration:(id)a1;

- (BOOL)avalible;
- (void)appendMetrics:(id)a0;
- (id)dimensions;
- (void).cxx_destruct;
- (void)reset;
- (id)metrics;

@end
