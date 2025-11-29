@class WCLoopMetrics;

@interface PIPPerformanceComputeResult : NSObject

@property (nonatomic) int fps;
@property (retain, nonatomic) WCLoopMetrics *rootLoopMetrics;
@property (nonatomic) double pixelRenderDuration;
@property (nonatomic) double newRenderBufferDuration;
@property (nonatomic) double attachWidgetsDuration;
@property (nonatomic) double renderToBufferDuration;
@property (readonly, nonatomic) int pixelRenderMsDuration;
@property (readonly, nonatomic) int newRenderBufferMsDuration;
@property (readonly, nonatomic) int attachWidgetsMsDuration;
@property (readonly, nonatomic) int renderToBufferMsDuration;
@property (nonatomic) int fpsDifference;

- (id)description;
- (void).cxx_destruct;

@end
