@class NSString, NSMutableDictionary, MMTableView;

@interface BrandSessionViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, IWCDeviceBrandMgrExt, BrandSessionMgrExt> {
    MMTableView *m_tableView;
    unsigned int m_stayTimeStart;
    NSMutableDictionary *m_brandExposed;
}

@property (nonatomic) unsigned int sessionId;
@property (nonatomic) unsigned long long source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)initTableView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setupSearchBar;
- (void)viewWillBePushed:(BOOL)a0;
- (void)viewWillBePoped:(BOOL)a0;
- (void)didEnterBackground:(id)a0;
- (void)viewDidPop:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidTransitionToNewSize;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)updateSessionCellMenu:(id)a0 withCellData:(id)a1;
- (void)updateTopSessionCellBackgroundColor:(id)a0 withCellData:(id)a1;
- (void)updateTopSessionCellStarMark:(id)a0 withCellData:(id)a1;
- (void)deleteSessionOnTableView:(id)a0 indexPath:(id)a1;
- (void)handleDeleteSession:(id)a0;
- (void)unsubscribeOnTableView:(id)a0 IndexPath:(id)a1;
- (void)handleBrandUnsubscribe:(id)a0;
- (void)reportUnfollowSubscribe:(id)a0 andUnread:(unsigned int)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)onBrandSessionsChanged;
- (void)handleAllBrandSessionDeletedStep2;
- (void)handleAllBrandSessionDeleted;
- (void)onBrandSessionAllDeleted;
- (void)initSearchBar;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)onWCDeviceUnbindEnd:(id)a0 Error:(id)a1;
- (void)startRecordSessionListStayTime;
- (void)abortRecordSessionListStayTime;
- (void)endRecordSessionListStayTime;
- (void)reportBrandExpose;
- (id)getMidFromMessage:(id)a0;
- (id)getIdxFromMessage:(id)a0;
- (id)queryOfUrl:(id)a0;
- (void).cxx_destruct;

@end
