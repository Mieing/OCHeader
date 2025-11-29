@interface IESECSKUDiffReport : NSObject

+ (void)diffUltimateBuy:(id)a0 oldSchema:(id)a1 bussiness:(id)a2 location:(id)a3;
+ (void)diffBuyNow:(id)a0 oldSchema:(id)a1 bussiness:(id)a2 location:(id)a3;
+ (void)diffSkuSchema:(id)a0 request:(id)a1 bussiness:(id)a2 location:(id)a3;
+ (void)diffUltimateBuy:(id)a0 request:(id)a1 bussiness:(id)a2 location:(id)a3;
+ (id)p_skuProcessPassThrough:(id)a0;
+ (id)p_ultimatePassThroughV1:(id)a0;
+ (id)p_ultimatePassThroughV2:(id)a0;
+ (id)p_transMega:(id)a0;

@end
