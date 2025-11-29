@class HMDOTTrace, NSMutableDictionary, HMDOTSpan, NSDate, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface HMDLaunchTracingTracker : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _spanDictLock;
}

@property (retain, nonatomic) HMDOTTrace *launchTrace;
@property (retain) NSDate *accurateLoadDate;
@property (retain, nonatomic) HMDOTSpan *appLanuchSpan;
@property (retain, nonatomic) HMDOTSpan *execToLoadSpan;
@property (retain, nonatomic) HMDOTSpan *loadToFinishLaunchSpan;
@property (retain) HMDOTSpan *finishLaunchToRenderSpan;
@property (nonatomic) BOOL needCustomFinish;
@property (nonatomic) unsigned long long insertMode;
@property BOOL isLanuchFinished;
@property BOOL isRunning;
@property (retain, nonatomic) NSMutableDictionary *customSpanDict;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *backgroundLaunchDetermined;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundLaunchWaitingDeteminedQueue;
@property (copy, nonatomic) id /* block */ firstRenderCompletion;

+ (id)processExecDate;
+ (void)load;
+ (id)sharedTracker;

- (id)loadToDidFinishLaunchSpan;
- (id)didFinishLaunchToRenderSpan;
- (void)resetLoadDate:(id)a0;
- (void)startWithCustomFinish:(BOOL)a0;
- (void)customFinish;
- (void)setupLaunchTraceOnlyOnce;
- (void)setupLoadAndFinishLaunchSpan;
- (void)setLoadDateIfNeeded;
- (void)setupDidFinishLaunchDate;
- (void)finishStandardLaunchTraceIfNeeded;
- (void)setupLoadToFinishTraceOnlyOnceWithLoadDate:(id)a0;
- (void)updateLoadDateIfNeeded:(id)a0;
- (void)finishedTrace;
- (void)observeFirstRenderWithBlock:(id /* block */)a0;
- (void)updateAccurateLoadDate:(id)a0;
- (id)addRootSpanAfterFirstRenderWithName:(id)a0;
- (void)addFilterTag:(id)a0 value:(id)a1;
- (id)fetchCustomRootSpanWithOperationName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;
- (void)dealloc;

@end
