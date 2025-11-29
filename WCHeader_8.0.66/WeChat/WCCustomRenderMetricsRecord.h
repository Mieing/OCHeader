@class WCLoopActionMetrics;

@interface WCCustomRenderMetricsRecord : NSObject

@property (retain, nonatomic) WCLoopActionMetrics *metrics;
@property (nonatomic) double beginTime;
@property (nonatomic) double endTime;
@property (nonatomic) BOOL isFullLoad;

- (id)initWithMetrics:(id)a0 beginTime:(double)a1 endTime:(double)a2;
- (double)maxDuration;
- (void).cxx_destruct;

@end
