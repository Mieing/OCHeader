@class NSString, AWEACLView;

@interface AWENativeAppNoTestDebugPermissionViewController : UIViewController

@property (copy, nonatomic) NSString *appId;
@property (nonatomic) long long appType;
@property (copy, nonatomic) NSString *appTypeStr;
@property (retain, nonatomic) AWEACLView *aclView;

- (void)onBackButtonClicked;
- (id)initWithAppId:(id)a0 appType:(long long)a1;
- (void)trackDevelopTestLimitShow;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (id)initWithAppId:(id)a0;

@end
