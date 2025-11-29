@class NSString;

@interface IESECUltimateBuyCacheManagerImpl : NSObject <IESECUltimateBuyCacheManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cropUltimateBuyCache:(id)a0;
+ (void)prefetchDataWithUltimateBuyRequestParams:(id)a0;
+ (id)cacheForUltimateBuyRequestParams:(id)a0;
+ (BOOL)ultimateBuyCache:(id)a0 shouldHandleTrigger:(id)a1;
+ (void)saveUltimateBuyCache:(id)a0 cacheType:(id)a1 forRequestParams:(id)a2;
+ (void)prefetchDataWithUltimateBuySchemaParams:(id)a0;
+ (BOOL)hasUltimateBuyCacheForRequestParams:(id)a0;
+ (id)getAPIExtraParamsFromNewRequestParams:(id)a0;
+ (BOOL)isValidUltimateBuyCache:(id)a0;
+ (id)sceneTypeFromNewRequestParams:(id)a0;
+ (id)cacheKeyFromRequestParams:(id)a0;
+ (id)productIDFromNewRequestParams:(id)a0;
+ (id)dataAppendIsClientCacheForOrgData:(id)a0;
+ (id)dataRemoveAutoExposeForOrgData:(id)a0;
+ (id)eventChainAppendIsClientCacheForOrgEventChain:(id)a0;
+ (id)processUltimateCache:(id)a0;
+ (void)setEmptyInMap:(id)a0 withPath:(id)a1;
+ (id)defaultSpecIdFromNewRequestParams:(id)a0;


@end
