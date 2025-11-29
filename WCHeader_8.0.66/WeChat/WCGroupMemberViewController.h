@class WCDataItem, NSString, NSMutableArray, MMTableView;

@interface WCGroupMemberViewController : MMUIViewController <MMTableViewDelegate, UITableViewDelegate, UITableViewDataSource, WCFacadeExt> {
    MMTableView *m_tableView;
    WCDataItem *m_dataItem;
    NSMutableArray *m_arrUserName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initData;
- (void)initTableView;
- (void)updateTitle;
- (void)initView;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithDataItem:(id)a0;
- (id)getContact:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)onDataChangedWithAdded:(id)a0 andChanged:(id)a1 andDeleted:(id)a2;
- (void).cxx_destruct;

@end
