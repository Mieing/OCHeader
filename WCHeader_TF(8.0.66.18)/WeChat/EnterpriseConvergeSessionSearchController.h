@class NSRecursiveLock, NSString, EnterpriseContactSearchView, EnterpriseSearchDataController, NSMutableArray;
@protocol EnterpriseConvergeSessionSearchControllerDelegate;

@interface EnterpriseConvergeSessionSearchController : MMObject <EnterpriseContactSearchViewDelegate, EnterpriseSearchDataControllerDelegate, WCSearchDelegate, WCDataSearchDelegate> {
    NSString *_mainBrandUserName;
    NSString *_chatBrandUserName;
    EnterpriseSearchDataController *_chatBrandDataController;
    NSString *_searchText;
    NSMutableArray *_aryContact;
    NSMutableArray *_aryGroup;
    NSMutableArray *_aryApplication;
    EnterpriseContactSearchView *_moreView;
    BOOL _hasContact;
    BOOL _hasMoreContact;
    BOOL _hasGroup;
    BOOL _hasMoreGroup;
    BOOL _hasApplication;
    BOOL _hasMoreApplication;
    BOOL _isLoadingContact;
    int _contactSection;
    int _groupSection;
    int _applicationSection;
    BOOL _isActive;
    BOOL _reloadSmooth;
    NSRecursiveLock *_lock;
    BOOL _hasSubBrandContact;
    BOOL _hasMoreSubBrandContact;
}

@property (weak, nonatomic) id<EnterpriseConvergeSessionSearchControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMainBrandUserName:(id)a0;
- (void)initData;
- (void)openMoreView:(unsigned int)a0;
- (void)enterChat:(id)a0;
- (void)reloadTableView;
- (void)doChatBrandRemoteSearch:(id)a0;
- (void)doBrandLocalSearch;
- (void)doSearch:(id)a0 Pre:(BOOL)a1;
- (void)cancelSearch;
- (id)cellForIndex:(id)a0 ForSearchViewTable:(id)a1;
- (long long)numberOfSectionsForSearchViewTable:(id)a0;
- (long long)numberOfRowsInSection:(long long)a0 ForSearchViewTable:(id)a1;
- (double)heightForHeaderInSection:(long long)a0 ForSearchViewTable:(id)a1;
- (double)heightForSearchViewTable:(id)a0;
- (void)didSearchViewTableSelect:(id)a0;
- (void)wcsWillPresentSearch:(id)a0;
- (void)wcsWillDismissSearch:(id)a0;
- (void)onRemoteSearchMoreCompleted:(id)a0 range:(unsigned int)a1 result:(id)a2;
- (BOOL)shouldProcessRemoteSearchResp:(id)a0 range:(unsigned int)a1;
- (void)onEnterpriseContactSearchViewReturn:(BOOL)a0;
- (void)onSelectEnterpriseSearchResultItem:(id)a0;
- (id)getMMSearchBar;
- (id)getViewController;
- (id)getDataController;
- (id)makeTitleCell:(id)a0 indexPath:(id)a1 tableView:(id)a2;
- (id)makeMoreTipCell:(id)a0 indexPath:(id)a1 tableView:(id)a2;
- (id)makeLoadingTipCell:(id)a0 indexPath:(id)a1 tableView:(id)a2;
- (id)makeContactCell:(id)a0 tableView:(id)a1;
- (double)getTitleCellTopMargin;
- (BOOL)hasContactSection;
- (BOOL)hasGroupSection;
- (BOOL)hasApplicationSection;
- (void).cxx_destruct;

@end
