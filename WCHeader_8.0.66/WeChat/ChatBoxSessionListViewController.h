@class MainSessionEditingLogic, MainFrameFoldReporter, MMUILabel, NSString, MMTableView;

@interface ChatBoxSessionListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, IMMNewSessionMgrExt, IChatBoxMgrExt, MainSessionEditingLogicDelegate>

@property (retain, nonatomic) MainSessionEditingLogic *sessionEditingLogic;
@property (retain, nonatomic) MainFrameFoldReporter *reporter;
@property (nonatomic) double cellHeight;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) MMUILabel *emptyLabel;
@property (nonatomic) unsigned long long lastEnterMainTabTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)initUI;
- (void)updateNavBarLeftButton;
- (void)exposeCurrentVisibleCells;
- (void)onAppWillEnterForeground:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (id)logicGetSessionAtIndexPath:(id)a0;
- (id)logicGetCellDataAtIndexPath:(id)a0;
- (void)logicUpdateSession:(id)a0;
- (long long)logicGetCountForSection:(long long)a0;
- (void)onLogicHideSession:(id)a0;
- (void)onLogicDeleteSessionByUsername:(id)a0;
- (void)onLogicOpenSession:(id)a0;
- (void)openSession:(id)a0 atIndexPath:(id)a1;
- (void)onBackButtonClicked:(id)a0;
- (void)onSessionChanged:(id)a0;
- (void)onSessionTotalUnreadCountChange:(unsigned int)a0;
- (void)onChatBoxSessionListChanged;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
