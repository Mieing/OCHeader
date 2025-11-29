@class NSString, WCSearchBar, CountryCodePickerDataSource, NSMutableArray, MMTableView;
@protocol CountryCodePickerDelegate;

@interface CountryCodePickerSheetViewController : MMPageSheetBaseViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, MMTableViewIndexViewDelegate> {
    MMTableView *m_tableView;
    BOOL m_bSearching;
    NSMutableArray *m_arrFilteredData;
    unsigned int m_curSelectedSection;
    unsigned int m_curSelectedRow;
    id<CountryCodePickerDelegate> m_delegate;
}

@property (retain, nonatomic) CountryCodePickerDataSource *dataSource;
@property (retain, nonatomic) WCSearchBar *searchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)viewDidLoad;
- (void)initSheetConfig;
- (void)initView;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)onTextFieldChanged:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (id)mmsectionIndexTitlesForTableView:(id)a0;
- (long long)mmtableView:(id)a0 sectionForSectionIndexTitle:(id)a1 atIndex:(long long)a2;
- (long long)mmcurrentIndexForTableView:(id)a0;
- (void).cxx_destruct;

@end
