@class NSString, NSDictionary, AWEAwemeModel, UIViewController;
@protocol AWEPOIFeedPlayerManagerProtocol, AWENearbyBigCardListCellShrinkProtocol;

@interface AWEPOIListAnchorController : NSObject <BDXPopupEventProtocol, AWEPOIFeedPlayerManagerDatasource, BDXContainerLifecycleProtocol>

@property (copy, nonatomic) NSDictionary *routerParams;
@property (nonatomic) long long initialHeightPercent;
@property (nonatomic) double offset;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) BOOL isPopupVCAppear;
@property (nonatomic) BOOL hideFeedInteraction;
@property (weak, nonatomic) UIViewController *popUpVC;
@property (weak, nonatomic) id<AWENearbyBigCardListCellShrinkProtocol> nearbyBigCardShrinkController;
@property (nonatomic) BOOL isNearbyBackAction;
@property (retain, nonatomic) id<AWEPOIFeedPlayerManagerProtocol> feedManager;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (nonatomic) BOOL isShowingListAnchorFiveScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerWillDestory:(id)a0;
- (void)popup:(id)a0 willChangeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 withDuration:(double)a3;
- (void)popup:(id)a0 didDragTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)popupDidCloseWithContainer:(id)a0 params:(id)a1;
- (BOOL)handlePopupResizeWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)popupDidChangeToStatus:(long long)a0 withContainer:(id)a1;
- (void)windowDidResignKeyNotification:(id)a0;
- (void)windowDidBecomeKeyNotification:(id)a0;
- (void)tryPlayFeedPlayer;
- (void)tryPauseFeedPlay;
- (void)setupPopupControllerWithSchema:(id)a0;
- (void)setupPopupControllerWithSchema:(id)a0 logExtra:(id)a1 btmResponder:(id)a2 btm:(id)a3 btmStandData:(id)a4;
- (void)handleNearbyCheckOrderUndertake:(id)a0;
- (BOOL)shouldRelocateVideoViewWithoutShrink;
- (BOOL)shouldResizeVideoWidth:(id)a0;
- (BOOL)shouldResizeVideoHeight:(id)a0;
- (BOOL)isWidthVideo:(id)a0;
- (void)resetFeedState;
- (void)setupPopupControllerWithSchema:(id)a0 logExtra:(id)a1;
- (void)setupPopupControllerWithAnchorInfo:(id)a0 logExtra:(id)a1 btmResponder:(id)a2 btm:(id)a3;
- (void)setupPopupControllerWithSchema:(id)a0 logExtra:(id)a1 btmResponder:(id)a2 btm:(id)a3;
- (double)convertRatioByFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupPopupControllerWithAnchorInfo:(id)a0 logExtra:(id)a1;
- (void)setupPopupControllerWithAnchorInfo:(id)a0 logExtra:(id)a1 btmResponder:(id)a2 btm:(id)a3 btmStandData:(id)a4;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (id)init;
- (void)applicationWillResignActive;
- (void)dealloc;

@end
