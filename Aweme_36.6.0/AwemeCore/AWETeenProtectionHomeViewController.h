@class UITableView, UITextView, UITableViewCell, NSArray, NSString, UIButton;

@interface AWETeenProtectionHomeViewController : AWETeenProtectionHomeBaseViewController <UITableViewDelegate, UITableViewDataSource, AWERouterViewControllerProtocol, UITextViewDelegate, AWETeenProtectionHomeViewControllerProtocol>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIButton *turnOnToolButton;
@property (retain, nonatomic) UIButton *turnOffToolButton;
@property (retain, nonatomic) UIButton *passwordButton;
@property (retain, nonatomic) UITableViewCell *bottomPaddingCell;
@property (retain, nonatomic) UITextView *moreInfoTextView;
@property (nonatomic) BOOL timeLockOn;
@property (retain, nonatomic) NSArray *dataArray;
@property (nonatomic) long long triggerTime;
@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) NSString *secUserID;
@property (nonatomic) BOOL preferLightTheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL dismissVCWhenSucceed;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isOpenedByServer;
@property (nonatomic) BOOL teenModeOn;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *enterMethod;

+ (Class)aAWEChildModeModuleServiceCommonAdapterClass;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)handleBroadcastNotification:(id)a0;
- (void)trackEvent;
- (void)backBtnClicked:(id)a0;
- (id)aAWEChildModeModuleServiceCommonAdapter;
- (BOOL)timeLockConfigWithRouterParamDict:(id)a0;
- (BOOL)vcConfigWithRouterParamDict:(id)a0;
- (BOOL)isForTimeLock;
- (void)constructDataArray;
- (BOOL)isForOtherUser;
- (id)itemWithTitle:(id)a0 imageName:(id)a1;
- (BOOL)isForTeenMode;
- (void)constructTeenModeArray:(id)a0;
- (BOOL)shouldUseNewStyleTeenModeOpenPage;
- (void)resetBottomButtonUI;
- (void)layoutBottomUIForButtons:(id)a0;
- (id)turnoffBtnColor;
- (void)didClickTurnOnToolButton:(id)a0;
- (id)createBottomBtnWithTitle:(id)a0 backgroundColor:(id)a1 titleColor:(id)a2 target:(id)a3 action:(SEL)a4;
- (void)didClickTurnOffToolButton:(id)a0;
- (void)didClickPasswordButton:(id)a0;
- (void)didClickTurnOnToolButton:(id)a0 triggerTime:(long long)a1 onlyPopPasswordVCWhenSucceed:(BOOL)a2;
- (void)p_changeTimeLockStatusWithTriggerTime:(long long)a0 onlyPopPasswordVCWhenSucceed:(BOOL)a1;
- (void)didClickTurnOffToolButton:(id)a0 onlyPopPasswordVCWhenSucceed:(BOOL)a1;
- (void)didClickPasswordButton:(id)a0 onlyPopPasswordVCWhenSucceed:(BOOL)a1;
- (id)childrenAgreementURLString;
- (id)itemWithTitle:(id)a0 subtitle:(id)a1 subtitleBoldString:(id)a2 imageName:(id)a3;
- (id)itemWithTitle:(id)a0 subtitle:(id)a1 imageName:(id)a2;
- (void)modifyTimeLockConfigRouterParamDict:(id)a0;
- (void)popToLastViewController:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)initWithType:(unsigned long long)a0;
- (long long)preferredStatusBarStyle;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)setupUI;

@end
