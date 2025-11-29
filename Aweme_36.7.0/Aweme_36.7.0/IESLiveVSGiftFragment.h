@class UIView, NSString, IESLiveVSGiftPanelViewModel, HTSLiveToolbarItem, IESLiveGiftDataManager, UIImageView, IESLiveVSGiftPanelView, NSNumber, IESLiveVSGiftStore;
@protocol IESLiveWebPPlayer;

@interface IESLiveVSGiftFragment : IESLiveRoomComponent <IESLiveVSGiftReaction, IESLiveRoomThemeActions, IESLiveToolbarComponentHandler>

@property (retain, nonatomic) IESLiveVSGiftStore *store;
@property (retain, nonatomic) IESLiveVSGiftPanelView *giftPanelView;
@property (retain, nonatomic) IESLiveVSGiftPanelViewModel *giftPanelViewModel;
@property (retain, nonatomic) HTSLiveToolbarItem *giftItem;
@property (retain, nonatomic) UIView *itemCustomView;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *giftItemAnimationPlayer;
@property (nonatomic) long long orientation;
@property (nonatomic) BOOL orientationTag;
@property (retain, nonatomic) NSNumber *isNetworkConnected;
@property (nonatomic) BOOL fetchGiftListTag;
@property (nonatomic) BOOL isVerticalStream;
@property (retain, nonatomic) IESLiveGiftDataManager *giftDataManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationTransitionBegin:(long long)a0;
- (void)componentOrientationTransitioning:(long long)a0;
- (void)handleOrientationChanged:(long long)a0;
- (void)remoteRoomDataReady:(id)a0;
- (void)toolbarReceiveComponent:(id)a0 completion:(id /* block */)a1;
- (void)toolbarComponentRemovedReason:(unsigned long long)a0 extra:(id)a1;
- (void)toolbarComponentUpdate:(id)a0;
- (void)roomThemeNeedRefresh;
- (void)dispatchMessageIfNeed;
- (void)p_removeGiftPanel;
- (BOOL)hideLandScapeGift;
- (void)tr_showGiftItem;
- (void)p_updateGiftItemImage;
- (BOOL)p_shouldShowGiftItem;
- (void)p_showGiftPanelViewWithPageType:(unsigned long long)a0 giftID:(id)a1 firstSelectGiftCompletion:(id /* block */)a2;
- (void)p_hideGiftPanel;
- (BOOL)p_isLandscape;
- (BOOL)isLandScapePanelV2Enable;
- (id)p_createIPadPopupItem;
- (id)p_createPopupItemWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)dismissGiftPanelView;
- (void)p_addGiftItemIfNeededWithInitialItem:(id)a0;
- (void)p_addGiftItemWithInitialItem:(id)a0;
- (void)p_tapGiftItem;
- (void)tr_tapGiftItem;
- (void)r_showGiftPanelWithTrackParams:(id)a0 completion:(id /* block */)a1;
- (void)r_showGiftPanelWithPageType:(unsigned long long)a0 trackParams:(id)a1 completion:(id /* block */)a2;
- (void)r_showGiftPanelWithGiftID:(id)a0 trackParams:(id)a1 completion:(id /* block */)a2 firstSelectGiftCompletion:(id /* block */)a3;
- (void)r_hideGiftPanel;
- (void)r_removeGiftPanel;
- (void)r_updateDiamond:(id)a0;
- (void).cxx_destruct;

@end
