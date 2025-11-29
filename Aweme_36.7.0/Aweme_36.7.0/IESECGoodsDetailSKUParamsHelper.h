@interface IESECGoodsDetailSKUParamsHelper : NSObject

+ (id)skuPageVCFromHostView:(id)a0 containerVC:(id)a1 pageContext:(id)a2 commonMeta:(id)a3 bottomMeta:(id)a4 skuManager:(id)a5 skuMetaParams:(id)a6;
+ (id)p_originShowRequestWithAction:(id)a0 hostView:(id)a1 containerVC:(id)a2 pageContext:(id)a3 commonMeta:(id)a4 bottomMeta:(id)a5 skuManager:(id)a6;
+ (id)originSKUParamsFromAction:(id)a0 hostView:(id)a1 containerVC:(id)a2 pageContext:(id)a3 commonMeta:(id)a4 bottomMeta:(id)a5 skuManager:(id)a6;
+ (id)originUltimateBuyParamsFromAction:(id)a0 hostView:(id)a1 containerVC:(id)a2 pageContext:(id)a3 commonMeta:(id)a4 bottomMeta:(id)a5 skuManager:(id)a6;
+ (void)reportSchemaSKUDiffWithOriginParams:(id)a0 optimizedVC:(id)a1;
+ (void)reportSchemaUltimateBuyDiffWithOriginParams:(id)a0 optimizedVC:(id)a1;

@end
