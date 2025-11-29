@class AWEUserLoginCarrierViewModel, UIView;

@interface AWEUserLoginPadCarrierViewController : AWEUserLoginBaseViewController

@property (retain, nonatomic) AWEUserLoginCarrierViewModel *viewModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *carrierPhoneView;

- (id)pageBtm;
- (id)initWithPhoneModel:(id)a0;
- (void)setupBgViewIfNeed;
- (void)setupGeneralLoginComponentView;
- (void)updateViewLayoutWithHighlyCompact:(BOOL)a0 viewSize:(struct CGSize { double x0; double x1; })a1;
- (void)setupContainerView;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)setupUI;
- (void)setupNavigationBar;

@end
