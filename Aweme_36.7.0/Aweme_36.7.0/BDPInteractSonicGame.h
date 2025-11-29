@class BDPInteractGameBootManager, BDPRuntimeInteractGame, NSDictionary, NSString, BDPInteractGameView, BDPUniqueID;
@protocol BDPInteractGameDelegate;

@interface BDPInteractSonicGame : NSObject <BDPInteractGameViewDelegate, BDPBootLifeCycleMessage, BDPInteractGame>

@property (retain, nonatomic) BDPInteractGameBootManager *bootManager;
@property (retain, nonatomic) BDPInteractGameView *gameView;
@property (weak, nonatomic) BDPRuntimeInteractGame *runtime;
@property (weak, nonatomic) id<BDPInteractGameDelegate> delegate;
@property (copy, nonatomic) NSDictionary *liveConfig;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) double sonicGameResumeTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ exceptionHandler;

- (void)pausePresentCanvas;
- (void)resumePresentCanvas;
- (void)disableAdaptiveFpsMode:(int)a0;
- (void)enableAdaptiveFpsMode:(int)a0 lowestFps:(int)a1 highestFps:(int)a2 watchTouch:(BOOL)a3;
- (void)applicationPkgDownloadProgress:(float)a0 uniqueID:(id)a1;
- (void)applicationLoadContent:(id)a0 exception:(id)a1;
- (void)applicationFirstFrameDidShow:(id)a0;
- (void)applicationSubContainerFirstFrameDidShow:(id)a0;
- (void)applicationTaskAndCommonReadyWithUniqueID:(id)a0 bootManager:(id)a1 isColdBoot:(BOOL)a2;
- (void)operateFrameBufferState:(BOOL)a0 extra:(id)a1;
- (void)updateSonicViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateFramesPerSecond:(long long)a0;
- (void)getPreferredFramesPerSecondWithComplete:(id /* block */)a0;
- (void)getMonitorDataWithComplete:(id /* block */)a0;
- (void)getCanvasSnapshotWithComplete:(id /* block */)a0;
- (void)sendFrameBuffer:(struct __CVBuffer { } *)a0 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)blankScreenDetection;
- (void)memoryWarningAction;
- (void)setupBootManager;
- (void)registerMemoryWarning;
- (id)initWithSchema:(id)a0 container:(id)a1 delegate:(id)a2 config:(id)a3;
- (void).cxx_destruct;
- (void)pause;
- (void)didReceiveMemoryWarning;
- (void)destroy;
- (long long)type;
- (void)resume;
- (void)dealloc;

@end
