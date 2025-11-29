@class NSString, NSMutableDictionary, NSDictionary, WCSearchBar, MMPageSheetAdapter, NSMutableArray, ContactsSearchController, NSNumber, OpenIMContactSelectView;
@protocol SelectOpenIMContactsViewControllerDelegate;

@interface SelectOpenIMContactsViewController : MMUIViewController <OpenIMContactSelectViewDelegate, ContactsSearchControllerDelegate, UITextFieldDelegate> {
    OpenIMContactSelectView *m_selectView;
}

@property (weak, nonatomic) WCSearchBar *searchBar;
@property (weak, nonatomic) ContactsSearchController *searchController;
@property (retain, nonatomic) NSMutableArray *searchControllerSelectedContacts;
@property (weak, nonatomic) id<SelectOpenIMContactsViewControllerDelegate> m_delegate;
@property (retain, nonatomic) NSDictionary *m_dicExistContact;
@property (retain, nonatomic) NSDictionary *m_dicIgnoreContact;
@property (retain, nonatomic) NSMutableDictionary *m_dicMultiSelect;
@property (nonatomic) BOOL m_bMultiSelect;
@property (weak, nonatomic) MMPageSheetAdapter *pageSheetAdapter;
@property (nonatomic) BOOL isInPageSheetMode;
@property (retain, nonatomic) NSString *rightBarTitle;
@property (retain, nonatomic) NSNumber *leftBarButtonStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTitleInPageSheetModeIfNeeded:(id)a0;
- (void)initLeftBarItemInPageSheetModeIfNeeded;
- (void)initRightBarItemInPageSheetModeIfNeeded;
- (double)getContentViewYInPageSheetMode;
- (double)getVisibleHeight;
- (void)onDoneInPageSheetMode:(id)a0;
- (void)onCancelInPageSheetMode:(id)a0;
- (id)init;
- (void)initView;
- (void)initTitleArea;
- (id)createInitLeftBarItem;
- (id)createInitRightBarItem;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)dealloc;
- (double)getContentViewY;
- (void)onDone:(id)a0;
- (void)onCancel:(id)a0;
- (void)selectOpenIMContactReturn;
- (void)selectOpenIMContactCancel;
- (unsigned long long)getTotalSelectCount;
- (BOOL)isIgnore:(id)a0;
- (BOOL)isExisted:(id)a0;
- (id)getRightBarButtonItem;
- (id)rightBarButtonItemWithSelectTagCount:(unsigned long long)a0 prefix:(id)a1;
- (id)rightBarButtonItemWithTitle:(id)a0;
- (void)updateRightBarButtonItemIfNeeded;
- (BOOL)onFilterOpenIMContactCandidate:(id)a0;
- (BOOL)onShouldSelectOpenIMContact:(id)a0;
- (void)onSelectOpenIMContact:(id)a0;
- (id)getSafeSearchViewController;
- (void)doSearch:(id)a0 Pre:(BOOL)a1;
- (void)cancelSearch;
- (void)onContactSelectSearchSections:(id)a0 sectionTitles:(id)a1 sectionResults:(id)a2;
- (id)cellForSearchViewTable:(id)a0 index:(id)a1;
- (double)cellSeparatorLeftInsetForSearchViewTable:(id)a0;
- (double)heightForSearchViewTable:(id)a0;
- (void)didSearchViewTableSelect:(id)a0;
- (void)didSearchControllerSelectContact:(id)a0 indexPath:(id)a1;
- (void)onContactSearchControllerDidFinishMultiSelect;
- (void)onContactSearchControllerDidSwitchMultiSelectMode:(BOOL)a0;
- (void)onContactSearchControllerDidCancelItemClick;
- (BOOL)textFieldShouldReturn:(id)a0;
- (id)pageSheetAdapter;
- (void)setPageSheetAdapter:(id)a0;
- (void).cxx_destruct;

@end
