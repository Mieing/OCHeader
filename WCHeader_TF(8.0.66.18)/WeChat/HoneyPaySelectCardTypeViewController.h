@class NSString, UITableView;
@protocol HoneyPaySelectCardTypeViewControllerDelegate;

@interface HoneyPaySelectCardTypeViewController : HoneyPayBaseViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (weak, nonatomic) id<HoneyPaySelectCardTypeViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)refreshViewWithData:(id)a0;
- (void)setupNavigationBar;
- (id)navigationBarBackgroundColor;
- (void)reloadTableView;
- (void)setupTableHeaderView;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)useBlackStatusbar;
- (void).cxx_destruct;

@end
