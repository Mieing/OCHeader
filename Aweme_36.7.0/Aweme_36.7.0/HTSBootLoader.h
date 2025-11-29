@class NSLock, HTSBootConfiguration, NSMutableArray, _HTSBootDelayQueue;
@protocol HTSBootConfigInterceptor;

@interface HTSBootLoader : NSObject

@property (nonatomic) BOOL isSuspend;
@property (nonatomic) BOOL canSuspend;
@property (retain, nonatomic) HTSBootConfiguration *configuration;
@property (retain, nonatomic) _HTSBootDelayQueue *feedReadyDelayQueue;
@property (retain, nonatomic) _HTSBootDelayQueue *launchCompletionQueue;
@property (retain, nonatomic) _HTSBootDelayQueue *foregroundDelayQueue;
@property (nonatomic) unsigned long long curLaunchState;
@property (weak, nonatomic) id<HTSBootConfigInterceptor> configInterceptor;
@property (retain, nonatomic) NSMutableArray *taskSignals;
@property (retain, nonatomic) NSLock *taskSignalLock;
@property (nonatomic) BOOL launchCompletionFinished;
@property (nonatomic) BOOL feedReadyFinished;

+ (id)sharedLoader;

- (void)boot;
- (void)bootWithConfig:(id)a0 interceptor:(id)a1;
- (void)_observerRunloopFree:(id /* block */)a0;
- (void)runBootNodesWithList:(id)a0;
- (void)triggerNodesImmediatelyIfNeeded;
- (void)bootWithConfig:(id)a0;
- (void)saveTaskSignal:(id)a0;
- (void)_runFirstEnterForeground;
- (void)_runLaunchCompletion;
- (void)_runFeedReady;
- (void)_runWillBackNormal;
- (void)_runOrDelayTaskOfStage:(long long)a0 thread:(long long)a1 block:(id /* block */)a2;
- (unsigned long long)_launchState;
- (void).cxx_destruct;
- (BOOL)suspend;
- (id)init;
- (void)resume;

@end
