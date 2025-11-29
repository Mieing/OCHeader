@class DYQuickBindView, NSString, DYRouterModel, UIButton, UIView, DYPhoneNumberModel, UIViewController;
@protocol DYQuickBindManageProtocol;

@interface DYQuickBindViewController : UIViewController <DYQuickBindViewDelegate, DYUserAuthBindProtocol>

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) UIViewController *backViewController;
@property (nonatomic) unsigned long long platform;
@property (retain, nonatomic) DYPhoneNumberModel *phoneNumber;
@property (nonatomic) long long carrierType;
@property (retain, nonatomic) DYQuickBindView *quickBindView;
@property (retain, nonatomic) id<DYQuickBindManageProtocol> quickBindManager;
@property (retain, nonatomic) DYRouterModel *routerModel;
@property (nonatomic) BOOL enableShowAlert;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIButton *closeButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackParams;
- (void)skipAction;
- (void)logWithEvent:(id)a0 params:(id)a1;
- (void)finishAuthProcess;
- (void)cancelAuthProcess;
- (id)rebindRouterParams;
- (id)uidType;
- (void)configNavigationButton;
- (void)showAddressBookViewController;
- (id)initWithPhoneNumber:(id)a0 carrier:(long long)a1 routerModel:(id)a2 cancelBlock:(id /* block */)a3 finishBlock:(id /* block */)a4;
- (id)initWithPhoneNumber:(id)a0 carrier:(long long)a1 routerModel:(id)a2;
- (void)p_setupUIForFullScreen;
- (void)quickBind;
- (void)showBindViewController;
- (void)trackBindSubmitWithClickType:(id)a0;
- (void)showBindViewControllerByQuickBindFailed:(BOOL)a0;
- (void)backAction;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupUI;

@end
