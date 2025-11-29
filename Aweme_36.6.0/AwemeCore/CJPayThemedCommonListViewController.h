@interface CJPayThemedCommonListViewController : CJPayCommonListViewController

@property (nonatomic) long long previousStatusBarStyle;

- (long long)cjpay_preferredStatusBarStyle;
- (BOOL)cj_supportMultiTheme;
- (void)viewDidLoad;

@end
