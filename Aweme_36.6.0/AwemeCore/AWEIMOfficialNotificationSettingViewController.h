@class NSArray, NSString, AWEIMOfficialNotificationSettingModel, UITableView;

@interface AWEIMOfficialNotificationSettingViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEIMOfficialNotificationSettingSubscribeCellViewModelDelegate, AWEIMOfficialNotificationSettingGroupDisturbCellViewModelDelegate, AWEIMOfficialNotificationSettingStickOnTopCellViewModelDelegate, AWENoticeRendererProtocol>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEIMOfficialNotificationSettingModel *model;
@property (retain, nonatomic) NSArray *dataSource;
@property (copy, nonatomic) id /* block */ subscribeCompleteBlock;
@property (copy, nonatomic) id /* block */ stickOnTopCompleteBlock;
@property (copy, nonatomic) id /* block */ groupDisturbCompleteBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)backBtnClicked;
- (void)onStickOnTopStateChange:(BOOL)a0;
- (void)onGroupDisturbStateChange:(BOOL)a0;
- (void)onSubscribeStateChange;
- (void)p_setupUI;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (double)tableView:(id)a0 estimatedHeightForHeaderInSection:(long long)a1;

@end
