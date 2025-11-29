@class AWEUILoadingView, NSArray, NSString, AWEOpenPlatformSwitchMutleUserManager, UIView, UITableView;

@interface AWEOpenPlatformSwitchMutleUserHalfViewController : AWEHalfScreenBaseViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UIView *panHolderView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEOpenPlatformSwitchMutleUserManager *manager;
@property (retain, nonatomic) NSArray *userList;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (copy, nonatomic) id /* block */ completionBlk;
@property (nonatomic) BOOL isChangeUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithManager:(id)a0 withCompletionBlk:(id /* block */)a1;
- (long long)totalCellRows;
- (BOOL)shouldShowAddUserCell;
- (void)dismiss;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)fetchAccounts;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)setupUI;
- (void)showLoadingView;
- (void)hideLoadingView;
- (double)containerHeight;

@end
