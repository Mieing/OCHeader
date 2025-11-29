@class WCMomentsContactTagSearchBottomBar, NSArray, NSString, NSMutableSet, NSMutableOrderedSet, MMTableView;
@protocol WCMomentsContactTagSearchViewControllerDelegate;

@interface WCMomentsContactTagSearchViewController : WCSearchViewController <UITableViewDelegate, UITableViewDataSource> {
    double m_keyboardHeight;
}

@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) WCMomentsContactTagSearchBottomBar *bottomBar;
@property (retain, nonatomic) NSArray *searchResult;
@property (retain, nonatomic) NSString *lastQuery;
@property (nonatomic) BOOL isMultiSelectEnabled;
@property (retain, nonatomic) NSMutableSet *selecedTagDataSet;
@property (weak, nonatomic) id<WCMomentsContactTagSearchViewControllerDelegate> delegate;
@property (retain, nonatomic) NSMutableOrderedSet *selectedTagIdSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)initNotification;
- (void)viewDidLoad;
- (void)initTableView;
- (void)initBottomBar;
- (void)reloadData;
- (id)searchResultWithQuery:(id)a0;
- (id)tagDataAtIndexPath:(id)a0;
- (BOOL)isTagDataSelected:(id)a0;
- (BOOL)DismissMyselfAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)onTextFieldChanged:(id)a0;
- (void)handleSearchResultReturn:(id)a0;
- (void)onClickDone;
- (void)onNavigationCancelItemClick;
- (void)showContactTagDetailViewWithContactTagData:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (unsigned long long)searchSelectCellCheckTypeWithTagData:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)keyboardDidShow:(id)a0;
- (void)keyboardDidHide:(id)a0;
- (void)onKeyboardNotificationWithoutAnimation:(id)a0;
- (void)onKeyboardNotification:(id)a0;
- (void).cxx_destruct;

@end
