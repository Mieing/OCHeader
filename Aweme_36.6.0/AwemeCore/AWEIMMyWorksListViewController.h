@interface AWEIMMyWorksListViewController : UIViewController <AWERouterViewControllerProtocol, AWEShareSelectDelegate, IESIMCustomModalTransitionVCProtocol> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_worksListViewController;
    void /* unknown type, empty encoding */ topRegion;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleRegion;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subTitleLabel;
}

@property (nonatomic, weak) void /* function */ transitionContext;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)didSelectedAwemeModel:(id)a0;
- (BOOL)selectedAwemeModel:(id)a0;
- (unsigned long long)selectedIndexAwemeModel:(id)a0;
- (BOOL)canSelectedAwemeModel:(id)a0;
- (BOOL)enablePullDismissGestureForPresentation;
- (id)pullIndicatorRegionBackgroundColor;
- (double)customCornerRadius;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
