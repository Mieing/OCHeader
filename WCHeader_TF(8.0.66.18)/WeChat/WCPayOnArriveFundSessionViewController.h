@class NSString, NSMutableArray, MMTableView;

@interface WCPayOnArriveFundSessionViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, IGroupMgrExt, IMMNewSessionMgrExt> {
    MMTableView *m_tableView;
}

@property (retain, nonatomic) NSMutableArray *m_arrChatName;
@property (retain, nonatomic) NSMutableArray *m_arrSessionInfo;
@property (retain, nonatomic) NSString *m_confirmingSessionName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWithChatName:(id)a0;
- (void)viewDidLoad;
- (void)sortSession;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)updateSessionInfo;
- (void)initTableView;
- (void)initNavigationBar;
- (void)onBackBtnDone:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)deleteSessionOnIndexPath:(id)a0;
- (void)onArriveFundCancelDeleteSession:(id)a0;
- (void)onArriveFundConfirmDeleteSession:(id)a0;
- (void)onDeleteSessionOfUser:(id)a0;
- (void)OnQuitGroup:(id)a0;
- (void).cxx_destruct;

@end
