@class NSString, LSNaviBar, UIView;
@protocol LSIMSwitchProtocol;

@interface LSIMPushNotificationViewController : UIViewController

@property (copy, nonatomic) NSString *shopID;
@property (retain, nonatomic) LSNaviBar *naviBar;
@property (nonatomic) BOOL naviBarHidden;
@property (retain, nonatomic) UIView *marketContainer;
@property (retain, nonatomic) UIView<LSIMSwitchProtocol> *marketSwitch;
@property (retain, nonatomic) UIView *serviceContainer;
@property (retain, nonatomic) UIView<LSIMSwitchProtocol> *serviceSwitch;

- (void)closePage;
- (void)setupNaviBar;
- (id)creataSepLine;
- (void)marketSwitchChanged;
- (void)serviceSwitchChanged;
- (id)initWithShopID:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupUI;

@end
