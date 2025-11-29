@class NSString, NSMutableArray, UITableView;

@interface AWEConcernCloseBellPushViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, AWERouterViewControllerProtocol>

@property (retain, nonatomic) NSMutableArray *videoStrategyAllUsersArray;
@property (retain, nonatomic) NSMutableArray *liveStrategyAllUsersArray;
@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)backBtnClick:(id)a0;
- (void)showLoadingOnTableView;
- (void)hideLoadingOnTableView;
- (void)showVideoSettingPanel:(id)a0;
- (void)showLiveSettingPanel:(id)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)setupUI;

@end
