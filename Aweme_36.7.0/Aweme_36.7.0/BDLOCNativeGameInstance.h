@class BDPGameScreenRecorder, NSString, BDPUniqueID, BDPTimorLaunchParam;
@protocol BDLOCNativeGameInstanceDelegate;

@interface BDLOCNativeGameInstance : NSObject <BDPLiveEngineProtocol, BDPEngineFrameDelegate, BDPBootLifeCycleMessage, BDPContainerLifeCycleMessage, BDPGameScreenRecorderDelegate, BDPAppInterfaceOrientationChangeMessage, BDLiveOpenContainerInstance>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) BDPGameScreenRecorder *recorder;
@property (weak, nonatomic) id<BDLOCNativeGameInstanceDelegate> listener;
@property (retain, nonatomic) BDPTimorLaunchParam *timorLaunchParams;
@property (copy, nonatomic) NSString *appID;
@property (nonatomic) long long orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearWarmCache:(id)a0;
+ (void)forceClearWarmCache:(id)a0;

- (void)updateSchema:(id)a0;
- (void)applicationEnterBackground:(id)a0;
- (void)viewDidLoad:(id)a0 uniqueID:(id)a1;
- (void)viewWillAppear:(id)a0 uniqueID:(id)a1;
- (void)viewDidAppear:(id)a0 uniqueID:(id)a1;
- (void)viewWillDisappear:(id)a0 uniqueID:(id)a1;
- (void)viewDidDisappear:(id)a0 uniqueID:(id)a1;
- (void)applicationFirstFrameDidShow:(id)a0;
- (void)applicationSCFirstFrameDidShow:(id)a0;
- (void)applicationWarmBootDoneWithUniqueID:(id)a0;
- (void)applicationWorkBeforeCloseWithUniqueID:(id)a0 closeType:(id)a1;
- (void)applicationTaskAndCommonReadyWithUniqueID:(id)a0 bootManager:(id)a1 isColdBoot:(BOOL)a2;
- (void)closeContainer:(id /* block */)a0;
- (void)interfaceOrientationChange:(id)a0 targetOrientation:(long long)a1 uniqueID:(id)a2;
- (void)registerGameMessage;
- (void)receiveEnterFullScreenNotification:(id)a0;
- (void)receiveEnterSmallScreenNotification:(id)a0;
- (void)applicationEnterForeground:(id)a0;
- (BOOL)isCurrentSmallScreen;
- (BOOL)isXplayGame;
- (void)appID:(id)a0 didReceiveMergeStreamFailed:(id)a1;
- (void)onFirstFrameDidShow:(id)a0;
- (void)uniqueID:(id)a0 didReceiveMessage:(id)a1 callback:(id /* block */)a2;
- (void)appID:(id)a0 onAudioFrameReady:(id)a1;
- (void)screenRecorder:(id)a0 sendFrameBuffer:(struct __CVBuffer { } *)a1 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)screenRecorder:(id)a0 runningStatusChange:(BOOL)a1;
- (id)initWithSchema:(id)a0 params:(id)a1 listener:(id)a2;
- (void)startScreenCast:(struct CGSize { double x0; double x1; })a0;
- (void)stopScreenCast;
- (BOOL)isXScreen;
- (void)startMixStreamWithForwardInfo:(id)a0 mixInfo:(id)a1;
- (void)stopMixStream;
- (void)sendMessageToGame:(id)a0 data:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)launch;
- (BOOL)isRecording;
- (void)dealloc;
- (id)uniqueIDString;

@end
