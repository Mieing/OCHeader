@interface AWESearcPitayaManager : NSObject

+ (id)featureConfig;
+ (id)sendBackDocsFromPitaya;
+ (id)sendBackDocsFromPitayaWithSafeMainThread:(BOOL)a0;
+ (void)runPitayaTaskForSearchRequest:(id)a0 callBack:(id /* block */)a1;
+ (void)cleanPitayaData;
+ (BOOL)generalSmartPagingNewFeature;
+ (BOOL)isNeedConfigInfo;

@end
