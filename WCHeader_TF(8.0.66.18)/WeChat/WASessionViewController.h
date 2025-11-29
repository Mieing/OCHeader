@class NSString, WAContactGetter, NSMutableSet, MMTableView;

@interface WASessionViewController : MMBaseSessionViewController <IWASessionMgrExt, UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate> {
    MMTableView *_tableView;
    NSMutableSet *_setCheckUpdateUserName;
    WAContactGetter *_contactGetter;
}

@property (copy, nonatomic) NSString *sceneID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initTableView;
- (void)initRightBarButton;
- (id)getRightBarButton;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillBePushed:(BOOL)a0;
- (void)viewWillBePoped:(BOOL)a0;
- (unsigned int)getMsgSearchBusinessType;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)deleteSessionOnIndexPath:(id)a0;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)onWASessionsChanged;
- (void)onClickRightBarBtn:(id)a0;
- (void)updateSessionCellMenu:(id)a0 withCellData:(id)a1;
- (void)switchSessionNotifyWithIndexPath:(id)a0;
- (void)confirmBlockMsgActionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)confirmReceiveMsgActionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)checkUpdateContactFromIndex:(unsigned int)a0;
- (void)getWeappContactForUsername:(id)a0 handler:(id /* block */)a1;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void).cxx_destruct;

@end
