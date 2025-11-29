@class AWEPOIDetailRouterInterceptor;
@protocol AWENearbyBigCardListCellShrinkProtocol;

@interface AWEPOIDetailNearbyBigCardResizeExtension : AWEPOIBaseExtension

@property (weak, nonatomic) id<AWENearbyBigCardListCellShrinkProtocol> nearbyBigCardShrinkController;
@property (weak, nonatomic) AWEPOIDetailRouterInterceptor *routerInterceptor;
@property (nonatomic) BOOL dismissing;
@property (nonatomic) BOOL isHalfContainerMaxUnfold;
@property (nonatomic) BOOL pauseByPurpose;

- (void)tryPlayFeedPlayer;
- (void)tryPauseFeedPlay;
- (void)didHalfContainerOffsetChange:(id)a0 offset:(double)a1;
- (void)halfContainerUnfoldStateChange:(BOOL)a0;
- (void)vsdContainer:(id)a0 offsetChange:(double)a1;
- (void)initializeExtension;
- (void)handleNearbyCheckOrderUndertake:(id)a0;
- (void)resizeVideoWithModalViewRatio:(double)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)dealloc;
- (void)viewDidDisappear;

@end
