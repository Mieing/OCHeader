@class NSString, HTSLiveToolbarItem, IESLiveECommerceDurationTrack, HTSLiveBottomRightCardArea;
@protocol IESLiveECRoomService, IESLivePerfSampler, IESECLiveAnchorFlashSaleService, IESECLiveAnchorPickedCommodityService, IESLiveAnchorECommerceActions, IESLiveCarRouter;

@interface IESLiveAnchorECommerceFragment : IESLiveECommerceFragment <HTSLiveRoomRemoteActions, HTSLiveMessageSubscriber, IESLiveECommerceInternalAnchorRouter, IESLiveECommerceFlashSaleRouter, IESECLiveAnchorInnerService, IESLiveToolbarComponentHandler, IESLiveBottomRightCardAction, IESLiveAnchorRoomStatusChangeEvents>

@property (nonatomic) BOOL isAnchor;
@property (retain, nonatomic) HTSLiveToolbarItem *shopItem;
@property (nonatomic) BOOL isNoticeShown;
@property (nonatomic) BOOL hasProduct;
@property (nonatomic) BOOL authority;
@property (retain, nonatomic) IESLiveECommerceDurationTrack *durationTracker;
@property (retain, nonatomic) HTSLiveBottomRightCardArea *explainCard;
@property (retain, nonatomic) id<IESLiveAnchorECommerceActions> anchorECommerceActions;
@property (retain, nonatomic) id<IESLiveCarRouter> carRouter;
@property (nonatomic) BOOL isRevertLive;
@property (retain, nonatomic) id<IESLiveECRoomService> ecRoomService;
@property (weak, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (retain, nonatomic) id<IESECLiveAnchorFlashSaleService> flashSaleService;
@property (retain, nonatomic) id<IESECLiveAnchorPickedCommodityService> pickedCommodityService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentDidAppear;
- (void)componentUnmount;
- (void)componentOrientationChanged:(long long)a0;
- (BOOL)hasCommerceGoods;
- (BOOL)couldUnmountComponent;
- (BOOL)useNewStyle;
- (void)toolbarReceiveComponent:(id)a0 completion:(id /* block */)a1;
- (void)toolbarComponentRemovedReason:(unsigned long long)a0 extra:(id)a1;
- (void)didEnterLiveRoom:(id)a0;
- (void)startAnchorLiveWithRoom:(id)a0;
- (void)willStopAnchorLive;
- (BOOL)hasAuthority;
- (void)clickFlashSaleEntrance:(id)a0 userName:(id)a1;
- (BOOL)canShowFlashSaleEntrance;
- (void)showFlashSaleEntranceIfNeeded;
- (void)hideFlashSaleEntrance;
- (void)showBubbleGuideWithText:(id)a0 forView:(id)a1 atBottom:(BOOL)a2 duration:(double)a3 didShow:(id /* block */)a4;
- (void)showToolbarBubbleGuideWithText:(id)a0 duration:(double)a1 didShow:(id /* block */)a2;
- (void)pickedCommodityPanelDidDismiss;
- (void)bottomRightCardData:(id)a0;
- (void)switchEntranceOnToolbar;
- (void)setupMessage;
- (void)showExplainCard:(id)a0;
- (void)closeExplainCard:(id)a0;
- (void)moveECommerceItemToGroup:(BOOL)a0;
- (void)setupECRoomService;
- (void)showShopCartInMoreGroup;
- (void)showShopCartInToolBar;
- (BOOL)isShopItemInToolBar;
- (void)shopItemClick;
- (BOOL)isShopItemInMore;
- (BOOL)bottomRightCardIsEcomCart:(id)a0;
- (void)ecommerceUpdateShowStatus:(BOOL)a0;
- (void)startTimmingTrackProductViewDuration;
- (void)addECPerfFeature;
- (void)endTimmingTrackProductViewDuration;
- (void)removeECPerFeature;
- (void)callbackCartShowed:(BOOL)a0;
- (void)callbackCartHidden;
- (void)addAEcommerceNoticeIfNeedWithMessage:(id)a0;
- (id)anchorShopEntry;
- (void)close;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
