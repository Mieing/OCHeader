@interface MagicBrushPerformance : NSObject

@property (nonatomic) void *runtime;
@property (nonatomic) BOOL paused;
@property (nonatomic) int fps;
@property (nonatomic) int fpsEx;
@property (nonatomic) int drawcall;
@property (nonatomic) int vertex;
@property (nonatomic) int triangle;
@property (nonatomic) int jankCount;
@property (nonatomic) int bigJankCount;
@property (nonatomic) int jankFrameTime;
@property (nonatomic) int totalFrameTime;
@property (nonatomic) int jankPerSecond;
@property (nonatomic) int bigJankPerSecond;
@property (nonatomic) int stutterPerSecond;
@property (nonatomic) BOOL enableReportVarianceFps;

- (id)initWithRuntime:(void *)a0;
- (void)resetJankInfo;
- (struct { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; })getPerformance;
- (long long)getVarianceFps;
- (void)triggerUpdatePerformance;
- (void)start;
- (void)pause;
- (void)resume;
- (void)destroy;

@end
