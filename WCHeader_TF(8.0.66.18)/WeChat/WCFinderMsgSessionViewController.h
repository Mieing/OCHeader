@class MMBaseSessionCellData, WCFinderMsgSessionListReporter, NSString, WCFinderMsgSessionCellDataSource, WCFinderProcessTimeRecorder, MMTableView;

@interface WCFinderMsgSessionViewController : MMUIViewController <WCFinderMsgSessionCellDataSourceDelegate, UITableViewDelegate, UITableViewDataSource, WCGeneralMonitorDelegate, WCFinderRedDotNotifyExt>

@property (retain, nonatomic) WCFinderMsgSessionCellDataSource *cellDataSource;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) WCFinderMsgSessionListReporter *reporter;
@property (retain, nonatomic) MMBaseSessionCellData *systemCellData;
@property (retain, nonatomic) NSString *currentFinderUsername;
@property (retain, nonatomic) WCFinderProcessTimeRecorder *processTimeRecarder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSessionCellDataSource:(id)a0;
- (void)configReportInfoWithReporter:(id)a0;
- (BOOL)canShowPrivate;
- (void)viewDidLoad;
- (void)setUpRightNav;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillBePushOrPresent:(BOOL)a0;
- (void)viewDidBePushOrPresent:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)viewWillBePoped:(BOOL)a0;
- (void)viewWillBeDismissed:(BOOL)a0;
- (void)onWillQuitSessionViewController;
- (void)reloadTableView;
- (int)commentScene;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)reportFinderTeamMsgWithEventType:(long long)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)deleteMsgActionWithSessionInfo:(id)a0;
- (void)monitorView:(id)a0 newExposedItems:(id)a1 lastExposedItems:(id)a2;
- (void)onFinderPrivateMsgContactExtInfoUpdatedWithSessionId:(id)a0;
- (void)onFinderMsgSessionUpdated;
- (id)getSessionIdForIndexPath:(id)a0;
- (BOOL)canShowSystemCellData;
- (id)getSystemCellData;
- (BOOL)enableDisplayBadgeGroupView;
- (void)onFinderNotifyUnreadMentionCountNeedReload;
- (void)reloadViewData;
- (void)registerYReportSdk;
- (void)reportPageOut;
- (void)onClickMentionSwitchAction;
- (void).cxx_destruct;

@end
