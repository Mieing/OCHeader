@class NSString, AWEBGPlaySettingsPageViewModel, UITableView;

@interface AWEBGPlaySettingsPageViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEBackgroundPlaySettingsTableViewDelegate, AWEBGPlaySettingsPageProtocol, AWERouterViewControllerProtocol>

@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) long long type;
@property (retain, nonatomic) AWEBGPlaySettingsPageViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)backBtnClick:(id)a0;
- (void)insertSection:(long long)a0;
- (void)themChangedNotification:(id)a0;
- (void).cxx_destruct;
- (void)performBatchUpdates:(id /* block */)a0;
- (id)initWithType:(long long)a0;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)deleteSection:(long long)a0;
- (void)insertRowAtIndexPath:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)reloadSection:(long long)a0;
- (void)removeRowAtIndexPath:(id)a0;

@end
