@class NSString;

@interface AWEPOIMultiFeedAnchorUtils : NSObject <AWEPOIMultiFeedAnchorManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)feedAnchorClickWithContext:(id)a0;
+ (Class)aAWEMainModuleServiceDOUYINHTSAdaperClass;
+ (id)getAnchorInfoWithContext:(id)a0;
+ (void)reviseEnterMethod:(id *)a0 referString:(id)a1 logExtra:(id)a2 scene:(unsigned long long)a3;
+ (id)aweNearbyModuleService;
+ (void)p_feedPOIAnchorClickWithContext:(id)a0;
+ (void)p_feedTradeAnchorClickWithContext:(id)a0;
+ (void)p_feedPOIListAnchorClickWithContext:(id)a0;
+ (void)appendLifeExtraInfoWithAweme:(id)a0 referString:(id)a1 logExtra:(id)a2 toParams:(id)a3 scene:(unsigned long long)a4;
+ (void)appendLifeExtraInfo:(id)a0 toParams:(id)a1 scene:(unsigned long long)a2;
+ (id)p_tradeSchemaAddCommonQueryWithContext:(id)a0;
+ (id)p_feedPOIAnchorPrefetchLocalLifeSchemaWithContext:(id)a0;
+ (id)p_feedPOIAnchorClickParamsWithContext:(id)a0;
+ (id)schemaWithPrefetchLocalLifeAnchorWithContext:(id)a0;
+ (BOOL)canShowMultiAnchorWithAweme:(id)a0 scene:(long long)a1;

- (id)aAWEMainModuleServiceDOUYINHTSAdaper;

@end
