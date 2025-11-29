@class NSDate;

@interface BDPPagePerformanceMonitorEvent : NSObject

@property (retain, nonatomic) NSDate *beginTime;
@property (retain, nonatomic) NSDate *endTime;
@property (nonatomic) long long cost;
@property (nonatomic) double webKitStartTime;

- (void)setBegin:(id)a0 andEnd:(id)a1;
- (void).cxx_destruct;
- (double)endTimestamp;
- (id)init;
- (void)reset;
- (void)begin;
- (void)end;
- (double)beginTimestamp;

@end
