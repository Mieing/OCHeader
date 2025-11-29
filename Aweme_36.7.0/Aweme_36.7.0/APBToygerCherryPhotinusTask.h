@class ZLZPhotinusEmulator, NSString, NSMutableDictionary, ZLZVideoDispenser;

@interface APBToygerCherryPhotinusTask : APBToygerCherryDetectTask <ZLZVideoDispenserDelegate, DTFFaceViewDelegate, APBToygerDataCenterDelegate>

@property (retain) NSString *zimId;
@property (retain) ZLZPhotinusEmulator *emulator;
@property (retain) ZLZVideoDispenser *videoDispenser;
@property void *hasEnoughFramesContext;
@property void *filesReadyContext;
@property (copy) id /* block */ failSafeBlock;
@property (copy) id /* block */ scheduledFailSafeBlock;
@property (retain, nonatomic) NSMutableDictionary *monitorDict;
@property (nonatomic) BOOL willTeardown;
@property (nonatomic) BOOL enableSmoothTransition;
@property (nonatomic) BOOL isPhotinusing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dispenser:(id)a0 onSampleBufferAvailable:(struct opaqueCMSampleBuffer { } *)a1;
- (void)startPhotinus;
- (void)teardownPhotinusSession;
- (void)remoteLogWithSeed:(id)a0 appendData:(id)a1;
- (void)invokeWithPipeInfo:(id)a0;
- (void)exitWithResult:(int)a0 failReason:(id)a1 retCodeSub:(id)a2 retMessageSub:(id)a3;
- (void)cameraControllerCaptureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)viewExit:(id)a0;
- (void)playBtn:(id)a0;
- (void)toygerService:(id)a0 frameDidUpdate:(id)a1;
- (void)processEvent:(id)a0 withCompletionCallback:(id /* block */)a1;
- (void).cxx_destruct;
- (void)reset;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
