@class NSString, UILabel, NSMutableArray, UITableView;

@interface AWESearchMixVideoListViewController : UIViewController <AWERouterViewControllerProtocol, UITableViewDelegate, UITableViewDataSource>

@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *requestIds;
@property (copy, nonatomic) NSString *keyWord;
@property (copy, nonatomic) NSString *searchId;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSMutableArray *modelArray;
@property (retain, nonatomic) UILabel *emptyLabel;
@property (nonatomic) BOOL isAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)backBtnClicked:(id)a0;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)refreshData;

@end
