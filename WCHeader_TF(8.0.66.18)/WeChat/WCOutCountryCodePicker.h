@class NSString, NSArray, WCSearcher, NSMutableDictionary, NSMutableArray, MMTableView;
@protocol WCOutCountryCodeDelegate;

@interface WCOutCountryCodePicker : MMUIViewController <WCSearchDelegate, UITableViewDelegate, UITableViewDataSource> {
    NSArray *m_arrData;
    unsigned int m_curSelectedSection;
    unsigned int m_curSelectedRow;
    MMTableView *m_tableView;
    BOOL m_bSearching;
    NSMutableArray *m_arrFilteredData;
    NSMutableArray *m_arrAllKeys;
    NSMutableDictionary *m_dicKeyToCountryCode;
}

@property (retain, nonatomic) WCSearcher *searcher;
@property (weak, nonatomic) id<WCOutCountryCodeDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initData;
- (id)init;
- (void)initSearchBar;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)OnReturn;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)sectionIndexTitlesForTableView:(id)a0;
- (void)doSearch:(id)a0;
- (void)wcsSearchBar:(id)a0 textDidChange:(id)a1;
- (void)wcsSearchBarSearchButtonClicked:(id)a0;
- (void)wcsSearchBarCancelButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
