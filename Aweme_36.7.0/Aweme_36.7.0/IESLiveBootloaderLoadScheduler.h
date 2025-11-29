@class NSString, CADisplayLink;

@interface IESLiveBootloaderLoadScheduler : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) struct __CFRunLoopObserver { } *beginObserver;
@property (nonatomic) struct __CFRunLoopObserver { } *endObserver;
@property (nonatomic) BOOL refreshTimestamp;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double displayTargetTimestamp;
@property (nonatomic) double runloopBeginTimestamp;
@property (nonatomic) double frameInterval;
@property (nonatomic) BOOL trackingModeEnable;
@property (nonatomic) BOOL isTracking;
@property (nonatomic) BOOL removed;
@property (copy, nonatomic) id /* block */ bootloaderCallback;
@property (nonatomic) double loadLimitTime;
@property (nonatomic) double loadMaxTime;
@property (nonatomic) BOOL valid;
@property (nonatomic) BOOL preloadPause;

+ (id)liveBootloaderLoopConfig;
+ (BOOL)loadEnable;

- (void)removeAllObserver;
- (void)_setDisplayLinkPaused:(BOOL)a0;
- (void)_runloopDidEnd;
- (void)_invokeWithLimit:(double)a0;
- (void)addRunloopObserver;
- (void)removeRunloopObserver;
- (void)runIfNeed;
- (void)addObserverWithCallback:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (void)dealloc;
- (void)_displayLinkDidUpdate:(id)a0;

@end
