@class AWEIMChatBlockSettingModel, NSDictionary, NSString, NSMutableArray, UITableView;

@interface AWEBlockMessageSettingSelfDefinedViewController : UIViewController <AWERouterViewControllerProtocol, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) NSMutableArray *words;
@property (retain, nonatomic) AWEIMChatBlockSettingModel *serverModel;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)backBtnClick:(id)a0;
- (void)configData;
- (void)addThemeChangeObserver;
- (void)p_didThemeChanged;
- (void)p_trackSelfDefinedWordWithUpdateTypeIsAdd:(BOOL)a0 blockWord:(id)a1;
- (void)sendRequestToChangeAdvancedSetting:(id /* block */)a0;
- (id)initWithServerModel:(id)a0 trackParams:(id)a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;

@end
