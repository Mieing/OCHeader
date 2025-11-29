@interface AppMonitorCountEvent : AppMonitorEvent

@property (nonatomic) long long count;
@property (nonatomic) double value;

- (id)initWithEventId:(id)a0 module:(id)a1 monitorPoint:(id)a2;
- (id)jsonDict;
- (void)addValue:(double)a0;

@end
