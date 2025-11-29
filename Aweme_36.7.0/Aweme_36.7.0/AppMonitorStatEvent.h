@class NSLock, NSMutableDictionary, AppMonitorMetric;

@interface AppMonitorStatEvent : AppMonitorEvent

@property (retain, nonatomic) NSMutableDictionary *dimensionValueSet_x_entity_values;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) AppMonitorMetric *metric;

- (id)initWithEventId:(id)a0 module:(id)a1 monitorPoint:(id)a2;
- (void)commitWithDimensionValueSet:(id)a0 measureValueSet:(id)a1;
- (id)jsonDict;
- (void).cxx_destruct;

@end
