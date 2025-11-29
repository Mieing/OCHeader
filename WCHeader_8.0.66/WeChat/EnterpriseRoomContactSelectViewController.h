@class CEnterpriseContact, NSString, WCDataSearcher, NSMutableArray, MMTableView;
@protocol EnterpriseRoomContactSelectDelegate;

@interface EnterpriseRoomContactSelectViewController : MMUIViewController <WCSearchDelegate, WCDataSearchDelegate, MMTableViewDelegate, UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate> {
    CEnterpriseContact *_contact;
    NSMutableArray *_aryMemberContact;
    NSMutableArray *_aryFilteredMemberContact;
    MMTableView *_tableView;
    WCDataSearcher *_searcher;
}

@property (weak, nonatomic) id<EnterpriseRoomContactSelectDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEnterpriseContact:(id)a0 delegate:(id)a1;
- (void)initData;
- (void)initTableView;
- (void)initSearchBar;
- (void)initView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)doSearch:(id)a0;
- (void)wcsSearchBarTextDidBeginEditing:(id)a0;
- (void)wcsSearchBar:(id)a0 textDidChange:(id)a1;
- (void)wcsSearchBarSearchButtonClicked:(id)a0;
- (void)onCancel:(id)a0;
- (id)GetCompareStrByContact:(id)a0;
- (void).cxx_destruct;

@end
