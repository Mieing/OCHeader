@class NSString;

@interface IESECUltimateBuyCacheManager : NSObject <IESECUltimateBuyCacheManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cropUltimateBuyCache:(id)a0;
+ (void)prefetchDataWithUltimateBuyRequestParams:(id)a0;
+ (id)cacheForUltimateBuyRequestParams:(id)a0;
+ (BOOL)ultimateBuyCache:(id)a0 shouldHandleTrigger:(id)a1;
+ (void)saveUltimateBuyCache:(id)a0 cacheType:(id)a1 forRequestParams:(id)a2;
+ (id)ultimateCacheManager;
+ (void)prefetchDataWithUltimateBuySchemaParams:(id)a0;
+ (BOOL)hasUltimateBuyCacheForRequestParams:(id)a0;


@end
