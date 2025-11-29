@class BDPRuntimeGame, PlatformCanvasView, KryptonApp, BDPNativeGamePerfMetrics, UIView, BDPUniqueID, NSString;
@protocol BDPEngineFrameDelegate;

@interface BDPKryptonEngineInstance : NSObject <BDPScreenSnapshotProtocol, BDPPageDiagnoseProtocol, BDPBootLifeCycleMessage, DownStreamListener, BDPAppInterfaceOrientationChangeMessage, BDPEngineProtocol, BDPMonitorableObjectProtocol, BDPFrameInfoProtocol>

@property (weak, nonatomic) BDPRuntimeGame *runtime;
@property double enterFrameTimeMs;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) PlatformCanvasView *kryptonView;
@property (retain, nonatomic) KryptonApp *kryptonApp;
@property (retain, nonatomic) BDPNativeGamePerfMetrics *gameMetrics;
@property (weak, nonatomic) id<BDPEngineFrameDelegate> frameDelegate;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } frameDelegateLock;
@property (nonatomic) BOOL enableFPSDegrade;
@property BOOL isPause;
@property BOOL isStarted;
@property BOOL didStopped;
@property (copy) id /* block */ extraServiceRegister;
@property (nonatomic) BOOL isCollectDrawInfo;
@property (copy, nonatomic) NSString *drawInfoRecord;
@property (nonatomic) BOOL useForRendering;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *engineView;
@property (readonly, nonatomic) UIView *renderView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } preRenderViewFrame;
@property (readonly) BOOL isTerminated;

+ (BOOL)preloadEngineWithRuntime:(id)a0;
+ (void)removePreloadedEngine:(id)a0;
+ (void)registerLogger;
+ (id)setupKryptonAppWithRuntime:(id)a0;
+ (id)generateKryptonFeatureFlag:(id)a0;
+ (void)registerServicesAfterSetupEngine:(id)a0 runtime:(id)a1;

- (void)onFirstFrame;
- (void)initViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)applicationFirstFrameDidShow:(id)a0;
- (void)applicationWarmBootDoneWithUniqueID:(id)a0;
- (void)applicationWorkBeforeCloseWithUniqueID:(id)a0;
- (void)setDeviceOrientationChange:(id)a0 targetOrientation:(long long)a1 uniqueID:(id)a2;
- (void)onFrameAvailable:(struct __CVBuffer { } *)a0;
- (void)gatherDiagnoseInfo:(id)a0 triggerType:(id)a1;
- (void)gatherDiagnoseInfo:(id)a0 webview:(id)a1 triggerType:(id)a2;
- (void)takeCanvasSnapshotWithShift:(long long)a0 completionHandler:(id /* block */)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 runtime:(id)a1 uniqueID:(id)a2 useForRendering:(BOOL)a3 extraServiceRegister:(id /* block */)a4;
- (void)fetchMonitorData:(id /* block */)a0;
- (void)monitorDidStart;
- (void)monitorDidStop;
- (id)getEnterFrameTimeMs;
- (void)resizeWithLayer:(id)a0;
- (long long)registerFrameDelegate:(id)a0 size:(struct CGSize { double x0; double x1; })a1 fps:(long long)a2;
- (void)unregisterFrameDelegate:(long long)a0;
- (void)setupEngineInContextThread;
- (void)checkThermalState;
- (void)initDegradeConfig;
- (void)onFrameServiceDoFrame;
- (void)registerMoreServicesAfterSetupEngine;
- (void)_innerStop;
- (BOOL)disableCollectDrawCallForDiagnose;
- (void)resizeKryptonView:(BOOL)a0;
- (id)collectDrawInfoTypeList;
- (void).cxx_destruct;
- (void)pause;
- (void)stop;
- (void)resume;
- (void)dealloc;
- (id)engineName;

@end
