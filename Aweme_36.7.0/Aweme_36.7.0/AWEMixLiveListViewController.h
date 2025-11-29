@class NSString, NSDateFormatter, AWEUILoadingView, AWEMixLiveDetailPlayListDataController, UITableView;

@interface AWEMixLiveListViewController : UIViewController <AWERouterViewControllerProtocol, UITableViewDelegate, UITableViewDataSource, AWEAwemeDetailTableViewControllerDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) NSString *mixID;
@property (retain, nonatomic) NSString *userID;
@property (nonatomic, getter=isLoading) BOOL loading;
@property (retain, nonatomic) AWEMixLiveDetailPlayListDataController *dataController;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (nonatomic) BOOL appeared;
@property (retain, nonatomic) NSString *fromPersonPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)detailTableViewController:(id)a0 scrollDidEndAtIndexPath:(id)a1 model:(id)a2;
- (void)p_reloadData;
- (void)loadDataWithInit:(BOOL)a0 isRefresh:(BOOL)a1 isPullUp:(BOOL)a2;
- (void)backBtndidClick;
- (void)publishBtnDidClick;
- (void)p_mixLivePublishBtnTracker:(BOOL)a0;
- (void)p_clickCellTracker:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setUpTableView;
- (void)setUpUI;

@end
