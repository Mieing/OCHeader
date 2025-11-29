@class NSTimer, AWEUITaskSpreadQueue, CADisplayLink;

@interface AWEUITaskDelaySpreadExecutor : NSObject

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double lastTargetTimestamp;
@property (nonatomic) long long skipCount;
@property (nonatomic) double lastInvokeTimestamp;
@property (nonatomic) double originInterval;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) AWEUITaskSpreadQueue *queue;
@property (nonatomic) BOOL enabled;
@property (nonatomic) unsigned long long runningIntervalCount;
@property (nonatomic) double runningLimitation;
@property (nonatomic) unsigned long long intervalCount;
@property (nonatomic) double interval;
@property (nonatomic) double maxInterval;
@property (nonatomic) double cpuUsageThreshold;
@property (nonatomic) double cpuUsageCheckInterval;
@property (nonatomic) BOOL enableCpuUsageOnly;
@property (nonatomic) BOOL suspended;

+ (id)sharedInstance;

- (BOOL)cancelGroup:(id)a0;
- (id)invokeBlock:(id /* block */)a0 afterDelay:(double)a1;
- (void)_forceInvokeTasks:(id)a0;
- (void)_resetDisplayLink;
- (void)resetIntervalConfig;
- (void)disableCpuUsageOnly;
- (id)invokeBlock:(id /* block */)a0 afterDelay:(double)a1 groupID:(id)a2 finishBlock:(id /* block */)a3;
- (void)_setupDisplayLinkPaused:(BOOL)a0;
- (BOOL)groupDidFinished:(id)a0;
- (void)_invokeBlockWithCurrentTime:(double)a0 runTimeLimitation:(double)a1;
- (void)cpuUsageOnly;
- (void)adjustIntervalForCpuUsage;
- (id)invokeBlock:(id /* block */)a0 groupID:(id)a1;
- (id)invokeBlock:(id /* block */)a0 groupID:(id)a1 finishBlock:(id /* block */)a2;
- (void)insertBlocks:(id)a0 groupID:(id)a1;
- (void)flushGroup:(id)a0;
- (BOOL)cancelTask:(id)a0;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)startTimer;
- (id)init;
- (void)_invalidateDisplayLink;
- (id)invokeBlock:(id /* block */)a0;
- (void)dealloc;
- (void)_displayLinkDidUpdate:(id)a0;
- (void)endImmediately;

@end
