@class DUXNavigationBar, NSString, UIImageView, DUXNavigationBarImageAction, UILabel, UIButton;

@interface AWENativeAppBindDebugDeviceViewController : UIViewController

@property (copy, nonatomic) NSString *accountName;
@property (copy, nonatomic) NSString *randomKey;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *appIcon;
@property (copy, nonatomic) NSString *typeStr;
@property (copy, nonatomic) NSString *appTypeStr;
@property (nonatomic) long long appType;
@property (nonatomic) long long didType;
@property (nonatomic) long long expireTime;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UILabel *accountLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) DUXNavigationBar *duxNaviBar;
@property (retain, nonatomic) DUXNavigationBarImageAction *duxImageAction;

- (void)onButtonClicked;
- (void)onBackButtonClicked;
- (void)trackDevelopTestPageShow;
- (void)trackDevelopTestPageClick;
- (void)onOKButtonClicked;
- (void)trackDevelopTestDialogClickWithClickType:(id)a0;
- (void)trackDevelopTestDialogShow;
- (void)jumpToNoBindPermissionVCWithFailType:(id)a0 errMsg:(id)a1;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (id)init;
- (id)initWithParams:(id)a0;
- (void)viewDidLoad;

@end
