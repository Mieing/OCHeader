@class WCDataSearcher, NSString, NSDictionary, NSMutableDictionary, ContactsDataLogic, NSNumber, MMTableView;
@protocol GroupSelectContactsViewControllerDelegate;

@interface GroupSelectContactsViewController : MMUIViewController <WCSearchDelegate, WCDataSearchDelegate, UITableViewDelegate, UITableViewDataSource, ContactsDataLogicDelegate> {
    MMTableView *m_tableView;
    ContactsDataLogic *m_contactsDataLogic;
    WCDataSearcher *_searcher;
    double m_CurrentScreenWidth;
}

@property (weak, nonatomic) id<GroupSelectContactsViewControllerDelegate> m_delegate;
@property (retain, nonatomic) NSString *m_viewControllerTitle;
@property (nonatomic) BOOL m_bShowSearchBar;
@property (nonatomic) unsigned int m_uiDataScene;
@property (retain, nonatomic) NSDictionary *m_dicExistContact;
@property (retain, nonatomic) NSMutableDictionary *m_dicMultiSelect;
@property (nonatomic) BOOL isInPageSheetMode;
@property (retain, nonatomic) NSString *m_rightBarButtonTitle;
@property (retain, nonatomic) NSNumber *m_leftBarButtonStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTitleInPageSheetModeIfNeeded:(id)a0;
- (void)initLeftBarItemInPageSheetModeIfNeeded;
- (void)initRightBarItemInPageSheetModeIfNeeded;
- (void)setPageSheetAdapter:(id)a0;
- (id)pageSheetAdapter;
- (double)getContentViewY;
- (double)getVisibleHeight;
- (void)onCancelBackInPageSheetMode:(id)a0;
- (void)onDoneInPageSheetMode;
- (id)init;
- (void)onCancelBack:(id)a0;
- (void)initData;
- (void)onDone;
- (void)actionDone;
- (void)initTitleArea;
- (id)createInitLeftBarItem;
- (id)createInitRightBarItem;
- (void)updateRightBarBtn;
- (void)setExtraCellLineHidden:(id)a0;
- (void)initTableView;
- (void)initSearchBar;
- (void)initView;
- (BOOL)isSeachActive;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)isSelected:(id)a0;
- (BOOL)isExisted:(id)a0;
- (void)selectContact:(id)a0;
- (id)getCellImage:(id)a0;
- (void)makeCell:(id)a0 contact:(id)a1;
- (void)makeCell:(id)a0 tableCell:(id)a1 section:(unsigned long long)a2 row:(unsigned long long)a3;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)getAllGroup;
- (void)onContactsDataChange;
- (BOOL)onFilterContactCandidate:(id)a0;
- (id)cellForSearchViewTable:(id)a0 index:(id)a1;
- (double)cellSeparatorLeftInsetForSearchViewTable:(id)a0;
- (double)heightForSearchViewTable:(id)a0;
- (void)didSearchViewTableSelect:(id)a0;
- (void)doSearch:(id)a0 Pre:(BOOL)a1;
- (void)cancelSearch;
- (void).cxx_destruct;

@end
