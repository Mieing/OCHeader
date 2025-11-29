@class NSTimer, NSString;

@interface AWEIMScrollPauseBootTaskComponent : AWEIMComponentBase

@property (nonatomic) struct __CFRunLoopObserver { } *runloopObserver;
@property (nonatomic) BOOL isTracking;
@property (retain, nonatomic) NSTimer *resumeTimer;
@property (nonatomic) BOOL enableLog;
@property (nonatomic) double resumeWaitingInterval;
@property (copy, nonatomic) NSString *scene;

+ (BOOL)p_ifSupportMultiScenes;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewWillDisappear;
- (id)p_makeSceneNameWith:(id)a0;
- (void)p_startObserveRunloop;
- (void)p_stopObserveRunloop;
- (void)p_pauseBootTask;
- (void)p_resumeBootTask:(double)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
