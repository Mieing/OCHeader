@class AWEDetailServiceProvider;

@interface AWEDetailThemeFullViewController : AWEDetailFullViewController {
    AWEDetailServiceProvider *_serviceProvider;
}

@property (nonatomic) BOOL didTrackPageShow;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)setupInjectServiceOnInit;
- (void)registerBusinessHandlersOnInit;
- (void)setupUIOnViewDidLoad;
- (void)handleDetailInfoFetchStateChange;
- (void)updateViewHeightWhileProgress:(double)a0;
- (void)setIsHalfScreen:(BOOL)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (id)serviceProvider;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;

@end
