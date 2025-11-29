@class SonicApp, BDPRuntimeInteractGame;
@protocol SonicCanvasService;

@interface BDPSonicInteractGameInstance : BDPCanvasEngineBaseInstance

@property (weak, nonatomic) BDPRuntimeInteractGame *runtime;
@property (retain, nonatomic) SonicApp *sonicApp;
@property (retain, nonatomic) id<SonicCanvasService> sonicCanvasService;

- (id)convertBitmapRGBA8ToUIImage:(char *)a0 withWidth:(int)a1 withHeight:(int)a2;
- (void)openMonitor;
- (void)closeMonitor;
- (void)pausePresentCanvas;
- (void)resumePresentCanvas;
- (void)disableAdaptiveFpsMode:(int)a0;
- (void)enableAdaptiveFpsMode:(int)a0 lowestFps:(int)a1 highestFps:(int)a2 watchTouch:(BOOL)a3;
- (void)updateFramesPerSecond:(long long)a0;
- (void)getPreferredFramesPerSecondWithComplete:(id /* block */)a0;
- (void)getMonitorDataWithComplete:(id /* block */)a0;
- (id)getRuntime;
- (void)setupEngineIfNeededWithCompletion:(id /* block */)a0;
- (void)doResume;
- (void)doStop;
- (void)setupDefaultSonicAppWithNapiLoader:(id)a0;
- (void)setupCustomService;
- (void)removeSonicView:(id)a0 completion:(id /* block */)a1;
- (void)addSonicView:(id)a0 subGameView:(id)a1 completion:(id /* block */)a2;
- (void)getCanvasSnapshotWithWidth:(long long)a0 height:(long long)a1 sonicId:(id)a2 complete:(id /* block */)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (void)doPause;
- (void)clearInstance;

@end
