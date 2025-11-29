@interface AWEDiscoverDPlayletPerformanceEventUnit : NSObject

@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double endTime;

- (void)startWithInterval:(double)a0;
- (void)startWithCustomInterval:(double)a0;
- (void)endWithCustomInterval:(double)a0;
- (void)trackForSeriesStageMonitor:(id)a0;
- (double)delta;
- (void)start;
- (void)end;

@end
