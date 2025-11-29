@class NSString, AFDPlayInteractionFastReplyBaseElementViewModel, UIView;
@protocol AFDFastReplyViewProtocol;

@interface AFDPlayInteractionFastReplyBaseElement : AWEPlayInteractionBaseActionButtonElement <AFDPlayInteractionFastReplyBaseElementViewModelDelegate, AWEPlayInteractionBottomButtonPriorityProtocol, AWEElementSelfFilterProtocol, AFDPlayInteractionFastReplyBaseElementProtocol>

@property (retain, nonatomic) AFDPlayInteractionFastReplyBaseElementViewModel *viewModel;
@property (retain, nonatomic) UIView<AFDFastReplyViewProtocol> *fastReplyView;
@property (nonatomic) BOOL shouldReaddObserver;
@property (nonatomic) BOOL shouldShow;
@property (readonly, nonatomic) BOOL isCommentInputViewShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;
+ (unsigned long long)priorityIdentifier;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewWillAppear;
- (void)viewController_viewDidAppear;
- (void)viewController_viewWillDisappear;
- (void)viewController_viewDidDisappear;
- (BOOL)isNeedDelayAppear;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)prepareForActivate;
- (void)viewDidDisposed;
- (void)showWithAnimation:(BOOL)a0;
- (BOOL)shouldActivateButtonWithData:(id)a0;
- (void)layoutLandscapeView;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)dismissWithAnimation:(BOOL)a0;
- (void)reset;
- (void)viewDidLoad;
- (id)context;
- (id)elementDescription;

@end
