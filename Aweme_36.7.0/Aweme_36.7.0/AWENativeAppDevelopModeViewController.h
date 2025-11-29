@class DUXNavigationBar, UITableView, DUXSwitch, NSString, NSMutableArray, DUXNavigationBarImageAction;

@interface AWENativeAppDevelopModeViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWENativeAppDebugCenterDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) DUXNavigationBar *duxNaviBar;
@property (retain, nonatomic) DUXNavigationBarImageAction *duxImageAction;
@property (retain, nonatomic) NSMutableArray *infoItemList;
@property (retain, nonatomic) NSMutableArray *timorItemList;
@property (retain, nonatomic) DUXSwitch *devModeSwitch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)onBackButtonClicked;
- (void)debugCenterDismiss;
- (void)initInfoItemList;
- (void)initTimorItemList;
- (void)p_setupUI;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)updateUI;

@end
