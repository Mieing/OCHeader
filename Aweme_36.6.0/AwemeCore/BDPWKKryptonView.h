@class WKPlatformCanvasView, WKKryptonApp, NSString, KryptonApp, BDPUniqueID, BDPRuntimeGame, PlatformCanvasView, BDPNativeGamePerfMetrics;
@protocol BDPEngineFrameDelegate, BDPWKKryptonPageProtocol;

@interface BDPWKKryptonView : UIView <WKDownStreamListener, DownStreamListener, BDPScreenSnapshotProtocol, BDPMonitorableObjectProtocol>

@property (retain, nonatomic) BDPNativeGamePerfMetrics *gameMetrics;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (weak, nonatomic) id<BDPWKKryptonPageProtocol> webview;
@property (retain, nonatomic) WKKryptonApp *app;
@property (retain, nonatomic) KryptonApp *appMerged;
@property (nonatomic) BOOL useKryptonMerged;
@property (weak, nonatomic) BDPRuntimeGame *runtime;
@property (retain, nonatomic) WKPlatformCanvasView *kryptonView;
@property (retain, nonatomic) PlatformCanvasView *kryptonMergedView;
@property (weak, nonatomic) id<BDPEngineFrameDelegate> frameDelegate;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } frameDelegateLock;
@property (nonatomic) BOOL enableMetal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onFirstFrame;
- (void)onFrameAvailable:(struct __CVBuffer { } *)a0;
- (void)takeCanvasSnapshotWithShift:(long long)a0 completionHandler:(id /* block */)a1;
- (void)fetchMonitorData:(id /* block */)a0;
- (void)monitorDidStart;
- (void)monitorDidStop;
- (long long)registerFrameDelegate:(id)a0 size:(struct CGSize { double x0; double x1; })a1 fps:(long long)a2;
- (void)unregisterFrameDelegate:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 runtime:(id)a1 uniqueId:(id)a2 webviewPage:(id)a3;
- (BOOL)isKryptonMerged;
- (void)setupKryptonMergedApp;
- (void)setupKryptonApp;
- (void).cxx_destruct;
- (void)stop;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
