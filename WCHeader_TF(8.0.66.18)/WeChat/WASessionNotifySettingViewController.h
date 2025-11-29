@class UITableView, NSString, NSArray, WAContactGetter, NSNumber, NSMutableArray;

@interface WASessionNotifySettingViewController : MMUIViewController <WASessionNotifyMgrExtension, UITableViewDelegate, UITableViewDataSource, WASessionNotifyTableViewCellDelegate, MMTipsViewControllerDelegate> {
    NSNumber *_originGlobalOpenStatus;
    NSArray *_arrOriginCloseItem;
    NSNumber *_operatedGlobalOpenStatus;
    NSMutableArray *_arrOperatedOpenUserName;
    NSString *_askingOpenUserName;
    UITableView *_tableView;
    WAContactGetter *m_contactGetter;
}

@property (copy, nonatomic) NSString *sceneID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)initTableView;
- (void)layoutAllSubview;
- (void)layoutTableView;
- (void)reloadTableView;
- (id)makeGolbalNotifyCell;
- (id)makeSessionListCellWithRow:(long long)a0 tableView:(id)a1;
- (void)onClickGlobalNotifySwitch:(id)a0;
- (id)genHeaderFooterView:(id)a0 topMargin:(unsigned long long)a1 bottomMargin:(unsigned long long)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)onClickNotifyOpenButton:(id)a0;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1;
- (void)initData;
- (void)updateNotifyData;
- (void)removeUserNameInClostItemList:(id)a0;
- (BOOL)currentGlobalNotifyOpenStatus;
- (void)checkAndSendNotifyOperationToServer;
- (void)onSessionNotifyUpdate;
- (void).cxx_destruct;

@end
