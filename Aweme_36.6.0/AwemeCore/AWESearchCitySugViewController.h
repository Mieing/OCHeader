@class UITableView, NSString, AWECitySelectAppearance, NSMutableArray;

@interface AWESearchCitySugViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSMutableArray *sugCities;
@property (nonatomic) BOOL showL2Only;
@property (copy, nonatomic) id /* block */ citySelectBlock;
@property (copy, nonatomic) id /* block */ scrollCityBlock;
@property (retain, nonatomic) AWECitySelectAppearance *appearance;
@property (nonatomic) BOOL canSelectL3;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)searchCitiesToSuggest:(id)a0 searchText:(id)a1 showL2Only:(BOOL)a2;
- (void)filterSearchResultWithModel:(id)a0 searchText:(id)a1 bestMatchResultArray:(id)a2 nextMatchMatchResultArray:(id)a3;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;

@end
