@class NSString, BDPSchema;
@protocol BDPInteractGame;

@interface BDLOCSonicInstance : NSObject <BDLiveOpenContainerInstance>

@property (retain, nonatomic) BDPSchema *schema;
@property (readonly, copy, nonatomic) NSString *appID;
@property (retain, nonatomic) id<BDPInteractGame> realSonicInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pausePresentCanvas;
- (void)resumePresentCanvas;
- (void)disableAdaptiveFpsMode:(int)a0;
- (void)enableAdaptiveFpsMode:(int)a0 lowestFps:(int)a1 highestFps:(int)a2 watchTouch:(BOOL)a3;
- (void)invokeEvent:(id)a0 params:(id)a1;
- (void)operateFrameBufferState:(BOOL)a0 extra:(id)a1;
- (void)updateSonicViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)getMonitorDataWithComplete:(id /* block */)a0;
- (void)getCanvasSnapshotWithComplete:(id /* block */)a0;
- (void)updateSonicFPS:(unsigned long long)a0;
- (void)getCurrentSonicFPSWithCompletion:(id /* block */)a0;
- (id)appID;
- (void).cxx_destruct;
- (void)pause;
- (void)destroy;
- (void)resume;
- (id)initWithSchema:(id)a0;

@end
