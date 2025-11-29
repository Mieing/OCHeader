@class NSString, NSMutableArray, MMTableView;

@interface WCDeviceDebugViewController : MMUIViewController <WCDeviceDebugMgrExt, UITextFieldDelegate, MMPickerViewDelegate, UITableViewDataSource, UITableViewDelegate, WCActionSheetDelegate> {
    NSMutableArray *m_data;
    MMTableView *m_tableView;
    NSString *m_userName;
    int m_lastIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUserName:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)initView;
- (void)onOperate:(id)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)onFAQClick;
- (void)onCleanClick;
- (void)onLogAdded;
- (void)onLogClean;
- (void)loadMoreLogs;
- (void)makeCellTextAndCaculateHeight:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)makeCell:(id)a0 forTips:(id)a1;
- (void)makeCell:(id)a0 forInfo:(id)a1;
- (void)makeCell:(id)a0 forLog:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
