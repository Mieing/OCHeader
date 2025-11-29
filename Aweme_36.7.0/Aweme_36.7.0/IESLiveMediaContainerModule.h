@class HTSLive4LayerContainerView, IESLiveMediaContainerContext, IESLiveMediaAuditView;
@protocol HTSLivePluginLayoutMachineProvider, IESLiveTapAction;

@interface IESLiveMediaContainerModule : IESLiveMediaExecutionBaseModule

@property (retain, nonatomic) IESLiveMediaContainerContext *containerContext;
@property (weak, nonatomic) HTSLive4LayerContainerView *containerView;
@property (retain, nonatomic) id<HTSLivePluginLayoutMachineProvider> pluginLayoutMachine;
@property (retain, nonatomic) IESLiveMediaAuditView *mediaAuditView;
@property (retain, nonatomic) id<IESLiveTapAction> tapAction;

- (void)didClickContainerView:(id)a0;
- (void)loadTapGestureRecognizer;
- (void)subscribeExecutionMessage;
- (void)initialize:(id)a0 params:(id)a1;
- (void)closeMediaPreviewRoom;
- (void)loadMediaAudit;
- (void)handleMessage:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)init;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;

@end
