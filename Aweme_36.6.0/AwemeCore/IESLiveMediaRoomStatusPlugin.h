@class HTSGroupedLiveMessageHandler, NSString, HTSLivMediaPreviewRoomStatusManager, IESLiveUIAspectUtil, NSAttributedString, IESLiveAnchorWatchTime, NSDate, IESLiveMediaContainerContext;
@protocol HTSLiveDetailRouter, IESLiveFinishViewFactory, IESLiveMonitor;

@interface IESLiveMediaRoomStatusPlugin : IESLiveContainerBasePlugin <IESLiveAnchorPreviewActions, IESLiveAnchorCloseAction, HTSLiveAnchorActions, HTSLiveMessageSubscriber, IESLiveAnchorRoomStatusChangeEvents>

@property (retain, nonatomic) IESLiveMediaContainerContext *containerContext;
@property (retain, nonatomic) HTSLivMediaPreviewRoomStatusManager *roomStatusManager;
@property (retain, nonatomic) id<HTSLiveDetailRouter> router;
@property (retain, nonatomic) id<IESLiveFinishViewFactory> finishViewFactory;
@property (retain, nonatomic) IESLiveAnchorWatchTime *watchTime;
@property (retain, nonatomic) HTSGroupedLiveMessageHandler *messageHandler;
@property (retain, nonatomic) IESLiveUIAspectUtil *uiAspectUtil;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (retain, nonatomic) NSString *forbiddenURL;
@property (retain, nonatomic) NSAttributedString *title;
@property (retain, nonatomic) NSAttributedString *violationReason;
@property (retain, nonatomic) NSAttributedString *displayText;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSDate *liveStartDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startAnchorLiveWithRoom:(id)a0;
- (void)pauseAnchorLiveWithType:(unsigned long long)a0;
- (void)resumeAnchorLiveWithType:(long long)a0;
- (void)stopAnchorLive;
- (void)closeAnchorRoomByForce:(BOOL)a0 reason:(long long)a1 trace:(id)a2 completion:(id /* block */)a3;
- (void)_clearAndQuit;
- (void)showFinishViewController:(id)a0;
- (void)clearControllerAndShowFinish:(id)a0;
- (id)loadControlMessageHandler;
- (void)logSceneEvent:(id)a0 status:(unsigned long long)a1;
- (void)__stopLive;
- (void)__closeRoomByPlatformWithForbiddenUrl:(id)a0 title:(id)a1 violationReason:(id)a2 displayText:(id)a3;
- (void)__closeRoomByAccountExited;
- (void)didLoad:(id)a0;
- (void)realStartLive;
- (void)sendStartNormalLiveMessage;
- (void)pr_gotoAnchorLivePageWithRoomModel:(id)a0;
- (void)sendDidCloseRoomMessage:(id)a0;
- (void)sendWillCloseRoomMessage;
- (id)createFinishViewControllerWithRoom:(id)a0 forbiddenUrl:(id)a1 title:(id)a2 violationReason:(id)a3 displayText:(id)a4 finishRoomconfig:(id)a5;
- (id)pr_createAnchorViewControllerWithRoom:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)messageReceived:(id)a0;

@end
