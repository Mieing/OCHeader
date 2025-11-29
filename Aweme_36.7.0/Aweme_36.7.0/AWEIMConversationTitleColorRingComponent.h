@class AWEIMMessageBaseViewController, NSString;
@protocol IESIMStory25ColorRingProtocol, IESIMColorRingProtocol;

@interface AWEIMConversationTitleColorRingComponent : AWEIMComponentBase <AWEIMConversationTitleColorRingInterface, IESIMColorRingDelegate>

@property (retain, nonatomic) id<IESIMColorRingProtocol> colorRingManager;
@property (readonly, nonatomic) AWEIMMessageBaseViewController *baseVC;
@property (nonatomic) BOOL isHitStory25Exp;
@property (retain, nonatomic) id<IESIMStory25ColorRingProtocol> colorRingFacade;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewWillAppear;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewWillDisappear;
- (id)titleAvatarComponent;
- (BOOL)iesim_canShowColorRing;
- (id)iesim_transitionTargetView;
- (void)iesim_didUpdateByColorRingChanged;
- (void)updateColorRingView;
- (BOOL)p_shouldShowCondition;
- (BOOL)shouldRespondToGes:(id)a0;
- (void)didClickStoryRing;
- (id)story2025ColorRingView;
- (double)story2025ColorRingAvatarRatio;
- (BOOL)isAvatarContainsPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)avatarImageView;

@end
