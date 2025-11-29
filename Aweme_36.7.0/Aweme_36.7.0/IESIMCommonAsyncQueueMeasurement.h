@interface IESIMCommonAsyncQueueMeasurement : NSObject

@property (nonatomic) unsigned long long totalTaskCount;
@property (nonatomic) double totalInvokeDuration;
@property (nonatomic) double totalWaitDuration;
@property (nonatomic) double maxInvokeDuration;
@property (nonatomic) double maxWaitDuration;

- (void)onTaskInvokeDuration:(double)a0 waitDuration:(double)a1;
- (void)report;

@end
