@class NSString, NSArray, MMRegionSeachResultsViewController, LocationRetriever, NSMutableDictionary, UISearchController, NSMutableArray, UIViewController, MMTableView, MMRegionCodeMgr;
@protocol WCPayRegionPickerViewControllerDelegate;

@interface WCPayRegionPickerViewController : WCPayBaseViewController <UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, MMRegionSeachResultsViewControllerDelegate, UITableViewDelegate, UITableViewDataSource, LocationRetrieveDelegate, PBMessageObserverDelegate> {
    MMTableView *m_tableView;
    NSMutableDictionary *m_dataDict;
    NSMutableArray *m_dataAry;
    BOOL m_isInitRegionCode;
    MMRegionCodeMgr *m_regionCodeMgr;
    LocationRetriever *_locationRetriever;
    int m_iLocationRetrieveResult;
    NSMutableArray *m_arrServerReturnCode;
    BOOL m_bInCurrent;
}

@property (retain, nonatomic) UISearchController *searchController;
@property (retain, nonatomic) MMRegionSeachResultsViewController *resultsController;
@property (retain, nonatomic) NSArray *foreignCountries;
@property (nonatomic) double searchBackgroundY;
@property (nonatomic) double searchBackgroundHeight;
@property (nonatomic) BOOL isTopLevel;
@property (weak, nonatomic) id<WCPayRegionPickerViewControllerDelegate> delegate;
@property (weak, nonatomic) UIViewController *topController;
@property (retain, nonatomic) NSString *selectedRegionCode;
@property (retain, nonatomic) NSArray *arrCurRegionCodes;
@property (nonatomic) BOOL openSearch;
@property (nonatomic) BOOL chinaFirst;
@property (retain, nonatomic) NSArray *allRegions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithArray:(id)a0;
- (void)addToChina:(id)a0 With:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)fixSearchBarBackgroundWhenActive;
- (void)initRegion;
- (void)initTableView;
- (void)setupView;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)onRetrieveLocationOK:(id)a0;
- (void)onRetrieveLocationTimeOut:(id)a0;
- (void)onRetrieveLocationError:(int)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)OnDataChange;
- (void)OnReturn;
- (void)scrollToRegion:(id)a0;
- (BOOL)isLocationRetrieving;
- (BOOL)isLocationSection:(long long)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)setupSearch;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void)resultVC:(id)a0 didSelectedRegion:(id)a1;
- (void)didPresentSearchController:(id)a0;
- (void)didDismissSearchController:(id)a0;
- (BOOL)isForeignCountriesEntranceCell:(id)a0;
- (id)makeForeginEntrance:(id)a0;
- (void)selectForeignCountriesEntranceCell;
- (void)didSelectRegion:(id)a0;
- (id)getResultsWithRegion:(id)a0;
- (void).cxx_destruct;

@end
