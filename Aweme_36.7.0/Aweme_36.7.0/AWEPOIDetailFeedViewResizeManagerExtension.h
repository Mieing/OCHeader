@class NSString, AWEPOIDetailRouterInterceptor;
@protocol AWEPOIFeedPlayerManagerProtocol;

@interface AWEPOIDetailFeedViewResizeManagerExtension : AWEPOIBaseExtension <AWEPOIFeedPlayerManagerDatasource, VSDContainerDelegate>

@property (retain, nonatomic) id<AWEPOIFeedPlayerManagerProtocol> feedManager;
@property (retain, nonatomic) AWEPOIDetailRouterInterceptor *routerInterceptor;
@property (nonatomic) BOOL dismissing;
@property (nonatomic) BOOL isHalfContainerMaxUnfold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tryPlayFeedPlayer;
- (void)tryPauseFeedPlay;
- (void)didHalfContainerOffsetChange:(id)a0 offset:(double)a1;
- (void)halfContainerUnfoldStateChange:(BOOL)a0;
- (void)vsdContainer:(id)a0 offsetChange:(double)a1;
- (void)initializeExtension;
- (void)handleNearbyCheckOrderUndertake:(id)a0;
- (BOOL)isSearchAdPoiXScreen;
- (double)videoContentHeight;
- (BOOL)shouldResizeVideoWidth:(id)a0;
- (BOOL)shouldResizeVideoHeight:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)viewWillAppear;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear;

@end
