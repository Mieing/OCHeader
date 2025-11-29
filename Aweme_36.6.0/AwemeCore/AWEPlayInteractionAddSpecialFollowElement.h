@class NSTimer, NSString;

@interface AWEPlayInteractionAddSpecialFollowElement : AWEPlayInteractionBaseActionButtonElement <AWEPlayInteractionBottomButtonPriorityProtocol, AWEElementSelfFilterProtocol>

@property (retain, nonatomic) NSTimer *hideTimer;
@property (nonatomic) BOOL canShowByPriority;
@property (nonatomic) BOOL hadHideSpecialFollow;
@property (nonatomic) BOOL needReverse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;

- (void)initializeElement;
- (void)viewController_viewDidDisappear;
- (BOOL)isNeedDelayAppear;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)prepareForActivate;
- (BOOL)shouldActivateButtonWithData:(id)a0;
- (void)cancelHideTimer;
- (void)missSpecialFollow;
- (void)postActiveTriggerMessage;
- (id)createSpecialView;
- (void)onSpecialButtonClick;
- (void)hideSpecialFollowViewNotShowAgain;
- (void)showSpecialFollowView;
- (void)hideSpecialFollowView;
- (void)startHideTimer;
- (BOOL)shouldShowAddSpecialFollow;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;

@end
