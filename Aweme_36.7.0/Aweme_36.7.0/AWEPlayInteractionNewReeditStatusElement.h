@class AWEReeditStatusView;

@interface AWEPlayInteractionNewReeditStatusElement : AWEPlayInteractionNewBottomElement

@property (retain, nonatomic) AWEReeditStatusView *reeditView;

- (void)viewController_willDisplay;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:(id)a0;
- (void)p_trackOnDisplay;
- (void)onTapReedit;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)identifier;

@end
