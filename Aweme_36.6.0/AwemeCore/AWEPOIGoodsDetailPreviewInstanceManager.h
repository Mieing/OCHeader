@class NSString, UIViewController, AWEPOIFeedPlayerManager;
@protocol AWENearbyBigCardListCellShrinkProtocol;

@interface AWEPOIGoodsDetailPreviewInstanceManager : NSObject <AWEPOIFeedPlayerManagerDatasource>

@property (weak, nonatomic) UIViewController *currentViewController;
@property (copy, nonatomic) NSString *currentTraceSessionId;
@property (retain, nonatomic) AWEPOIFeedPlayerManager *feedManager;
@property (weak, nonatomic) id<AWENearbyBigCardListCellShrinkProtocol> nearbyBigCardShrinkController;
@property (nonatomic) BOOL startShowing;
@property (nonatomic) BOOL isFromPoiDetail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldPreventPauseVideoWhenGoodsDetailPopup;
- (void)hideGradientView;
- (void)showGradientView;
- (void)tryPlayFeedPlayer;
- (void)tryPauseFeedPlay;
- (void)goodsDetailDidSwitchWithIsHalfScreen:(BOOL)a0;
- (void)goodsDetailFrameDidChangeWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 goodsDetailFullHeight:(double)a1;
- (void)goodsDetailDidClose;
- (BOOL)goodsDetailShouldShowMask;
- (void)goodsDetailDidDisapper;
- (void)goodsDetailDidNotFirstAppear;
- (void)updatePauseByPurpose:(BOOL)a0;
- (void)goodsDetailForceResumeInteraction;
- (void)goodsDetailForceHideInteraction;
- (void)resizeVideoWhenIPadFrameChangeTo:(struct CGSize { double x0; double x1; })a0;
- (void)goodsDetailDidFirstAppear;
- (void)goodsDetailForceClosed;
- (BOOL)isSearchAdPoiXScreen;
- (BOOL)shouldResizeVideoWidth:(id)a0;
- (BOOL)shouldResizeVideoHeight:(id)a0;
- (BOOL)isCurrentPopupGoodsDetailShowing;
- (BOOL)supportPreview;
- (BOOL)isVideoSupportType;
- (void).cxx_destruct;

@end
