@class AWECommerceRitVisibleTimeRecorder, NSString, NSTimer, AWEAwemeModel, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AWECommerceTimeProgressService : HTSService <AWECommerceTimeProgressService>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) NSTimer *visibleCheckTimer;
@property (retain, nonatomic) AWECommerceRitVisibleTimeRecorder *timeRecorder;
@property (retain, nonatomic) NSMutableArray *timerCallBackArray;
@property (retain, nonatomic) NSMutableArray *boundaryEvents;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *timerCallbackQueue;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL isStartPinchTransition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)useAdVisibleTimeWithModel:(id)a0;
+ (double)visibleTimeWithModel:(id)a0 interaction:(id)a1;
+ (id)serviceWithModel:(id)a0;

- (void)transitionDidStartPinchTransition;
- (void)triggerComponentActionAfter:(double)a0 block:(id /* block */)a1;
- (void)appWillEnterForegroundNotification:(id)a0;
- (BOOL)shouldCallBoundaryBlock:(double)a0;
- (void)checkBoundaryEvent:(id)a0;
- (void)addTimeObserverForTimes:(id)a0 usingBlock:(id /* block */)a1;
- (void)addTimerCallBack:(id /* block */)a0;
- (void)removeTimerCallBack:(id /* block */)a0;
- (void)appWillEnterBackgroundNotification:(id)a0;
- (void)viewDidAppear;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (void)setup;
- (void)viewDidDisappear;
- (id)currentModel;
- (void)willDisplay;
- (double)visibleTime;
- (void)addBoundaryTimeObserverForTimes:(id)a0 usingBlock:(id /* block */)a1;

@end
