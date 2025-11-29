@class AWEDislikeButtonView, AWEPlayInteractionDislikeElementViewModel;

@interface AWEDislikeBottomElement : AWEPlayInteractionNewBottomElement

@property (retain, nonatomic) AWEDislikeButtonView *dislikeLeftView;
@property (retain, nonatomic) AWEPlayInteractionDislikeElementViewModel *viewModel;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:(id)a0;
- (void)trackDislikeClicked;
- (void)didCancelDislike:(BOOL)a0;
- (void)didClickDislike;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (id)identifier;

@end
