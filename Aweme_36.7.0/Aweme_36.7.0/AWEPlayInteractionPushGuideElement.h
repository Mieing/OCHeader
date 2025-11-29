@class UIButton, UIColor, NSString;

@interface AWEPlayInteractionPushGuideElement : AWEPlayInteractionBaseActionButtonElement <AWEPlayInteractionBottomButtonPriorityProtocol, AWEElementSelfFilterProtocol>

@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UIColor *buttonFromColor;
@property (retain, nonatomic) UIColor *buttonToColor;
@property (copy, nonatomic) id /* block */ animationBlock;
@property (nonatomic) BOOL hasDispatchBlock;
@property (nonatomic) BOOL isWaitingOpenPermission;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)prepareForActivate;
- (void)__addObservers;
- (BOOL)shouldActivateButtonWithData:(id)a0;
- (void)__setupUIComponents;
- (void)__setupButtonTitle;
- (void)__trackOutAppNotifyGuideWithEventType:(id)a0;
- (void)__didClickButton;
- (void)__openIMPushSetting;
- (void)__openFriendsPushSetting;
- (id)__trackOutAppNotifyGuideParamsWithEventType:(id)a0;
- (id)__trakingLabel;
- (void)__changeSettingWithField:(id)a0 value:(id)a1 completion:(id /* block */)a2;
- (void)__playVideoViewControllerStartPlayNotification:(id)a0;
- (void)__handleVideoCellDidEndDisplayingNotification:(id)a0;
- (void)__playFlashAnimation;
- (id)__selectionType;
- (BOOL)shouldShowPushGuideButton;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (id)context;
- (void)__applicationWillEnterForeground:(id)a0;

@end
