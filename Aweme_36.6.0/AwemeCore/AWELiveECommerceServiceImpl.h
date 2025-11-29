@class NSString;
@protocol AWELiveCommercialRouter;

@interface AWELiveECommerceServiceImpl : NSObject <IESLiveECommerceService>

@property (retain, nonatomic) id<AWELiveCommercialRouter> commercialRouter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)quiteAgreeDisclaimerForPromotionSource:(long long)a0;
- (void)forceShowDisclaimer:(long long)a0 extraParams:(id)a1 confirmBlock:(id /* block */)a2 cancleBlock:(id /* block */)a3;
- (BOOL)isCommercialComponentShowInToolbar;
- (BOOL)openThirdPartyURL:(id)a0 platform:(long long)a1;
- (void)openECommerceAccessInternalUrl;
- (BOOL)openThirdPartyWithVerifyDialogForURL:(id)a0 promotionSource:(long long)a1;
- (BOOL)liteEcommerceEntranceEnabled;
- (id)ecomWidgetToolItemIcon;
- (void)ecomWidgetToolItemPreloadIfNeededWithEntrance:(id)a0 completion:(id /* block */)a1;
- (void)ecomWidgetToolItemCanShowWithExtraInfo:(id)a0 completion:(id /* block */)a1;
- (void)showEcomWidgetGuidePanelWithExtraInfo:(id)a0 completion:(id /* block */)a1;
- (void)checkEcomWidgetInstallStateWithCompletion:(id /* block */)a0;
- (id)formatBcmSearchParamsWith:(id)a0;
- (void).cxx_destruct;

@end
