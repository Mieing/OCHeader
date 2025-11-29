@class NSArray, BDPUniqueID, UIViewController;

@interface BDPPermissionTableViewController : UITableViewController

@property (copy, nonatomic) NSArray *scopeGroups;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (weak, nonatomic) UIViewController *parentVC;

- (id)sectionTitleLabel;
- (BOOL)is12HourFormat;
- (id)initWithUniqueID:(id)a0 scopeGroups:(id)a1 parentVC:(id)a2;
- (void)updateWithScopeGroups:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)setupUI;

@end
