@class RTVInteractionPreviewListView, NSString, RTVInteractionTracker;
@protocol RTVInteractionController, RTVInteractionTipsController, RTVInteractionPreviewContainerConfigurator, RTVInteractionPreviewContainerMessageController, RTVXRRoomSessionControllerInterface, RTVInteractionControlViewController, RTVInteractionConfigureManagerInterface, RTVInteractionPreviewContentDelegate, RTVUserProfileManagerInterface, RTVInteractionPreviewContainerPariticipantsController, RTVSessionPreviewProcotol, RTVXRControllerInjector, RTVInteractionPreviewContentContext, RxInjector, RTVInteractionRecorder;

@interface RTVInteractionPreviewContainer : UIView <RTVXRControllerInterface, RTVVoipSessionObserver, RTVInteractionPreviewListViewDelegate, RTVInteractionPreviewFullContent>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVInteractionController> interactionController;
@property (readonly, nonatomic) id<RTVInteractionConfigureManagerInterface> configureManager;
@property (readonly, weak, nonatomic) id<RTVInteractionPreviewContainerConfigurator> previewContainerConfigure;
@property (readonly, weak, nonatomic) id<RTVInteractionPreviewContainerPariticipantsController> pariticipantsController;
@property (readonly, weak, nonatomic) id<RTVInteractionPreviewContainerMessageController> messageController;
@property (readonly, weak, nonatomic) id<RTVInteractionControlViewController> interactionControlViewController;
@property (readonly, nonatomic) RTVInteractionTracker *tracker;
@property (readonly, weak, nonatomic) id<RTVInteractionRecorder> interactionStateRecorder;
@property (readonly, weak, nonatomic) id<RTVSessionPreviewProcotol> session;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly, nonatomic) id<RTVInteractionPreviewContentContext> context;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) RTVInteractionPreviewListView *previewListView;
@property (nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) id<RTVInteractionTipsController> tipsController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<RTVInteractionPreviewContentDelegate> delegate;

- (void)rtv_awakeFromControllerInjector;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)__createComponents;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (void)__configComponents;
- (void)didChangeInteractionController:(id)a0 context:(id)a1;
- (BOOL)showInviteGuideTipsView:(id)a0;
- (void)deactivatePreview;
- (void)beginGestureInteractionWithType:(unsigned long long)a0;
- (void)endGestureInteractionWithType:(unsigned long long)a0;
- (void)updateLayoutWithContentHeight:(double)a0;
- (double)minPreviewHeight;
- (void)notifyChangeToActive:(BOOL)a0;
- (void)layoutPreviewContainer;
- (void).cxx_destruct;
- (id)contentView;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)activePreview;
- (double)containerWidth;

@end
