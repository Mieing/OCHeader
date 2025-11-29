@interface AWEIMLowCostTimer : NSObject

@property (nonatomic) double duration;
@property (nonatomic, getter=isRunning) BOOL running;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) double beginTime;
@property (nonatomic) double endTime;

- (void)p_addObserver;
- (void)pause;
- (id)init;
- (void)stop;
- (void)start;
- (void)resume;

@end
