@class IESLiveAnchorContext, NSString, HTSGroupedLiveMessageHandler, IESLiveAnchorCloseInfo;
@protocol IESLiveFinishViewFactory, IESLiveMonitor;

@interface IESLiveAnchorCloseAnchorRoomModule : IESLiveAnchorExecutionModule <IESLiveUserActions, HTSLiveMessageSubscriber>

@property (retain, nonatomic) IESLiveAnchorContext *context;
@property (retain, nonatomic) id<IESLiveFinishViewFactory> finishViewFactory;
@property (retain, nonatomic) HTSGroupedLiveMessageHandler *messageHandler;
@property (retain, nonatomic) IESLiveAnchorCloseInfo *closeInfo;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (nonatomic) BOOL isDispatchRoomWillClose;
@property (nonatomic) BOOL isDispatchRoomDidClose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)userDidLogout;
- (void)userDidUpdate:(id)a0;
- (void)bindService;
- (id)subscribeMessages;
- (BOOL)liveRoomSceneScreenshotRestartEnable;
- (void)showFinishViewController:(id)a0;
- (void)liveRoomWillDealloc;
- (id)loadControlMessageHandler;
- (void)dispatchLiveRoomWillCloseMessageIfNeeded;
- (void)dispatchLiveRoomDisCloseMessageIfNeeded;
- (void)handleLiveStop;
- (void)handleStreamDetectsCriticalError;
- (void)closeCurrentAndShowFinishController;
- (void)closeVCOnly;
- (id)createFinishController;
- (id)createFinishViewController;
- (void).cxx_destruct;
- (void)setup;
- (void)messageReceived:(id)a0;

@end
