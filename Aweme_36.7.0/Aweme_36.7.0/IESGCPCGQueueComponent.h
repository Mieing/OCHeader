@class NSString, NSTimer, IESGCPCGQueueView, IESGCPXPlayGameAlertView, UIViewController;

@interface IESGCPCGQueueComponent : IESGCPCGInstanceBaseComponent <IESGCPDIContextSubscriber, IESGCPCGInstanceActions, IESGCPCGInstanceQueueActions, IESGCPCGADRewardActions, IESGCPCGQueueRouter>

@property (retain, nonatomic) IESGCPCGQueueView *queueView;
@property (retain, nonatomic) NSTimer *queueTimer;
@property (nonatomic) BOOL blockEnterXPlayGameFromQueue;
@property (nonatomic) BOOL blockEnterXPlayGameWhileExciteVideo;
@property (nonatomic) BOOL blockEnterXPlayGameWhileBenefitView;
@property (nonatomic) BOOL alreadyWatchExciteVideo;
@property (nonatomic) BOOL showExciteAlertIfNeeded;
@property (copy, nonatomic) id /* block */ adConfigurationBlock;
@property (nonatomic) BOOL isQueueExpired;
@property (weak, nonatomic) UIViewController *queueAlertView;
@property (retain, nonatomic) IESGCPXPlayGameAlertView *queueAlertViewContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDestroy;
- (void)dismissQueueAlertView;
- (void)showQueueAlertViewWithRanking:(long long)a0 abortQueueCallback:(id /* block */)a1;
- (void)playInstance:(id)a0 stageDidChangeFrom:(long long)a1 toStage:(long long)a2 info:(id)a3;
- (void)playInstance:(id)a0 didTerminatedWithMethod:(long long)a1 fromStage:(long long)a2 code:(long long)a3 reason:(id)a4 info:(id)a5;
- (void)playInstance:(id)a0 canJoinQueue:(id)a1 callback:(id /* block */)a2;
- (void)playInstance:(id)a0 didUpdateQueueInfo:(id)a1;
- (void)playInstance:(id)a0 didDequeue:(id)a1;
- (void)playInstance:(id)a0 didFinishQueue:(id)a1;
- (void)playInstance:(id)a0 didExpireQueue:(id)a1;
- (void)onExciteVideoOpenSuccess;
- (void)onExciteVideoCloseWithType:(long long)a0;
- (void)onExciteVideoCountDownEnd;
- (id)serviceBindingProtocols;
- (id)multiBindingProtocols;
- (void)componentDidAttached;
- (void)showQueueViewWithReason:(id)a0;
- (void)showChangeQueueAlert:(id /* block */)a0;
- (void)abortQueue;
- (BOOL)_isContainerShowing;
- (void)onLynxContainer:(id)a0 lifeCycle:(long long)a1;
- (void)startQueue:(id)a0;
- (void)updateQueue:(id)a0;
- (void)finishQueue:(id)a0;
- (void)showQueueExpiredAlert;
- (void)logQueueStartEventWithConfiguration:(id)a0;
- (void)updateQueueParamsWithConfiguration:(id)a0;
- (id)fetchQueueTypeWithConfiguration:(id)a0;
- (void)handleQueueInContainerWithConfiguration:(id)a0;
- (void)_setBlockEnterXPlayGameFromQueue;
- (void)handleFinishQueueLogic:(id)a0;
- (void)safelyShowBlockAlertWithConfiguration:(id)a0 alertType:(long long)a1;
- (BOOL)enableQueuePush;
- (void)_enterXPlayGameFromQueue;
- (void)_trackDequeueWithReason:(id)a0;
- (void)showBlockAlertViewWithExpiredTime:(long long)a0 alertType:(long long)a1 forceDisplay:(BOOL)a2;
- (void)playInstance:(id)a0 didAcceleratedQueueWithRes:(long long)a1 configuration:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)clearQueue;

@end
