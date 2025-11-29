@class NSString, NSMutableArray, MMTableView;

@interface WCEditGroupViewController : MMUIViewController <MMTableViewDelegate, UITableViewDelegate, UITableViewDataSource, MultiSelectContactsViewControllerDelegate, WCFacadeExt> {
    MMTableView *m_tableView;
    NSMutableArray *m_arrMyGroup;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMyGroups;
- (void)initData;
- (void)initFooterView;
- (void)initTableView;
- (void)initView;
- (void)updateView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)startLoadingWithTitle:(id)a0;
- (void)stopLoading;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)OnEdit;
- (void)OnEditDone;
- (void)onNewGroup;
- (void)onMultiSelectContactReturn:(id)a0;
- (void)onWCGroupUpdated;
- (void)onWCGroupUpdatedReturn:(BOOL)a0;
- (void).cxx_destruct;

@end
