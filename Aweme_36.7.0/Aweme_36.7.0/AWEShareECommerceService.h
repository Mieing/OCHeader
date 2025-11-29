@class UIView, AWEECEcomActivitySharePosterBulletView, UIImage, AWEShareContext, AWEShareBasePanelController, NSString, AWEUILoadingView, AWEECGoodsShareQRCodeBulletView, AWEECGoodsSharePosterBulletView, AWEECEcomActivityShareQRCodeBulletView;

@interface AWEShareECommerceService : AWEShareCommonImpl <AWESharePanelTopContainerDelegate, AWEECGoodsShareQRCodeDelegate, AWEECGoodsSharePosterDelegate, AWEShareECommerce>

@property (retain, nonatomic) AWEShareContext *context;
@property (retain, nonatomic) UIView *topContainerCardView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) BOOL shareImageLoadQRCodeImageSuccess;
@property (retain, nonatomic) UIImage *qrCodeImage;
@property (nonatomic) BOOL isQRCodeLoaded;
@property (retain, nonatomic) AWEECGoodsSharePosterBulletView *posterView;
@property (retain, nonatomic) AWEECGoodsShareQRCodeBulletView *qrCodeView;
@property (retain, nonatomic) AWEECEcomActivitySharePosterBulletView *activityPosterView;
@property (retain, nonatomic) AWEECEcomActivityShareQRCodeBulletView *activityQrCodeView;
@property (weak, nonatomic) AWEShareBasePanelController *targetSharePanel;
@property (weak, nonatomic) UIView *targetView;
@property (nonatomic) BOOL isTopContainerLoaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)showPanelWithGoods:(id)a0 onViewController:(id)a1;
- (id /* block */)showShareGoodsImagePanelWithGoods:(id)a0 onViewController:(id)a1 dismissHandler:(id /* block */)a2 shareCompletionHandler:(id /* block */)a3;
- (id /* block */)showHelpPanelWithGoods:(id)a0 onViewController:(id)a1 dismissHandler:(id /* block */)a2 shareCompletionHandler:(id /* block */)a3;
- (id /* block */)showShareEcomActivityImagePanelWithActivityModel:(id)a0 onViewController:(id)a1 dismissHandler:(id /* block */)a2 shareCompletionHandler:(id /* block */)a3;
- (id)contextWithGoods:(id)a0;
- (void)showPanelWithShopOwner:(id)a0 onViewController:(id)a1;
- (id)showPosterPanelWithEcomActivityModel:(id)a0 onViewController:(id)a1;
- (void)showPanelWithStore:(id)a0 onViewController:(id)a1;
- (id)_convertFenToYuan:(id)a0;
- (void)hideTopContainerView;
- (void)showTopContainerView;
- (void)dismissTopContainerView;
- (void)handlePosterQRCodeLoaded:(BOOL)a0;
- (void)handlePosterDismiss;
- (void)openEcomSharePosterSchema:(id)a0;
- (void)handleQRBulletDismiss;
- (void)handleQRImageDownloadWithScene:(id)a0;
- (id)statsShareGoodsStage;
- (void)reportPanelDuration:(id)a0;
- (id)getAttributedStringWithPrice:(id)a0 withSuffix:(id)a1;
- (id)_makeAttributedStringWithGoodsPrice:(id)a0;
- (id)matchBtmIdWithPlatform:(id)a0;
- (id)shareGoodsImageListItemsWithTask:(id)a0 shareCompletionHandler:(id /* block */)a1;
- (void)dismissTopContainerViewWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (double)p_postPreviewOffset;
- (id)contextWithShopOwner:(id)a0;
- (id)statsShareShopOwnerStage;
- (id)contextWithStore:(id)a0;
- (id)statsShareStoreStage;
- (id)contextWithEcomActivityModel:(id)a0;
- (void)reportPanelDurationWithActivityModel:(id)a0;
- (id)shareActivityImageListItemsWithTask:(id)a0 shareCompletionHandler:(id /* block */)a1;
- (BOOL)shouldLoadTopContainerWithContext:(id)a0;
- (void)buildWithContext:(id)a0 sharePanel:(id)a1 onView:(id)a2;
- (void)updateTopContianerView;
- (void)showTopContainerViewWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
