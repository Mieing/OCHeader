@class NSString, BrandFansMsgSettingsViewModel, MMTableView;

@interface BrandFansMsgSettingsController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) BrandFansMsgSettingsViewModel *viewModel;
@property (retain, nonatomic) MMTableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)viewDidLoad;
- (void)setupUI;
- (void)setupViewModel;
- (void)reloadData;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
