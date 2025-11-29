@class UINavigationController, NSString, MMFinderLiveCameraCastingWireLessChannel, NSDictionary, MMFinderLiveTaskId, NSObject;
@protocol OS_dispatch_queue;

@interface MMFinderLiveCameraCastMgr : MMUserService <MMFinderLiveCameraCastingWireLessChannelDelegate, MMFinderLiveTaskCameraCastingDelegate, MMServiceProtocol>

@property (retain, nonatomic) MMFinderLiveCameraCastingWireLessChannel *wirlessDataChannel;
@property (retain, nonatomic) NSDictionary *castingInfo;
@property (retain, nonatomic) MMFinderLiveTaskId *liveTaskId;
@property (weak, nonatomic) UINavigationController *navigationController;
@property (nonatomic) struct { void *x0; int x1; int x2; int x3; int x4; BOOL x5; } *sendBuffer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sendQueue;
@property (nonatomic) BOOL isSendQueueRunning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (long long)startWirlessCameraCastTask:(id)a0 navigationController:(id)a1;
- (id)dataChannel;
- (void)tryToConnect:(id)a0;
- (void)onPostLive:(id)a0 withCheckFinderObject:(BOOL)a1;
- (void)didConnectToHost;
- (void)didDisconnect:(long long)a0;
- (void)didReadData:(id)a0;
- (void)recvCmdData;
- (void)didOutputEncodeVideoData:(id)a0;
- (void)onCameraCastShutDown;
- (void)onLiveTaskIdUpdate:(id)a0;
- (void)createSendBuffer;
- (void)clearSendBuffer;
- (void)startSendThread;
- (void)stopSendThread;
- (void)sendQueueMain;
- (void).cxx_destruct;

@end
