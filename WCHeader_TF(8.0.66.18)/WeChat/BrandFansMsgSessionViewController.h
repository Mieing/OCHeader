@class NSString, BrandFansMsgSessionViewModel, MMTableView;

@interface BrandFansMsgSessionViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, BrandFansMsgSessionViewModelDelegate>

@property (retain, nonatomic) BrandFansMsgSessionViewModel *viewModel;
@property (retain, nonatomic) MMTableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setupUI;
- (void)setupTableView;
- (void)setupNavigationBarItems;
- (void)setupViewModel;
- (void)onClickSettingBarItem;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)brandSystemCellInTableView:(id)a0;
- (id)tableView:(id)a0 msgCellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)openSystemMessage;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)onSystemNotificationUpdated;
- (void)onFansSessionUpdated;
- (void)openFansMsgLogicController:(id)a0;
- (void)pushController:(id)a0;
- (void).cxx_destruct;

@end
