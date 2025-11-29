@interface AWERecordBeautyMonitor : NSObject

+ (void)trackBeautyFetchEffectNeedUpdate:(BOOL)a0;
+ (void)monitorEffectListSucceededWithPanelName:(id)a0 duration:(double)a1 needUpdate:(BOOL)a2;
+ (void)trackToolPerformanceApiDuration:(double)a0 isSucceeded:(BOOL)a1 isHitCache:(BOOL)a2 error:(id)a3;
+ (void)trackBeautyFetchEffectListWithIsSucceeded:(BOOL)a0 errorMsg:(id)a1;
+ (void)monitorBeautyPlatformDownloadFailedWithEffectId:(id)a0 effectName:(id)a1 fileDownloadURLs:(id)a2 duration:(double)a3 downloadError:(id)a4;
+ (void)trackBeautyResourceDownloadWithEffectId:(id)a0 effectName:(id)a1 fileDownloadURLs:(id)a2 isSucceeded:(BOOL)a3 error:(id)a4 duration:(double)a5;
+ (void)monitorBeautyPlatformDownloadSucceededWithEffectId:(id)a0 effectName:(id)a1 downloadUrls:(id)a2 duration:(double)a3;
+ (void)monitorEffectListFailedWithPanelName:(id)a0 errorDesc:(id)a1 errorCode:(long long)a2 needUpdate:(BOOL)a3;
+ (id)p_getIPFromURLList:(id)a0;
+ (id)p_getIPArrayFromHost:(id)a0;

@end
