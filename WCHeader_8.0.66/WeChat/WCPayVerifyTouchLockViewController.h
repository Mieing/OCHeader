@protocol WCPayVerifyTouchLockViewControllerDelegate;

@interface WCPayVerifyTouchLockViewController : WCPayBaseViewController

@property (nonatomic) BOOL bHasCheckShowTouchId;
@property (weak, nonatomic) id<WCPayVerifyTouchLockViewControllerDelegate> delegate;

- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)setupView;
- (void)setupNavigationBar;
- (void)viewDidBePoped:(BOOL)a0;
- (void)clickTouchID;
- (void)clickPassword;
- (void)onBackButtonClick;
- (void).cxx_destruct;

@end
