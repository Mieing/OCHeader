@class NSString;

@interface IESECGoodsDetailSchemaReportUtils : NSObject <IESECGoodsDetailSchemaReportUtils>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addCartWithParams:(id)a0 pdpParams:(id)a1;
+ (void)openSchemaWithParams:(id)a0 pdpParams:(id)a1;
+ (void)enterPDP:(id)a0;
+ (void)p_reportWithBusiness:(id)a0 location:(id)a1 inSchema:(id)a2 outSchema:(id)a3 pdpSchema:(id)a4;
+ (id)p_handleSKUParamsFromOrigin:(id)a0;
+ (id)p_buyNowFullParamsFromOrigin:(id)a0;
+ (void)addCartWithParams:(id)a0 skuParams:(id)a1 pdpParams:(id)a2;
+ (void)buyNowWithParams:(id)a0 pdpParams:(id)a1;
+ (void)buyNowWithParams:(id)a0 skuParams:(id)a1 pdpParams:(id)a2;
+ (void)openSKUWithParams:(id)a0 pdpParams:(id)a1;
+ (void)skuDiffWithOldParams:(id)a0 newParams:(id)a1;
+ (void)ultimateBuyDiffWithOldParams:(id)a0 newParams:(id)a1;


@end
