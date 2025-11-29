@interface IESECGoodsOpenPageManager : NSObject

+ (void)openTaobaoWithWebURLString:(id)a0 onViewController:(id)a1 completion:(id /* block */)a2;
+ (void)openFangXinGouAlikeGoodsShopCartPageWithWebUrlStr:(id)a0 onViewController:(id)a1;
+ (id)VCForOpenGoodsPurposeWithRefVC:(id)a0;
+ (void)addToShoppingCartWithParams:(id)a0 needSaaSHeaders:(BOOL)a1 completion:(id /* block */)a2;
+ (void)wantGoodsPromotionID:(id)a0 awemeID:(id)a1 authorID:(id)a2 addition:(id)a3 add:(BOOL)a4 completion:(id /* block */)a5;
+ (id)generateOrderURL:(id)a0 addingIfNotExist:(id)a1 merging:(id)a2 adInfoFallbackDict:(id)a3;
+ (void)openGoodsURL:(id)a0 withTrackExtra:(id)a1 onViewController:(id)a2 completion:(id /* block */)a3;
+ (void)openGoodsConsultPageWithParams:(id)a0 addition:(id)a1 onViewController:(id)a2;
+ (void)addToShoppingCart:(id)a0 SKUInfo:(id)a1 additionInfo:(id)a2 completion:(id /* block */)a3;
+ (void)buyFangXinGouAlikeParams:(id)a0 onViewController:(id)a1 notExistThenAddDict:(id)a2 forceMergeDict:(id)a3 completion:(id /* block */)a4;
+ (id)addNGroupType:(id)a0 dict:(id)a1;
+ (id)orderURLFromVideoGoodsModel:(id)a0 extraInfo:(id)a1;
+ (id)queryParamsForOrderURL:(id)a0;
+ (BOOL)supportMegaFromOrderURL:(id)a0;
+ (id)finalParamsFromOriginDict:(id)a0 notExistThenAddDict:(id)a1 forceMergeDict:(id)a2 supportMegaObject:(BOOL)a3;
+ (void)paidOrExperienceFangXinGouAlikeParams:(id)a0 onViewController:(id)a1;
+ (void)buyFangXinGouWithCommonMeta:(id)a0 buyMeta:(id)a1 orderURLString:(id)a2 withSKUInfo:(id)a3 onViewController:(id)a4 onSKUViewController:(id)a5 notExistThenAddDict:(id)a6 forceMergeDict:(id)a7 extraDict:(id)a8 completion:(id /* block */)a9;
+ (void)goToOrderSchemaReportWithOrderURL:(id)a0 detailSchemaParams:(id)a1 skuSchemaParams:(id)a2;
+ (void)openOtherAPPWithScheme:(id)a0 completion:(id /* block */)a1;
+ (void)loginThenOpenWebURLString:(id)a0 title:(id)a1 onViewController:(id)a2;
+ (void)openMarketingFloor:(id)a0 enterSource:(id)a1;
+ (void)openCombinationPageSchema:(id)a0 isHalfScreen:(BOOL)a1 onViewController:(id)a2;

@end
