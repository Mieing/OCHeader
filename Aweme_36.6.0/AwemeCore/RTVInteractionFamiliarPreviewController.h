@class NSString, RTVBasePreviewView, RTVPreviewViewModel, UIViewController;
@protocol RxInjector, RTVInteractionTipsController, RTVXRRoomSessionControllerInterface, RTVXRControllerInjector, RTVInteractionRecorder, RTVFeedContentController, RTVXRInteractionController, RTVSettingsManager, RTVXRCaptureController, RTVInteractionPreviewContainerController, RTVInteractionToolBarViewController;

@interface RTVInteractionFamiliarPreviewController : NSObject <RTVPreviewViewDelegate, RTVXRRoomSessionControllerObserver, RTVInteractionPreviewControllerProtocol>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (retain, nonatomic) RTVBasePreviewView *preview;
@property (retain, nonatomic) RTVPreviewViewModel *model;
@property (retain, nonatomic) id context;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomSessionController;
@property (readonly, weak, nonatomic) UIViewController<RTVInteractionToolBarViewController> *toolBarViewController;
@property (readonly, weak, nonatomic) id<RTVXRInteractionController> xrInteractionController;
@property (readonly, nonatomic) id<RTVInteractionTipsController> tipsController;
@property (readonly, weak, nonatomic) id<RTVFeedContentController> feedContentController;
@property (readonly, weak, nonatomic) id<RTVXRCaptureController> captureController;
@property (readonly, nonatomic) id<RTVSettingsManager> settingsManager;
@property (readonly, weak, nonatomic) UIViewController<RTVInteractionPreviewContainerController> *previewContainerController;
@property (readonly, weak, nonatomic) id<RTVInteractionRecorder> interactionStateRecorder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (BOOL)useVoipSendMessage;
- (void)didChangeInteractionController:(id)a0 context:(id)a1;
- (void)rtvSession:(id)a0 participatorsDidChange:(id)a1 oldParticipators:(id)a2;
- (BOOL)__isBigRoom;
- (void)previewViewDidPressed:(id)a0;
- (void)willAdjustScale;
- (void)didAdjustScale;
- (void)__showInvitePanel;
- (id)__interactionPreview;
- (void)dismissBubbleWithAnimated:(BOOL)a0;
- (void)dismissMessageBubble;
- (void)showMessageBubbleWithAttributedContent:(id)a0 direction:(unsigned long long)a1;
- (void)showMessageBubbleWithAttributedContent:(id)a0 direction:(unsigned long long)a1 duration:(double)a2;
- (void)__createPreviewWithInteractionController:(id)a0 context:(id)a1;
- (void)preview:(id)a0 didClickBubble:(id)a1;
- (void)performHighlightAnimation;
- (void)performUnhighlightAnimation;
- (BOOL)needCustomConstraints;
- (BOOL)needAtFirstPosition;
- (void)reloadData;
- (void).cxx_destruct;
- (id)view;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;

@end
