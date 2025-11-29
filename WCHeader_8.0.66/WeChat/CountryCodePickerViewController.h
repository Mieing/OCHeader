@class NSString, WCSearcher, CountryCodePickerDataSource, NSMutableArray, MMTableView;
@protocol CountryCodePickerDelegate;

@interface CountryCodePickerViewController : MMUIViewController <WCSearchDelegate, UITableViewDelegate, UITableViewDataSource> {
    unsigned int m_curSelectedSection;
    unsigned int m_curSelectedRow;
    MMTableView *m_tableView;
    BOOL m_bSearching;
    NSMutableArray *m_arrFilteredData;
}

@property (retain, nonatomic) CountryCodePickerDataSource *dataSource;
@property (nonatomic) BOOL hideCode;
@property (weak, nonatomic) id<CountryCodePickerDelegate> m_delegate;
@property (retain, nonatomic) WCSearcher *searcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldInteractiveDismiss;
- (id)init;
- (id)initWithBannedCountryCodes:(id)a0;
- (void)initSearchBar;
- (void)viewDidLoad;
- (void)OnReturn;
- (void)scrollToSelected;
- (void)setCurSelectedCountryCode:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)sectionIndexTitlesForTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)doSearch:(id)a0;
- (void)wcsSearchBar:(id)a0 textDidChange:(id)a1;
- (void)wcsSearchBarSearchButtonClicked:(id)a0;
- (void)wcsSearchBarCancelButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
