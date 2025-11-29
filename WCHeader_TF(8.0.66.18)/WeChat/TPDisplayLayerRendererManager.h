@class UIView, NSObject, TPDisplayLayerView;

@interface TPDisplayLayerRendererManager : NSObject

@property (retain, nonatomic) TPDisplayLayerView *displayLayerView;
@property (retain, nonatomic) UIView *targetView;
@property (nonatomic) int gravity;
@property (nonatomic) struct ITPRendererInterruptCallback { void /* function */ **x0; } *interruptCallback;
@property BOOL waitingForMainThread;
@property BOOL rendererActivePaused;
@property (nonatomic) int tryLockErrorCount;
@property (nonatomic) BOOL contentModeObserved;
@property (nonatomic) BOOL enableViewContentMode;
@property (retain, nonatomic) NSObject *renderLock;
@property (nonatomic) BOOL needUpdateRenderTarget;
@property (nonatomic) BOOL atBottom;
@property BOOL backgroundRenderingEnabled;
@property BOOL isInBackground;

- (id)init;
- (void)dealloc;
- (void)configure:(id)a0;
- (BOOL)setup;
- (void)destory;
- (int)drawFrame:(struct TPFrame { int x0; char *x1[8]; int x2[8]; char **x3; int x4; int x5; int x6; long long x7; long long x8; long long x9; void *x10; long long x11; int x12; struct TPFrameSideData **x13; int x14; int x15; int x16; int x17; struct TPRational { int x0; int x1; } x18; int x19; int x20; int x21; int x22; int x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; int x28; int x29; int x30; unsigned long long x31; int x32; struct TPFrameReleaseDataCB { void /* function */ *x0; void *x1; } x33; struct TPFrameReleasePlanarDataCB { void /* function */ *x0; void *x1; } x34; struct TPFrameInternal *x35; int x36; long long x37; } *)a0;
- (void)setRenderTarget:(void *)a0;
- (int)updateRenderTarget;
- (int)waitForMainThread;
- (void)setVideoGravity:(int)a0;
- (id)getAVLayerVideoGravityFromGravity:(int)a0;
- (id)getAVLayerVideoGravityFromContentMode:(long long)a0;
- (void)applicationWillEnterForeground;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)applicationDidEnterBackground;
- (void)applicationWillTerminate;
- (void)registerApplicationObservers;
- (void)unregisterApplicationObservers;
- (void)observeContentMode;
- (void)unObserveContentMode;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setParam:(int)a0 withBlock:(struct TPRendererParamBlock { int x0; long long x1; void *x2; })a1;
- (void)changeRendererActivePausedInBackground;
- (void).cxx_destruct;

@end
