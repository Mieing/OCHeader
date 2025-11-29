@class NSString, UITapGestureRecognizer, RTVXRBaseBusinessHandler, RTVInteractionMessageListTextCellViewModel, YYLabel, NSMutableArray, RTVInteractionMessageTransformer, BDImageView;
@protocol RTVChatController, RTVUserProfileManagerInterface, RTVVoipConfigureManagerInterface, RTVXRRoomSessionControllerInterface, RTVXRControllerInjector, RTVInteractionNarrowMessageViewDelegate;

@interface RTVInteractionNarrowMessageView : UIView <RTVChatControllerObserver, RTVXRControllerInterface>

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) RTVXRBaseBusinessHandler<RTVXRRoomSessionControllerInterface> *sessionController;
@property (readonly, nonatomic) id<RTVChatController> chatController;
@property (readonly, nonatomic) RTVInteractionMessageTransformer *transformer;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> configureManager;
@property (readonly, nonatomic) BDImageView *messageAvatarView;
@property (readonly, nonatomic) YYLabel *messageTextLabel;
@property (readonly, nonatomic) NSMutableArray *candidates;
@property (retain, nonatomic) RTVInteractionMessageListTextCellViewModel *currentModel;
@property (readonly, nonatomic) UITapGestureRecognizer *tapMsgGesture;
@property (weak, nonatomic) id<RTVInteractionNarrowMessageViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)__addObserver;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (void)__createDependency;
- (void)didReceiveNewMessages:(id)a0;
- (void)tapWithGesture:(id)a0;
- (void)__tapMsg:(id)a0;
- (void)__updateAvatarAndText:(id)a0;
- (void)__dismissViews:(BOOL)a0;
- (void)__appendMessages:(id)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)isDisplaying;

@end
