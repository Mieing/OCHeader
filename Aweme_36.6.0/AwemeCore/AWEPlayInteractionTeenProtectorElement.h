@class AWETeenVideoVoteViewElementViewModel, AWETeenVideoVoteView;

@interface AWEPlayInteractionTeenProtectorElement : AWEPlayInteractionNewBottomElement

@property (retain, nonatomic) AWETeenVideoVoteView *teenVideoVoteView;
@property (retain, nonatomic) AWETeenVideoVoteViewElementViewModel *viewModel;

- (void)viewController_willDisplay;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (BOOL)shouldAppearWithData:(id)a0;
- (void)trackOnDisplay;
- (void)updateTeenVideoVoteView;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (id)identifier;

@end
