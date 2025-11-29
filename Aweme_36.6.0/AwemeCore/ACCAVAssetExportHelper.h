@interface ACCAVAssetExportHelper : NSObject

+ (void)convertAssetModelsToValidAssetModels:(id)a0 taskID:(id)a1 convertID:(id)a2 completion:(id /* block */)a3;
+ (void)convertAssetModelsToValidAssetModels:(id)a0 convertVideoTypeOnly:(BOOL)a1 taskID:(id)a2 convertID:(id)a3 completion:(id /* block */)a4;
+ (void)cleanConvert;
+ (void)updateAssetOriginalResolutionWithAssetModel:(id)a0;
+ (BOOL)canFastImportWith:(id)a0 isMultiAssets:(BOOL)a1 error:(id *)a2;
+ (id)p_outputURLForAVAsset:(id)a0 taskID:(id)a1;
+ (struct CGSize { double x0; double x1; })videoSizeForAVAsset:(id)a0;
+ (void)fillNonFastImportVideoQuality:(id)a0;
+ (struct CGSize { double x0; double x1; })targetSizeForAVAsset:(id)a0;
+ (struct CGSize { double x0; double x1; })suggestedSizeWithVEError:(id)a0;
+ (struct CGSize { double x0; double x1; })targetSizeForAVAsset:(id)a0 suggestedSize:(struct CGSize { double x0; double x1; })a1;
+ (long long)audioRateWithVEError:(id)a0;
+ (BOOL)enableOptFastImport;
+ (void)p_enterGroup:(id)a0;
+ (void)p_leaveGroup:(id)a0;
+ (void)convertAssetModelsToValidAssetModelsByVe:(id)a0 taskID:(id)a1 convertID:(id)a2 suggestedSize:(struct CGSize { double x0; double x1; })a3 suggestedAudioRate:(long long)a4 completion:(id /* block */)a5;
+ (void)convertAssetModelToValidAssetModel:(id)a0 taskID:(id)a1 convertID:(id)a2 suggestedSize:(struct CGSize { double x0; double x1; })a3 suggestedAudioRate:(long long)a4 completion:(id /* block */)a5;
+ (void)convertAssetModelsToValidAssetModels:(id)a0 taskID:(id)a1 convertID:(id)a2 openAIClip:(BOOL)a3 completion:(id /* block */)a4;
+ (void)p_exportSessionWithAVAsset:(id)a0 suggestedSize:(struct CGSize { double x0; double x1; })a1 suggestedAudioRate:(long long)a2 completion:(id /* block */)a3;
+ (void)p_exportVECompileSessionWithAVAsset:(id)a0 suggestedSize:(struct CGSize { double x0; double x1; })a1 suggestedAudioRate:(long long)a2 completion:(id /* block */)a3;
+ (struct CGSize { double x0; double x1; })validTargetSize:(struct CGSize { double x0; double x1; })a0 suggestedSize:(struct CGSize { double x0; double x1; })a1;
+ (struct CGSize { double x0; double x1; })validTargetSize:(struct CGSize { double x0; double x1; })a0;
+ (void)convertAssetModelsToValidAssetModels:(id)a0 taskID:(id)a1 completion:(id /* block */)a2;
+ (void)convertAssetModelsToValidAssetModels:(id)a0 taskID:(id)a1 openAIClip:(BOOL)a2 completion:(id /* block */)a3;
+ (void)cancelConvert;
+ (id)requestCoverImageWithAssetModel:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
+ (id)requestCoverImageWithLivePhotoAssetModel:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
