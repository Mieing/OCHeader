@interface IESIMFPSMonitorMetrics : NSObject

@property (nonatomic) unsigned long long frameCount;
@property (nonatomic) unsigned long long scrollBeginTimeInUS;
@property (nonatomic) double scrollDurationInMS;
@property (nonatomic) long long hitchTime;
@property (nonatomic) long long dropCount;
@property (nonatomic) double hitchDurationInMS;
@property (nonatomic) double hitchFrameDurationInMS;

- (void)addFrameDurationInMS:(double)a0 hitchDurationInMS:(double)a1;
- (void)addFrame:(id)a0;

@end
