@class AWEDetailServiceProvider;

@interface AWEDetailDuetFullViewController : AWEDetailFullViewController {
    AWEDetailServiceProvider *_serviceProvider;
}

@property (nonatomic) BOOL hasAppeared;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)setupInjectServiceOnInit;
- (void)setupUIOnViewDidLoad;
- (void)handleDetailInfoFetchStateChange;
- (void)onActionButtonClicked:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (id)serviceProvider;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
