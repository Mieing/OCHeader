@interface AWEGoodsOpenPage : NSObject

+ (void)openGoodsGuideOnViewcontroller:(id)a0 entryPage:(id)a1 completionBlock:(id /* block */)a2;
+ (BOOL)openThirdPlatformWithoutGoodsDetailForUrl:(id)a0 promotionSource:(long long)a1;
+ (void)openMyOrdersWithOriginType:(id)a0 enterFrom:(id)a1 withParams:(id)a2 orderURL:(id)a3;
+ (void)openMyOrdersWithOriginType:(id)a0 enterFrom:(id)a1;
+ (void)openTaobaoWithWebURLString:(id)a0 onViewController:(id)a1 completion:(id /* block */)a2;
+ (void)openNewShopInstrumentBoxWithParameters:(id)a0;
+ (void)openAddGoodsPageWithParameters:(id)a0;
+ (id)goodsPageWithParameters:(id)a0;
+ (id)VCForOpenGoodsPurposeWithRefVC:(id)a0;
+ (void)fallbackToWebViewWithURLString:(id)a0 inViewController:(id)a1 becauseOfError:(id)a2 completion:(id /* block */)a3;
+ (void)openMyOrdersWithOriginType:(id)a0 enterFrom:(id)a1 withParams:(id)a2;
+ (void)openPageWithAwemeSettingsKey:(id)a0 defaultURLString:(id)a1 additionalPageParameters:(id)a2;
+ (id)pageWithAwemeSettingsKey:(id)a0 defaultURLString:(id)a1 additionalPageParameters:(id)a2;
+ (void)openPageWithURLString:(id)a0 fromViewController:(id)a1 additionalPageParameters:(id)a2;
+ (id)handleURLString:(id)a0 additionalPageParameters:(id)a1;
+ (id)pageWithURLString:(id)a0 fromViewController:(id)a1 additionalPageParameters:(id)a2;
+ (void)openMyOrdersWithOriginType:(id)a0 enterFrom:(id)a1 orderURL:(id)a2;
+ (void)openGoodsReportPageWithParams:(id)a0;
+ (id)awemeCache;
+ (void)openShopReputationDetailPageWithSecAuthorId:(id)a0 enterSource:(id)a1 followStatus:(id)a2 authorId:(id)a3;

@end
