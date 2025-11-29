@class UIView, AWEQRCodeLoginCoreViewController, AWEUserLoginPadQRScannerViewModel;

@interface AWEUserLoginFullScreenPadQRScannerViewController : AWEUserLoginBaseViewController

@property (retain, nonatomic) AWEUserLoginPadQRScannerViewModel *viewModel;
@property (retain, nonatomic) UIView *navigationBar;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) AWEQRCodeLoginCoreViewController *QRCodeLoginCoreViewController;
@property (retain, nonatomic) UIView *bottomUtil;

- (void)createContainerView;
- (void)updateViewLayoutForKeyboardAndRotate:(struct CGSize { double x0; double x1; })a0;
- (BOOL)needUpdateViewLayoutForKeyboardAndRotate;
- (void)setupBgViewIfNeed;
- (void)addGeneralOtherComponentView;
- (void)updateBottomViewLayoutViewSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (id)init;
- (void)viewDidLoad;
- (void)setupUI;
- (void)setupNavigationBar;

@end
