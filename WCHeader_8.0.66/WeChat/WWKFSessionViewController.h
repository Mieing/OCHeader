@class MMTableView, NSString, WWKFContactOpLogic, MMUILabel;

@interface WWKFSessionViewController : MMBaseSessionViewController <UITableViewDelegate, UITableViewDataSource, IWWKFSessionMgrExt, MMBaseSessionCellDelegate>

@property (retain, nonatomic) MMUILabel *emptyTipsLabel;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) WWKFContactOpLogic *contactOpLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldShowQuickReplyPush:(id)a0;
- (id)init;
- (void)setupMainTableView;
- (void)setupEmptyTipsLabel;
- (void)updateEmptyTipsLabelState;
- (unsigned int)getMsgSearchBusinessType;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillBePushed:(BOOL)a0;
- (void)viewDidBePushed:(BOOL)a0;
- (void)viewWillBePoped:(BOOL)a0;
- (void)updateSessionCellMenu:(id)a0 withCellData:(id)a1;
- (void)deleteSessionOnIndexPath:(id)a0;
- (void)unbindWWKFContactOnIndexPath:(id)a0;
- (void)onWWKFSessionsChanged;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)onMenuTransitionToConfirmState:(long long)a0 sessionCellData:(id)a1;
- (void)onMenuItemsAppearInSessionCellData:(id)a0;
- (void)reportCellLeftSlideAction:(long long)a0 cellData:(id)a1;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
