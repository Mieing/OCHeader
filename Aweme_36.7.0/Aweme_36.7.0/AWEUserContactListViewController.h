@class NSMutableArray, AWEContactListTableViewHeader, NSArray, NSString, UIView, NSObject, UITableView;
@protocol AFDMentionUserPickerContactDatasourceProtocol, AWEIMUserListHideTipFooterProtocol;

@interface AWEUserContactListViewController : UIViewController <AWETableViewSectionIndexDelegate, UITableViewDelegate, UITableViewDataSource, AWETableViewSectionIndexDelegate, AWECommonSearchBarDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEContactListTableViewHeader *tableViewHeader;
@property (retain, nonatomic) UIView<AWEIMUserListHideTipFooterProtocol> *tipFooterView;
@property (retain, nonatomic) NSObject<AFDMentionUserPickerContactDatasourceProtocol> *dataSource;
@property (retain, nonatomic) NSArray *sectionData;
@property (retain, nonatomic) NSArray *sectionTitles;
@property (retain, nonatomic) NSArray *sectionIndexTitles;
@property (retain, nonatomic) NSMutableArray *customSectionTypeList;
@property (nonatomic) BOOL isUseSystemIndexView;
@property (copy, nonatomic) id /* block */ selectCompletion;
@property (retain, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSString *refer;
@property (retain, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)p_prepareData;
- (id)p_userAtIndexPath:(id)a0;
- (BOOL)p_isSearchMode;
- (BOOL)needUseSystemIndexView;
- (void)p_initializeContactList;
- (void)p_refreshIndexView;
- (void)p_refreshLoadMoreFooter;
- (void)p_refreshTipFooter;
- (void)p_refreshEmptyView;
- (BOOL)p_isNeedSection:(unsigned long long)a0;
- (BOOL)p_isAppendedCellAtIndexPath:(id)a0;
- (BOOL)p_shouldAppendCellInSection:(long long)a0;
- (void)updateIndexViewConfiguration:(id)a0;
- (void)p_refreshPage;
- (void)p_updateHighlightSectionHeader;
- (long long)p_currentSection;
- (void)updateEmptyPageConfig:(id)a0 isSearchMode:(BOOL)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)searchBar;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (BOOL)textFieldShouldClear:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)sectionIndexTitlesForTableView:(id)a0;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 sectionForSectionIndexTitle:(id)a1 atIndex:(long long)a2;

@end
