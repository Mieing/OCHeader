@class NSMutableDictionary, AppMonitorMeasureValueSet, NSLock, AppMonitorMetric;

@interface AppMonitorDurationEvent : AppMonitorEvent

@property (retain, nonatomic) AppMonitorMetric *metric;
@property (retain, nonatomic) AppMonitorMeasureValueSet *measureValues;
@property (retain, nonatomic) NSMutableDictionary *string_x_measureValue_undonePeriod;
@property (nonatomic) double initTime;
@property (retain, nonatomic) NSLock *lock;

- (id)initWithEventId:(id)a0 module:(id)a1 monitorPoint:(id)a2;
- (void)startWithMeasureName:(id)a0;
- (BOOL)endWithMeasureName:(id)a0;
- (void).cxx_destruct;
- (BOOL)isExpired;

@end
