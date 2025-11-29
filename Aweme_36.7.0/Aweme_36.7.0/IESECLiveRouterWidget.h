@class NSString, IESECLiveRoomParamVerify;

@interface IESECLiveRouterWidget : IESECLiveBaseWidget <IESECLiveRouterWidgetAtomicProtocol, IESECLiveViewRouter, IESECLiveEnterRoomAutoOpenRouter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL shopCartShowed;
@property (retain, nonatomic) IESECLiveRoomParamVerify *verifier;
@property (nonatomic) BOOL hasTryUseAutoOpenPreloadData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL existAutoOpenViewOnEnterRoom;

- (id)panelContainer;
- (id)ecomEntranceForm;
- (id)UIConfig;
- (void)openGoodsDetailWithParams:(id)a0;
- (id)liveContext;
- (id)coreParams;
- (id)initWithRoom:(id)a0 roomContext:(id)a1;
- (id)jumpHandler;
- (void)widgetMount;
- (void)widgetUnmount;
- (void)openGoodsListViewWithParams:(id)a0;
- (void)registerAtomicBasicAbility;
- (void)widgetRefresh;
- (void)didShowShopCart:(BOOL)a0;
- (void)didHideShopCart:(BOOL)a0;
- (void)handleCoreParamsDuringLive:(id)a0;
- (id)skuCreateInfoWithGoodsModel:(id)a0 sourceBTMToken:(id)a1;
- (void)handleEnterRoomAutoOpen;
- (void)handleRouter;
- (void)openECViewWithSchema:(id)a0 scene:(id)a1;
- (void)openDetailViewWithProductID:(id)a0 skuID:(id)a1 passthroughParams:(id)a2 requestAdditions:(id)a3 extraInfo:(id)a4;
- (void)openListViewWithExtraParams:(id)a0 passthroughParams:(id)a1 extraInfo:(id)a2;
- (void)openDetailViewWithPromotionID:(id)a0 skuID:(id)a1 passthroughParams:(id)a2 requestAdditions:(id)a3 extraInfo:(id)a4;
- (void)openBuyViewWithPromotion:(id)a0 passthroughParams:(id)a1 extraInfo:(id)a2;
- (void)p_trackWhenFinalJumpWithScene:(id)a0 metricParams:(id)a1;
- (void)enterRoomLogListAddRecord:(id)a0;
- (void)p_openDetailViewWithGoodsModel:(id)a0 monitorMetricParams:(id)a1 extraInfo:(id)a2;
- (void)getGoodsModelWithPromotionID:(id)a0 skuID:(id)a1 passthroughParams:(id)a2 requestAdditions:(id)a3 scene:(id)a4 completion:(id /* block */)a5;
- (void)getGoodsModelWithProductID:(id)a0 skuID:(id)a1 passthroughParams:(id)a2 requestAdditions:(id)a3 scene:(id)a4 completion:(id /* block */)a5;
- (id)goodsModelFromAutoOpenPreload:(id)a0 byDiffNormalRequest:(id)a1;
- (void)liveContext:(id)a0 openGoodsDetailByRequestWithParams:(id)a1 completion:(id /* block */)a2;
- (id)tracker;
- (void).cxx_destruct;

@end
