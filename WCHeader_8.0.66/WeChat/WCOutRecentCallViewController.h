@class NSString, WCOutPhoneContact, NSArray, UITableView;

@interface WCOutRecentCallViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate> {
    WCOutPhoneContact *m_contact;
    NSArray *m_recentCallLists;
    UITableView *m_tableView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPhoneContact:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)configTableView;
- (void)configData;
- (void)asyncLoadData;
- (void)onDataDidLoad;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)recentCallCellAtRow:(unsigned long long)a0;
- (void).cxx_destruct;

@end
