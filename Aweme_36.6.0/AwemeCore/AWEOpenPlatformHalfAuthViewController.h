@class UIView, AWEOpenPlatformHalfAuthHeaderView, NSArray, NSString, UIImageView, UIControl, UIButton, UITableView, DUXButton, DUXCheckBox, UILabel, AWEOpenPlatformAuthProtocolFieldView;
@protocol AWEOpenAuthInfoScopeLevelItemDataProtocol;

@interface AWEOpenPlatformHalfAuthViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEUserMessage, AWEOpenPlatformScopeDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIControl *blankControl;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *applyLabel;
@property (retain, nonatomic) DUXButton *authButton;
@property (retain, nonatomic) DUXButton *declineButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *descButton;
@property (retain, nonatomic) UIImageView *thirdAppImageView;
@property (retain, nonatomic) UILabel *reminderLabel;
@property (retain, nonatomic) UIView *reminderView;
@property (retain, nonatomic) UIImageView *reminderImageView;
@property (retain, nonatomic) AWEOpenPlatformHalfAuthHeaderView *headerView;
@property (retain, nonatomic) UITableView *scopeTableView;
@property (retain, nonatomic) DUXCheckBox *followCheckBox;
@property (retain, nonatomic) UILabel *followDescLabel;
@property (copy, nonatomic) NSArray *scopeItems;
@property (nonatomic) BOOL configedUI;
@property (nonatomic) BOOL hasEnterBack;
@property (retain, nonatomic) AWEOpenPlatformAuthProtocolFieldView *protocolView;
@property (retain, nonatomic) id<AWEOpenAuthInfoScopeLevelItemDataProtocol> scopeModel;
@property (nonatomic) unsigned long long scopeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)showContainerView;
- (id)trackerManager;
- (id)choosedScopes;
- (void)addNotifySubmitTracker:(unsigned long long)a0 refuseType:(id)a1;
- (void)addOrRemoveEnterBackgroundNotification:(BOOL)a0;
- (void)followCheckBoxTapped;
- (void)authButtonTapped;
- (void)tapScopeQuestionMarkEvent:(id)a0;
- (void)tapHalfViewScopeQuestionMark;
- (double)marginBottomOfAuthButton;
- (void)descButtonTapped;
- (id)authNavigationController;
- (void)updateAuthButtonState;
- (double)halfAuthViewHeight;
- (void)hideContainerView;
- (void)configureWithAuthInfo:(id)a0 scopeItems:(id)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)didEnterBackground;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)declineButtonTapped;
- (void)closeButtonTapped;
- (double)headerBottomMargin;
- (id)flowManager;

@end
