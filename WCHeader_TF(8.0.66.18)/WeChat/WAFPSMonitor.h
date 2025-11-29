@class NSMutableDictionary, CADisplayLink;

@interface WAFPSMonitor : NSObject

@property (retain, nonatomic) CADisplayLink *link;
@property (nonatomic) unsigned long long count;
@property (nonatomic) double lastTime;
@property (nonatomic) double interval;
@property (retain, nonatomic) NSMutableDictionary *tickObservers;
@property (nonatomic) double currentFps;

- (id)initWithInterval:(double)a0;
- (id)init;
- (void)dealloc;
- (void)tick:(id)a0;
- (void)updateFpsIndicators:(float)a0;
- (void)start;
- (void)stop;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;

@end
