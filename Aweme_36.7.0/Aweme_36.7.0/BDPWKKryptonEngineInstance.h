@class BDPRuntimeGame, BDPNativeGamePerfMetrics, WKPlatformCanvasView, NSString, UIView, BDPUniqueID, WKKryptonApp;

@interface BDPWKKryptonEngineInstance : NSObject <BDPScreenSnapshotProtocol, BDPPageDiagnoseProtocol, BDPBootLifeCycleMessage, BDPEngineProtocol, BDPMonitorableObjectProtocol, BDPFrameInfoProtocol>

@property (weak, nonatomic) BDPRuntimeGame *runtime;
@property double enterFrameTimeMs;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) WKPlatformCanvasView *kryptonView;
@property (retain, nonatomic) WKKryptonApp *kryptonApp;
@property (retain, nonatomic) BDPNativeGamePerfMetrics *gameMetrics;
@property (nonatomic) BOOL enableFPSDegrade;
@property BOOL isPause;
@property BOOL isStarted;
@property BOOL didStopped;
@property (copy) id /* block */ extraServiceRegister;
@property (nonatomic) BOOL isCollectDrawInfo;
@property (copy, nonatomic) NSString *drawInfoRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *engineView;
@property (readonly, nonatomic) UIView *renderView;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } preRenderViewFrame;
@property (readonly) BOOL isTerminated;

+ (BOOL)preloadEngineWithRuntime:(id)a0;
+ (void)removePreloadedEngine:(id)a0;
+ (void)registerLogger;
+ (id)setupKryptonAppWithRuntime:(id)a0;
+ (void)registerServicesAfterSetupEngine:(id)a0 runtime:(id)a1;

- (void)onFirstFrame;
- (void)initViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)applicationFirstFrameDidShow:(id)a0;
- (void)applicationWarmBootDoneWithUniqueID:(id)a0;
- (void)applicationWorkBeforeCloseWithUniqueID:(id)a0;
- (void)gatherDiagnoseInfo:(id)a0 triggerType:(id)a1;
- (void)gatherDiagnoseInfo:(id)a0 webview:(id)a1 triggerType:(id)a2;
- (void)takeCanvasSnapshotWithShift:(long long)a0 completionHandler:(id /* block */)a1;
- (void)fetchMonitorData:(id /* block */)a0;
- (void)monitorDidStart;
- (void)monitorDidStop;
- (id)getEnterFrameTimeMs;
- (void)resizeWithLayer:(id)a0;
- (void)setupEngineInContextThread;
- (void)checkThermalState;
- (void)initDegradeConfig;
- (void)onFrameServiceDoFrame;
- (void)registerMoreServicesAfterSetupEngine;
- (void)_innerStop;
- (BOOL)disableCollectDrawCallForDiagnose;
- (void)resizeKryptonView:(BOOL)a0;
- (id)collectDrawInfoTypeList;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 runtime:(id)a1 uniqueID:(id)a2 extraServiceRegister:(id /* block */)a3;
- (void).cxx_destruct;
- (void)pause;
- (void)stop;
- (void)resume;
- (void)dealloc;
- (id)engineName;

@end
