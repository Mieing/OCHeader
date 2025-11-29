@class WCUIAlertView, NSString, MMTableView, UILabel, NSMutableArray, WCPayTransToBankCardReceiver;
@protocol WCPaySelectReceiverViewControllerDelegate;

@interface WCPaySelectReceiverViewController : WCPayBaseViewController <UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate> {
    MMTableView *m_tableView;
}

@property (retain, nonatomic) NSMutableArray *m_otherHistoryArray;
@property (retain, nonatomic) NSMutableArray *m_myHistoryArray;
@property (retain, nonatomic) WCUIAlertView *m_alertView;
@property (retain, nonatomic) WCPayTransToBankCardReceiver *m_receiver;
@property (retain, nonatomic) UILabel *m_emptyTipsLabel;
@property (weak, nonatomic) id<WCPaySelectReceiverViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupWithData:(id)a0;
- (void)refreshViewWithData:(id)a0;
- (void)viewDidLoad;
- (void)updateView;
- (void)updateEmptyTipsLabel;
- (BOOL)isDataEmpty;
- (void)updateNavigationBar;
- (void)updateTableView;
- (void)OnCancel;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)layoutCell:(id)a0 candidate:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 editActionsForRowAtIndexPath:(id)a1;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)confirmComment;
- (void)confirmSetRemark:(id)a0 remark:(id)a1;
- (void)confirmDeleteRecord:(id)a0;
- (void).cxx_destruct;

@end
