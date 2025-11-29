@class MMUIButton, NSMutableDictionary, NSString, WCFinderPoiRecommendDishesViewModel, UITableView;

@interface WCFinderPoiRecommendDishesViewController : MMUIViewController <WCFinderPoiRecommendDishesViewModelDelegte, UITableViewDataSource, UITableViewDelegate, WCFinderFeedBaseViewControllerProtocol>

@property (retain, nonatomic) WCFinderPoiRecommendDishesViewModel *viewModel;
@property (retain, nonatomic) NSMutableDictionary *reportDict;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) MMUIButton *footerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRecommendDishesComponent:(id)a0 reportDict:(id)a1;
- (void)viewDidLoad;
- (void)onClickFooterView;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)onPoiRecommendDishesUpdate;
- (void)onPoiRecommendDishesRequestFail;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
