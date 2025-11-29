@class NSLock, NSString, UIView, BaseState, NSThread, NSMutableDictionary, YtEventData, NSMutableArray;
@protocol YtDeviceDelegate;

@interface YtStateMachine : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } stateLock;
    unsigned char isStarted;
    YtEventData *currentData;
    NSMutableArray *eventQueue;
    NSLock *eventLock;
    NSThread *eventHandleThread;
    unsigned char startEventHandler;
    unsigned long long timeTickPrev;
    unsigned long long totalDeltaTime;
    int timeTickCount;
}

@property (retain, nonatomic) BaseState *currentState;
@property (retain, nonatomic) NSString *firstStateName;
@property (retain, nonatomic) NSMutableDictionary *stateMap;
@property (copy, nonatomic) id /* block */ onEventBlock;
@property (nonatomic) long long workMode;
@property (nonatomic) id<YtDeviceDelegate> cameraDevice;
@property (nonatomic) float currentFrameLux;
@property (retain, nonatomic) UIView *shapeView;
@property (copy, nonatomic) id /* block */ onRequestBlock;

+ (id)sharedInstance;
+ (void)clearInstance;

- (id)init;
- (void)deInit;
- (void)start:(id)a0 threadPriority:(float)a1;
- (void)reset;
- (void)stop;
- (void)update:(struct Mat { int x0; int x1; int x2; int x3; char *x4; int *x5; char *x6; char *x7; char *x8; struct MatAllocator *x9; struct MSize { int *x0; } x10; struct MStep { unsigned long long *x0; unsigned long long x1[2]; } x11; })a0 withDepth:(id)a1;
- (void)update:(struct Mat { int x0; int x1; int x2; int x3; char *x4; int *x5; char *x6; char *x7; char *x8; struct MatAllocator *x9; struct MSize { int *x0; } x10; struct MStep { unsigned long long *x0; unsigned long long x1[2]; } x11; })a0;
- (void)updateSDKSetting:(id)a0;
- (void)handleEvent:(id)a0;
- (void)registerState:(id)a0;
- (void)transitNow:(id)a0;
- (void)transitNextRound:(id)a0;
- (id)getStateByName:(id)a0;
- (void)handlePause;
- (void)handleResume;
- (void)sendUIEvent:(id)a0;
- (void)sendStateEvent:(id)a0;
- (void)sendCameraEvent:(id)a0;
- (BOOL)isRunning;
- (void)eventHandler;
- (void)cleanUpQueue;
- (void).cxx_destruct;

@end
