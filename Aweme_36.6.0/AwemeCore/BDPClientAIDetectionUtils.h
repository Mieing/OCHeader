@interface BDPClientAIDetectionUtils : NSObject

+ (BOOL)containSceneWithStrategy:(id)a0 scene:(id)a1;
+ (void)getPageViewTextWithUniqueID:(id)a0 pageID:(long long)a1 needDetectEmbedH5:(BOOL)a2 completion:(id /* block */)a3;
+ (void)uploadSnapshotImage:(id)a0 appID:(id)a1 completion:(id /* block */)a2;
+ (void)screenShotWithUniqueID:(id)a0 pageURL:(id)a1 completionBlock:(id /* block */)a2;
+ (id)decodeAES128WithEncryptData:(id)a0 decryptKey:(id)a1;
+ (id)getCommonTrackerContextWithDetectionModel:(id)a0 uniqueID:(id)a1 detectionConfig:(id)a2;
+ (id)getContainPhoneFromText:(id)a0;
+ (BOOL)checkContainPhoneWithOriginalText:(id)a0 transparentTextArray:(id)a1 dialogText:(id)a2 possiblePhoneArr:(id)a3;
+ (void)caculateViewHashWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2 needCache:(BOOL)a3 completion:(id /* block */)a4;
+ (id)webViewForAppPage:(id)a0;
+ (id)createDetectionModelWithCommonInfo:(id)a0 pageURL:(id)a1 deviceInfoJsonString:(id)a2 uniqueID:(id)a3 detectionConfig:(id)a4;
+ (id)getLocalNewestSensitiveWordFileInfo;
+ (id)getLocalNewestSecurityStrategyVersion;
+ (void)screenShotWithWebView:(id)a0 uniqueID:(id)a1 pathKey:(id)a2 completionBlock:(id /* block */)a3;
+ (void)getPageViewTextWithUniqueID:(id)a0 pageID:(long long)a1 needDetectEmbedH5:(BOOL)a2 needCache:(BOOL)a3 completion:(id /* block */)a4;
+ (void)caculateViewHashWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2 needCache:(BOOL)a3 completionWithContent:(id /* block */)a4;
+ (id)createHashWithWebviewContent:(id)a0;
+ (void)getPageViewContentWithUniqueID:(id)a0 pageID:(long long)a1 jsCode:(id)a2 needCache:(BOOL)a3 completion:(id /* block */)a4;
+ (id)webViewForWebVC:(id)a0;
+ (BOOL)checkHasCacheObjectWithPath:(id)a0 detectionType:(long long)a1;
+ (id)getHyperLinkFromText:(id)a0;

@end
