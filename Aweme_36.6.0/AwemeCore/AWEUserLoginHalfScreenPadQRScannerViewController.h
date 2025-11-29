@class AWEQRCodeLoginCoreViewController, AWEUserLoginPadQRScannerViewModel, NSString, UIView;

@interface AWEUserLoginHalfScreenPadQRScannerViewController : AWEUserLoginBaseViewController <AWEUserLoginHalfScreenTransitionContextProvider>

@property (retain, nonatomic) AWEUserLoginPadQRScannerViewModel *viewModel;
@property (retain, nonatomic) UIView *whiteBackView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) AWEQRCodeLoginCoreViewController *QRCodeLoginCoreViewController;
@property (retain, nonatomic) UIView *bottomUtil;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)createContainerView;
- (BOOL)isHalfScreenPage;
- (BOOL)needUpdateViewLayoutForKeyboardAndRotate;
- (void)addGeneralOtherComponentView;
- (void)addWhiteBackView;
- (void)addThemeBackgroundView;
- (void)addThemeHeaderView;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (id)init;
- (void)viewDidLoad;
- (void)setupUI;
- (void)setupNavigationBar;

@end
