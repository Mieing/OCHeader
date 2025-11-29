@class NSNumber, NSString, UIImage, UIView, NSMutableArray, UITableView;

@interface AWEAnchorNotificationSettingViewController : UIViewController <AWERouterViewControllerProtocol, UITableViewDelegate, UITableViewDataSource>

@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSMutableArray *userArray;
@property (retain, nonatomic) NSMutableArray *notifyAllUsersArray;
@property (retain, nonatomic) NSMutableArray *notifyNoneUsersArray;
@property (nonatomic) long long total;
@property (retain, nonatomic) NSNumber *offset;
@property (retain, nonatomic) UIImage *defaultImage;
@property (retain, nonatomic) UIView *errorView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)loadmore;
- (void)backBtnClick:(id)a0;
- (void)showNetworkErrorView;
- (void)showSettingPanel:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)setupUI;
- (BOOL)isDarkMode;

@end
