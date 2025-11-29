@class AWEPlayInteractionNearbyFollowGuideView, NSString, AWEPlayInteractionNearbyFollowGuideViewModel;

@interface AWEPlayInteractionNearbyFollowGuideElement : AWEPlayInteractionBaseActionButtonElement <AWEPlayInteractionBottomButtonPriorityProtocol>

@property (retain, nonatomic) AWEPlayInteractionNearbyFollowGuideView *followView;
@property (retain, nonatomic) AWEPlayInteractionNearbyFollowGuideViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActiveWithModel:(id)a0 context:(id)a1;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (void)hideView;
- (BOOL)shouldActivateButtonWithData:(id)a0;
- (void)switchToFollowedStatus;
- (void)switchToUnfollowedStatus;
- (BOOL)shouldShowNearbyFollowGuide;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
