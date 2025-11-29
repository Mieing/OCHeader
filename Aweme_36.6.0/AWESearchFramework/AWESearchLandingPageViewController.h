@class NSString, NSDictionary, AWESearchLandingPageDataController, UITableView;

@interface AWESearchLandingPageViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, AWERouterViewControllerProtocol>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWESearchLandingPageDataController *dataController;
@property (nonatomic) unsigned long long landingPageType;
@property (retain, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *alasrc;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (BOOL)aweui_sf_enableErrorButtonLimit;
- (void)backBtnClicked;
- (void)loadMoreData;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)fetchData;
- (void)endRefreshing;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)setupUI;

@end
