@class NSString, BDPSonicInteractGameInstance, SonicView, BDPUniqueID, BDPVConsole, NSDictionary, BDPRuntimeInteractGame, BDPInteractGameSubView;
@protocol BDPInteractGameViewDelegate;

@interface BDPInteractGameView : UIView <SonicOnFrameDelegate, SonicViewPaintListener, BDPMonitorableObjectProtocol> {
    BOOL _isFirstFrame;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (weak, nonatomic) BDPRuntimeInteractGame *runtime;
@property (retain, nonatomic) SonicView *sonicView;
@property (retain, nonatomic) BDPVConsole *vConsole;
@property (retain, nonatomic) NSString *sonicId;
@property (retain, nonatomic) BDPSonicInteractGameInstance *sonicInstance;
@property (retain, nonatomic) BDPInteractGameSubView *subGameView;
@property (copy, nonatomic) NSDictionary *extGameConfig;
@property (weak, nonatomic) id<BDPInteractGameViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onFrame;
- (void)pausePresentCanvas;
- (void)resumePresentCanvas;
- (void)disableAdaptiveFpsMode:(int)a0;
- (void)enableAdaptiveFpsMode:(int)a0 lowestFps:(int)a1 highestFps:(int)a2 watchTouch:(BOOL)a3;
- (void)onFramebufferReady:(struct __CVBuffer { } *)a0 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)startExceptionMonitor;
- (void)operateFrameBufferState:(BOOL)a0 extra:(id)a1;
- (void)updateSonicViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateFramesPerSecond:(long long)a0;
- (void)getPreferredFramesPerSecondWithComplete:(id /* block */)a0;
- (void)getCanvasSnapshotWithComplete:(id /* block */)a0;
- (void)setAppViewPause:(BOOL)a0;
- (void)eventCpJsLoadStart;
- (void)eventCpJsLoadResult:(id)a0;
- (void)stopExceptionMonitor;
- (void)fetchMonitorData:(id /* block */)a0;
- (void)monitorDidStart;
- (void)monitorDidStop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 runtime:(id)a1 uniqueID:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 runtime:(id)a1 subGameView:(id)a2 uniqueID:(id)a3;
- (void)showVConsole:(id)a0;
- (void)loadGameContent:(id /* block */)a0;
- (void)handleCastSettings:(id)a0;
- (void).cxx_destruct;
- (void)pause;
- (void)resume;
- (void)dealloc;

@end
