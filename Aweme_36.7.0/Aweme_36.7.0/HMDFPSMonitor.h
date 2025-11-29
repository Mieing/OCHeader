@class HMDFluencyDisplayLinkCallbackObj, NSString, NSMutableSet, HMDFluencyDisplayLink, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface HMDFPSMonitor : HMDMonitor <HMDMonitorCustomSwitch>

@property (nonatomic) double lastUpdateTime;
@property (nonatomic) unsigned long long frameCount;
@property (nonatomic) double lastFPS;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fpsQueue;
@property (retain, nonatomic) NSMutableArray *customScenes;
@property (copy, nonatomic) NSString *customSceneStr;
@property (retain, nonatomic) NSMutableSet *fpsCallbacks;
@property (retain, nonatomic) NSMutableSet *fpsCallbackObjs;
@property (nonatomic) unsigned long long maximumFramesPerSecond;
@property (nonatomic) double targetTimestamp;
@property (nonatomic) double lastTimestamp;
@property (retain, nonatomic) HMDFluencyDisplayLink *fluencyDisplayLink;
@property (retain, nonatomic) HMDFluencyDisplayLinkCallbackObj *callbackObj;
@property (nonatomic) int refCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMonitor;

- (void)updateConfig:(id)a0;
- (void)startWithInterval:(double)a0;
- (void)addFPSMonitorCallback:(id /* block */)a0;
- (unsigned long long)reporterPriority;
- (void)enterCustomScene:(id)a0;
- (void)leaveCustomScene:(id)a0;
- (void)registerDisplayLink;
- (void)unRegisterDisplayLink;
- (BOOL)isDisplayLinkStarted;
- (id)refresh_async;
- (void)callFPSMonitorCallback:(id)a0;
- (void)p_updateFrameWithTimestamp:(double)a0 duration:(double)a1 targetTimestamp:(double)a2;
- (void)addFPSRecordWithFPSValue:(double)a0 scene:(id)a1 isScrolling:(BOOL)a2 extralValue:(id)a3;
- (void)enterFluencyCustomSceneWithUniq:(id)a0;
- (void)leaveFluencyCustomSceneWithUniq:(id)a0;
- (void)removeFPSMoitorCallback:(id /* block */)a0;
- (id)addFPSMonitorCallbackObject:(id /* block */)a0;
- (void)removeFPSMonitorCallbackObject:(id)a0;
- (void)monitorRunWithSpecialScene;
- (void)monitorStopWithSpecialScene;
- (void).cxx_destruct;
- (void)suspend;
- (id)init;
- (void)stop;
- (void)start;
- (void)resume;
- (void)dealloc;
- (Class)storeClass;

@end
