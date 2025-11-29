@class AWEPlayInteractionRelatedTemplateViewModel, AWEPlayInteractionRelatedTemplateView;

@interface AWEPlayInteractionRelatedTemplateNewBottomElement : AWEPlayInteractionNewBottomElement

@property (retain, nonatomic) AWEPlayInteractionRelatedTemplateView *relatedTemplateView;
@property (retain, nonatomic) AWEPlayInteractionRelatedTemplateViewModel *viewModel;

- (void)viewController_willDisplay;
- (void)viewController_viewDidAppear;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (id)identifier;

@end
