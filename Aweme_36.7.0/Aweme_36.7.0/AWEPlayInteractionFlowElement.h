@class UISelectionFeedbackGenerator, NSString, UIView, BDImageView;

@interface AWEPlayInteractionFlowElement : AWEPlayInteractionRightElement <AWEUserMessage, AWEElementSelfFilterProtocol>

@property (retain, nonatomic) BDImageView *flowImageView;
@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) UISelectionFeedbackGenerator *generator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;
+ (BOOL)enableFlowWithContext:(id)a0;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewWillAppear;
- (void)viewController_viewDidDisappear;
- (void)videoPlayerWillTrackPlayTime;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)flowButtonClick;
- (BOOL)flowEntranceHideStatus;
- (void)updateFlowEntranceStatus:(BOOL)a0;
- (void)flowEntranceShowEvent;
- (void)flowEntranceClickEvent;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;

@end
