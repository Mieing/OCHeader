@class NSString, AWEACLView;

@interface AWENativeAppNoBindPermissionViewController : UIViewController

@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *appTypeStr;
@property (copy, nonatomic) NSString *errMsg;
@property (copy, nonatomic) NSString *from;
@property (retain, nonatomic) AWEACLView *aclView;
@property (nonatomic) long long itemType;

- (void)onBackButtonClicked;
- (id)initWithAppName:(id)a0 appId:(id)a1 appType:(long long)a2 errMsg:(id)a3 from:(id)a4;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;

@end
