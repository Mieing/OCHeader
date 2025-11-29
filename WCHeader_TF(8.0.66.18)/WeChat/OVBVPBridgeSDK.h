@interface OVBVPBridgeSDK : NSObject

+ (void)applicationDidEnterBackground;
+ (void)applicationWillEnterForeground;
+ (void)registerFont:(id)a0 path:(id)a1;
+ (id)registerSticker:(id)a0 idSuffix:(id)a1;
+ (id)stickerMaterialIDWithIDSuffix:(id)a0;
+ (void)cleanupIntermediateFiles:(id /* block */)a0;
+ (void)cleanupAssetsWithExcludedPHLocalIdentifiers:(id)a0 excludedMoviePaths:(id)a1 completion:(id /* block */)a2;
+ (void)cleanupAssetsWithExcludedLocalIdentifiers:(id)a0 completion:(id /* block */)a1;
+ (void)deleteAssetsDirectoriesWithDir:(const void *)a0 excludedAssetIds:(const void *)a1;
+ (void)registerAllMaterialsUnderDirectory:(id)a0;
+ (void)registerSingleMaterialWithDirectory:(id)a0;
+ (void)registerSingleMaterialWithDirectory:(id)a0 specifiedMaterialID:(id)a1;
+ (void)registerAllMaterialsWithoutVersionCheckUnderDirectory:(id)a0;
+ (void)registerSingleMaterialWithoutVersionCheckWithDirectory:(id)a0;
+ (void)registerSingleMaterialWithoutVersionCheckWithDirectory:(id)a0 specifiedMaterialID:(id)a1;
+ (void)cleanupMaterialsWithIDs:(id)a0;
+ (struct CGSize { double x0; double x1; })calculateNormalizedLowerThirdContentSizeWithID:(id)a0 lowerThirdBuildData:(id)a1 aspecRatio:(unsigned long long)a2;
+ (struct CGSize { double x0; double x1; })calculateLowerThirdContentSizeWithID:(id)a0 lowerThirdBuildData:(id)a1;
+ (id)getFontNamesForLowerThirdWithID:(id)a0;
+ (id)getTextLayerMetadatasForLowerThirdWithID:(id)a0;
+ (id)getTextLayerMetadatasForLowerThirdWithID:(id)a0 ltLayerID:(int)a1;
+ (BOOL)shouldLivePhotoClipUseAsImageForPostProcs:(id)a0;
+ (id)URLForLogDirectory;
+ (id)renderEngineEAGLContext;

@end
