@class NSString, AWEIMTaskPlatformTracker, NSMutableArray, UITableView;

@interface AWEIMTaskPlatformSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, AWEIMRendererProtocol>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEIMTaskPlatformTracker *taskPlatformTracker;
@property (retain, nonatomic) NSMutableArray *viewModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)backBtnClicked;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)setupUI;

@end
