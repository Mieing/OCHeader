@interface IESECLiveGoodStatusUtils : NSObject

+ (long long)stockStatusWithSold:(id)a0 withStock:(BOOL)a1 withCampaign:(id)a2;
+ (long long)saleStatusForAnchor:(long long)a0;
+ (long long)saleStatusForAudience:(long long)a0;
+ (id)saleInfoForAnchorWithSaleStatus:(long long)a0 stockStatus:(long long)a1 soldHint:(id)a2;
+ (id)saleInfoForAudienceWithSaleStatus:(long long)a0 stockStatus:(long long)a1 soldHint:(id)a2;

@end
