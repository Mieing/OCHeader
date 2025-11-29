@class UIControl, NSString, LSNaviBar, UIView, YYLabel;
@protocol LSIMSwitchProtocol;

@interface LSIMShopInfoViewController : UIViewController

@property (copy, nonatomic) NSString *shopID;
@property (copy, nonatomic) NSString *conGroupID;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *pigeonUID;
@property (nonatomic) BOOL isApplet;
@property (retain, nonatomic) LSNaviBar *naviBar;
@property (nonatomic) BOOL naviBarHidden;
@property (retain, nonatomic) UIControl *merchantAuthContainer;
@property (retain, nonatomic) UIControl *reportContainer;
@property (retain, nonatomic) UIView *marketContainer;
@property (retain, nonatomic) UIView<LSIMSwitchProtocol> *marketSwitch;
@property (retain, nonatomic) UIView *serviceContainer;
@property (retain, nonatomic) UIView<LSIMSwitchProtocol> *serviceSwitch;
@property (retain, nonatomic) YYLabel *manageNotificationLabel;

- (void)closePage;
- (void)setupNaviBar;
- (id)initWithConversationID:(id)a0 shopID:(id)a1 conGroupID:(id)a2 pigeonUID:(id)a3;
- (void)updateIsApplet:(BOOL)a0;
- (id)creataSepLine;
- (void)marketSwitchChanged;
- (void)serviceSwitchChanged;
- (void)setupAppletUI;
- (id)createItemWithTitle:(id)a0;
- (void)openMerchantAuthPage;
- (void)openReportPage;
- (void)openMarketNotificationPage;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupUI;

@end
