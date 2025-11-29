@class NSString, NSMutableArray, NSArray;
@protocol EnterpriseBrandSearchControllerDelegate;

@interface EnterpriseBrandSearchController : MMObject <IEnterpriseBrandContactMgrExt, WCSearchDelegate, WCDataSearchDelegate> {
    NSString *_brandUserName;
    NSString *_searchText;
    NSMutableArray *_aryResult;
    NSArray *_arySubContact;
    BOOL _isActive;
}

@property (weak, nonatomic) id<EnterpriseBrandSearchControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBrandUserName:(id)a0;
- (void)initData;
- (void)reloadTable;
- (void)reloadSubContacts;
- (void)doSearch:(id)a0 Pre:(BOOL)a1;
- (id)cellForIndex:(id)a0 ForSearchViewTable:(id)a1;
- (long long)numberOfSectionsForSearchViewTable:(id)a0;
- (long long)numberOfRowsInSection:(long long)a0 ForSearchViewTable:(id)a1;
- (double)heightForHeaderInSection:(long long)a0 ForSearchViewTable:(id)a1;
- (double)heightForSearchViewTable:(id)a0;
- (void)didSearchViewTableSelect:(id)a0;
- (void)wcsWillPresentSearch:(id)a0;
- (void)wcsWillDismissSearch:(id)a0;
- (void)onEnterpriseBrandContactChanged:(id)a0;
- (void)onEnterpriseBrandContactDeleted:(id)a0;
- (id)makeContactCell:(id)a0 tableView:(id)a1;
- (id)getMMSearchBar;
- (id)getViewController;
- (void).cxx_destruct;

@end
