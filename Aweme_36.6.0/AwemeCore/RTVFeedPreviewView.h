@class UIImageView, NSString, UIView;
@protocol RTVChatController, RTVUserProfileManagerInterface, RTVXRInteractionController, RTVFeedContentController;

@interface RTVFeedPreviewView : RTVPreviewView <RTVXRInteractionObserver>

@property (readonly, weak, nonatomic) id<RTVFeedContentController> feedContentController;
@property (readonly, weak, nonatomic) id<RTVXRInteractionController> interactionController;
@property (readonly, weak, nonatomic) id<RTVChatController> chatController;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) UIImageView *waitingIndicator;
@property (readonly, nonatomic) UIView *waitingMaskView;
@property (readonly, nonatomic) UIView *animatedWaitingIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)__createComponents;
- (void)didChangeInteractionController:(id)a0 context:(id)a1;
- (void)__configureComponents;
- (void)willAdjustScale;
- (void)didAdjustScale;
- (void)__observe;
- (void)__configureWaitingIndicator;
- (void)__configureWaitingIndicatorImage;
- (void)__configureWaitingIndicatorAlpha;
- (void)__layoutVideoContentView;
- (void)__sendJoiningTipMessageIfNeededWithOldStatus:(long long)a0 newStatus:(long long)a1;
- (void)__stopWaitingIndicatorAnimation;
- (id)__waitingIndicatorImageName;
- (BOOL)__hasJoined;
- (void)__startWaitingIndicatorAniamtion;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;

@end
