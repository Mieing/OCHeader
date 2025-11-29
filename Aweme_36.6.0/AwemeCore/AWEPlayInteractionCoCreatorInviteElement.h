@class NSString, AWEPlayInteractionCoCreatorInviteView;

@interface AWEPlayInteractionCoCreatorInviteElement : AWEPlayInteractionBaseActionButtonElement <AWEPlayInteractionBottomButtonPriorityProtocol, AWEElementSelfFilterProtocol>

@property (retain, nonatomic) AWEPlayInteractionCoCreatorInviteView *inviteView;
@property (nonatomic) BOOL needReverse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;
+ (BOOL)shouldShowWithConext:(id)a0;
+ (BOOL)hasCoCreatorCommonButtonInfoWithModel:(id)a0;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)trackShow;
- (void)dismissWithAnimation;
- (BOOL)shouldActivateButtonWithData:(id)a0;
- (BOOL)shouldShowWithModel:(id)a0;
- (BOOL)hasCoCreatorCommonButtonInfo;
- (BOOL)shouldShowCoCreatorInviteButton;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (void)updateUI;

@end
