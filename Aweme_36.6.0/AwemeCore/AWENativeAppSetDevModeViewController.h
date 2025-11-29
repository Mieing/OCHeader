@class NSString, AWEACLView;

@interface AWENativeAppSetDevModeViewController : UIViewController

@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appTypeStr;
@property (retain, nonatomic) AWEACLView *aclView;
@property (nonatomic) long long itemType;

- (void)onBackButtonClicked;
- (void)openButtonClicked;
- (id)initWithAppName:(id)a0 appType:(long long)a1;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;

@end
