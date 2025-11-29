@interface MMScrollMetricsData : NSObject

@property (nonatomic) int fps;
@property (nonatomic) int duration;
@property (nonatomic) float stutter;
@property (nonatomic) int scrollScore;
@property (nonatomic) int hitchRate;
@property (nonatomic) int smallJank;
@property (nonatomic) int bigJank;
@property (nonatomic) int jank;

- (void)setData:(struct scroll_metrics_t { float x0; float x1; float x2; int x3; int x4; int x5; float x6; float x7; } *)a0;

@end
