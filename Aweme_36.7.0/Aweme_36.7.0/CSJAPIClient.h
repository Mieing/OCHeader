@class NSDictionary, CSJAPIThrottling;

@interface CSJAPIClient : NSObject

@property (copy, nonatomic) id /* block */ recieveBidMaterialBlock;
@property (copy, nonatomic) NSDictionary *extraDict;
@property (retain, nonatomic) CSJAPIThrottling *throttling;

+ (id)sharedInstance;

- (id)dictionaryToJson:(id)a0;
- (void)batchWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)splashAdLogWithAdSlot:(id)a0 splashAdLogType:(long long)a1 otherParameter:(id)a2;
- (void)nativeNoAdLogWithAdSlot:(id)a0 materialMeta:(id)a1 otherParameter:(id)a2;
- (void)fetchNativeAdsWithAdSlot:(id)a0 reqType:(long long)a1 completionHandler:(id /* block */)a2;
- (void)fetchNativeAdsJsonWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)pbu_checkAdNetworkValidWithSlot:(id)a0 error:(id *)a1;
- (void)_reportAppEnvIfNeeded;
- (void)printRequestLog:(id)a0;
- (void)_reportLoadADMaterialDurationWithSlot:(id)a0;
- (void)recordResponseMaterial:(id)a0;
- (void)nativeNoAdLogWithAdSlot:(id)a0 responseModel:(id)a1 otherParameter:(id)a2;
- (void)fetchSplashAdsWithAdSlot:(id)a0 requestDictionary:(id)a1 reqType:(long long)a2 completionHandler:(id /* block */)a3;
- (void)new_fetchSplashAdsWithAdSlot:(id)a0 requestDictionary:(id)a1 reqType:(long long)a2 completionHandler:(id /* block */)a3;
- (id)preFetchAdmsWithRequest:(id)a0 error:(id *)a1;
- (id)asyncPackageAdmsWithRequest:(id)a0 error:(id *)a1;
- (void)fetchPreFetchJsonWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchAsyncPackageJsonWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)applogWithParams:(id)a0 isV3Data:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_applogWithParams:(id)a0 isV3Data:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)___v3DataWithParams:(id)a0;
- (id)___v1DataWithParams:(id)a0;
- (id)_adExtraADLoadDataForSlot:(id)a0;
- (void)reportDownloadImageAdSlot:(id)a0 materialMeta:(id)a1 startTime:(double)a2 imageUrl:(id)a3 image:(id)a4 imageData:(id)a5;
- (void)reportCreativeErrorWithSlot:(id)a0 materialMeta:(id)a1 imageUrl:(id)a2 imageData:(id)a3 error:(id)a4;
- (void)nativeExpressRetry107WithAdSlot:(id)a0 materialMeta:(id)a1 type:(id)a2;
- (void)nativeExpressFetch103WithAdSlot:(id)a0 materialMeta:(id)a1 type:(id)a2;
- (void)nativeExpress103TemplateDataDeleteError;
- (void)reportCreativeMissingErrorWithSlot:(id)a0 materialMeta:(id)a1 errorType:(long long)a2;
- (void)fetchSlotWithCodeGroupId:(long long)a0 completionHandler:(id /* block */)a1;
- (void)fetchSplashAdsWithAdSlot:(id)a0 requestDictionary:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchNativeAdsJSONWithAdSlot:(id)a0 sourceTemaiProductIds:(id)a1 completionHandler:(id /* block */)a2;
- (void)preFetchBiddingAdsWithAdSlot:(id)a0 requestID:(id)a1 requestDictionary:(id)a2 completionHandler:(id /* block */)a3;
- (void)preCacheBiddingAdsWithAdSlot:(id)a0 requestDictionary:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchAsyncPackageMaterialsWithAdSlot:(id)a0 requestDictionary:(id)a1 completionHandler:(id /* block */)a2;
- (void)checkSplashMaterialMetaValid:(id)a0 completionHandler:(id /* block */)a1;
- (void)rewardedVideoAdRewardVerify:(id)a0 completionHandler:(id /* block */)a1;
- (void)checkRewardedLiveStateWithMeta:(id)a0 completionHandler:(id /* block */)a1;
- (void)nativeExpressAdLogWithAdSlot:(id)a0 materialMeta:(id)a1 error:(id)a2;
- (void)iconLogWithSlot:(id)a0 material:(id)a1 error:(id)a2;
- (void)rewardVideoWebDefaultViewShowWithSlot:(id)a0 material:(id)a1 error:(id)a2;
- (void)applogWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)playableWebViewReloadLogWithEventName:(id)a0 slot:(id)a1 material:(id)a2 error:(id)a3;
- (void)reportDownloadImageDurationWithSlot:(id)a0;
- (void)reportLoadTemplateDurationWithSlot:(id)a0;
- (void)reportRenderDurationWithSlot:(id)a0;
- (void)reportTotalLoadDurationWithSlot:(id)a0;
- (void)reportAppInfoWith:(id)a0;
- (void)fetchWCMiniappInfoWithMaterialMeta:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateExtraDict:(id)a0;
- (void)fetchNativeAdsWithAdSlot:(id)a0 completionHandler:(id /* block */)a1;
- (void)checkMaterialMetaMissingparameter:(id)a0 withMaterialMeta:(id)a1;
- (void)reportADLoadDurationWithSlot:(id)a0;
- (void)reportBiddingReceiveUnionMetarialTimeWithSlot:(id)a0;
- (void)reportBiddingADLoadDurationWithSlot:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)getExtraData:(id)a0;
- (id)_deviceInfo;

@end
