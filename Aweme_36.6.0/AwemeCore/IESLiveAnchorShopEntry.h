@class UIControl, IESLiveECommerceAPI, NSString, UILabel, IESLiveGuideToolBarItem, IESLiveEntryTag;
@protocol IESLiveURLSchemaHandler, IESLiveGuideToolBarProvider, IESLiveECommerceService, IESLiveGuideShopEntryAction, IESLiveInternalRouter;

@interface IESLiveAnchorShopEntry : NSObject <IESLiveGuideTimorEntryAction, IESLiveGuideWelfareEntryAction, IESLiveGuideLocalLifeAction, IESLiveCommercialComponentsActions, IESLiveGuideShopFactory>

@property (nonatomic) BOOL enableNewStyle;
@property (copy, nonatomic) id /* block */ startLiveCompletetion;
@property (copy, nonatomic) id /* block */ startLiveFail;
@property (retain, nonatomic) id<IESLiveECommerceService> ecommerceRouter;
@property (retain, nonatomic) id<IESLiveInternalRouter> internalRouter;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> urlSchemaHandler;
@property (retain, nonatomic) id<IESLiveGuideToolBarProvider> toolbarProvider;
@property (retain, nonatomic) id<IESLiveGuideShopEntryAction> shopEntryAction;
@property (weak, nonatomic) UIControl *goodsPickerActor;
@property (weak, nonatomic) IESLiveGuideToolBarItem *shoppingEntryItem;
@property (weak, nonatomic) UILabel *goodsPickedlabel;
@property (weak, nonatomic) IESLiveEntryTag *shoppingButtonTag;
@property (retain, nonatomic) IESLiveECommerceAPI *api;
@property (readonly, nonatomic) BOOL isTimorEntryFull;
@property (nonatomic) BOOL isLocalLifeFull;
@property (nonatomic) BOOL isPaidLiveTicketFull;
@property (nonatomic) long long pickedCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)bindActions;
- (void)willSwitchToCommercialComponent:(unsigned long long)a0;
- (void)willRemoveCommercialComponent:(unsigned long long)a0;
- (void)localLifeChangeWithEmpty:(BOOL)a0;
- (BOOL)shopEnable;
- (void)enableToolbarNewStyle:(BOOL)a0;
- (void)trackShopEntryShow;
- (id)createShoppingEntryItem;
- (void)guideTimorModelDidChange;
- (void)guideWelfareModelDidChange;
- (BOOL)selectedShops;
- (BOOL)isWelfareEntryFull;
- (void)_setButtonTag:(long long)a0 needRefresh:(BOOL)a1;
- (void)openCommodityPicker:(id)a0;
- (void)_fetchPickedGoods;
- (void)shopViewHandler:(id /* block */)a0;
- (BOOL)supportCoexistWithTimor;
- (void)trackShopEntryClickWithTarget:(id)a0;
- (void)_updateGoodsPickedLabel:(long long)a0;
- (void)updateShopImage:(id)a0;
- (void)updateGoodsPickerButtonCountLabel:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
