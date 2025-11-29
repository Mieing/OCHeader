@class NSString, NSArray, FindContactSearchViewCellInfo, UIView, MMTableView;

@interface SearchContactViewController : MMUIViewController <FindContactSearchViewCellInfoDelegate> {
    UIView *m_headerSearchView;
    FindContactSearchViewCellInfo *m_searchInfo;
    NSArray *m_resultArray;
    NSString *m_searchText;
    MMTableView *m_tableView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithResultArray:(id)a0 searchText:(id)a1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)onCancelSearch;
- (BOOL)isSeachActive;
- (void)onMainWindowFrameChanged;
- (void).cxx_destruct;

@end
