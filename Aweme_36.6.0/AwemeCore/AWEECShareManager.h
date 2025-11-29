@interface AWEECShareManager : NSObject

+ (void)verifyShareSecretWithSchema:(id)a0 requestPage:(unsigned long long)a1 shareChannel:(unsigned long long)a2 ecS:(id)a3 bizParams:(id)a4 extraDic:(id)a5 completion:(id /* block */)a6;
+ (void)requesetSafeTokenWithSchema:(id)a0 requestPage:(unsigned long long)a1 destinationPage:(unsigned long long)a2 extraDic:(id)a3 completion:(id /* block */)a4;
+ (id)ecomShareSaveToAlbumImageWithSharedImage:(id)a0 bgColorImage:(id)a1 shareScene:(id)a2 bgColor:(id)a3;
+ (void)trackEcomShareReflowWithUrl:(id)a0;
+ (void)openGoodsLynxPosterSharePanelWithParams:(id)a0 jsbParams:(id)a1;
+ (void)openEcomLynxPosterSharePanelWithParams:(id)a0 jsbParams:(id)a1;
+ (void)requestGoodsInfoBeforeReturnWithRequestPage:(unsigned long long)a0 itemType:(unsigned long long)a1 itemId:(id)a2 userId:(id)a3 marketingChannel:(id)a4 extraDic:(id)a5 schema:(id)a6 extraInfo:(id)a7 completion:(id /* block */)a8;
+ (id)ecomTagStackView:(id)a0 shouldHideBoundsView:(BOOL)a1 maxWidth:(double)a2 needCoupon:(BOOL)a3;
+ (void)requestShareItemImInfoWithItemId:(id)a0 itemType:(id)a1 requestPage:(id)a2 extraDic:(id)a3 logDic:(id)a4 modelClass:(id)a5 withCompletion:(id /* block */)a6;
+ (id)generateGoodsTrackObjectWithParams:(id)a0;
+ (void)requestBeforeShareWithParams:(id)a0 logDic:(id)a1 completion:(id /* block */)a2;
+ (id)transJSBParamsToActivityModel:(id)a0 jsbParams:(id)a1;
+ (void)reportEcomPanelShowWithEcomActivityModel:(id)a0;
+ (void)requestBeforeShareWithActivityModel:(id)a0 logDic:(id)a1 completion:(id /* block */)a2;
+ (id)transJSBParamsToGoodsModel:(id)a0 jsbParams:(id)a1;
+ (void)requesetHotGoodsInfoWithItemId:(id)a0 withSchema:(id)a1 marketChannel:(id)a2 channelId:(id)a3 channelType:(long long)a4 extraDic:(id)a5 logDic:(id)a6 withCompletion:(id /* block */)a7;
+ (void)requestBeforeShareWithShareModel:(id)a0 extraDic:(id)a1 logDic:(id)a2 completion:(id /* block */)a3;
+ (void)requestBeforeShareWithShopOwnerModel:(id)a0 extraDic:(id)a1 logDic:(id)a2 completion:(id /* block */)a3;
+ (void)requestBeforeShareWithStoreModel:(id)a0 extraDic:(id)a1 logDic:(id)a2 completion:(id /* block */)a3;
+ (void)annieActivityModelAdapter:(id)a0 jsbParams:(id)a1;
+ (void)reportEcomPanelShowWithGoodsModel:(id)a0;
+ (id)hMacMD5String:(id)a0;

@end
