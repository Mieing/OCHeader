@interface AWEPOIUGCCreationAsset : NSObject

+ (id)checkParamValid:(id)a0;
+ (id)transInstancesToPHAssets:(id)a0 bridgeContext:(id)a1;
+ (id)getScreenShotImageFromVideoPath:(id)a0;
+ (BOOL)saveImage:(id)a0 toFilePath:(id)a1;
+ (id)getCertWithBridgeContext:(id)a0;
+ (id)getPHAssetWithAssetID:(id)a0 bpeaCert:(id)a1;
+ (id)getPHAssetWithAssetsID:(id)a0 bpeaCert:(id)a1;
+ (void)openCreationAssetPageWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
+ (id)getCurrentLocation;

@end
