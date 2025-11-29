@class UITableView, NSString, IESLiveRevenueInteractSettingViewModel, UILabel, UIView, UIButton;
@protocol IESLiveCompoundSubscription;

@interface IESLiveRevenueInteractSettingPanel : IESLiveRevenueInteractPopupViewController <IESLiveRevenueInteractSettingDelegate, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *separateLine;
@property (retain, nonatomic) UITableView *interactSettingTableView;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) IESLiveRevenueInteractSettingViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindAction;
- (void)onBackButtonClicked;
- (void)onSetupNavBar:(id)a0;
- (void)showChangeTimeVC;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)layoutUI;

@end
