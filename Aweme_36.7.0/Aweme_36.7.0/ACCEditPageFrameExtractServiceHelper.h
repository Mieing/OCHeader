@class NSString;

@interface ACCEditPageFrameExtractServiceHelper : NSObject <ACCEditPageFrameExtractServiceProcotol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)generateFrameExtractMaterialsForDraftRecoverWithPublishViewModel:(id)a0 isAutoFrameExtractionStatus:(BOOL)a1 completion:(id /* block */)a2;
+ (void)getOriginalMatrialAfterEditFristFrameWithPublish:(id)a0 isAutoFrameExtractionStatus:(BOOL)a1 completion:(id /* block */)a2;
+ (id)generateFrameExtractMaterialsForShareAsStoryWithPublishViewModel:(id)a0;
+ (void)generateFrameExtractMaterialsWithEditService:(id)a0 publishViewModel:(id)a1 completion:(id /* block */)a2;
+ (void)getOriginalMatrialAfterEditFristFrameWithPublish:(id)a0 completion:(id /* block */)a1;
+ (void)generateFrameExtractMaterialsForDraftRecoverWithPublishViewModel:(id)a0 completion:(id /* block */)a1;
+ (void)trackWhenStartFrameExtractWithPublishViewModel:(id)a0;
+ (void)generateFrameExtractMaterialsForPOICommentWithPublishViewModel:(id)a0 completion:(id /* block */)a1;
+ (void)generateFrameExtractMaterialsForComposerWithPublishViewModel:(id)a0 completion:(id /* block */)a1;
+ (void)generateFrameExtractMaterialsForAlbumUploadWithAssetsModel:(id)a0 publishViewModel:(id)a1 completion:(id /* block */)a2;
+ (void)generateFrameExtractMaterialsForCaptureWithPublishViewModel:(id)a0 completion:(id /* block */)a1;
+ (void)generateFrameExtractMaterialsForAlbumUploadWithAssetsModel:(id)a0 isAutoFrameExtractionStatus:(BOOL)a1 publishViewModel:(id)a2 completion:(id /* block */)a3;
+ (void)generateFrameExtractMaterialsForCaptureWithPublishViewModel:(id)a0 isAutoFrameExtractionStatus:(BOOL)a1 completion:(id /* block */)a2;
+ (void)configFrameExtractMaterialsForLocalAlbumAssets:(id)a0 taskID:(id)a1 completion:(id /* block */)a2;
+ (void)configFrameExtractMaterialsForLocalAlbumAssets:(id)a0 taskID:(id)a1 isAutoFrameExtractionStatus:(BOOL)a2 completion:(id /* block */)a3;
+ (id)generateImageSavedFilePathWithTaskID:(id)a0;
+ (id)configMultiImagePathsWithPublishViewModel:(id)a0;
+ (BOOL)enableUseTarotForAssetModels:(id)a0;
+ (id)configMixedSlidesPathsWithPublishViewModel:(id)a0;
+ (BOOL)taskFetchAssetIsFinished:(id)a0;
+ (id)generateOriginalFramesAbsolutePathsArrayWithRelativePaths:(id)a0 framesDirPath:(id)a1;
+ (void)startEditPageFrameExtractIfNeededWithModel:(id)a0;
+ (BOOL)saveImage:(id)a0 toPath:(id)a1;

- (void)generateFrameExtractMaterialsForDraftRecoverWithPublishViewModel:(id)a0 isAutoFrameExtractionStatus:(BOOL)a1 completion:(id /* block */)a2;
- (void)getOriginalMatrialAfterEditFristFrameWithPublish:(id)a0 isAutoFrameExtractionStatus:(BOOL)a1 completion:(id /* block */)a2;
- (id)generateFrameExtractMaterialsForShareAsStoryWithPublishViewModel:(id)a0;
- (void)generateFrameExtractMaterialsWithEditService:(id)a0 publishViewModel:(id)a1 completion:(id /* block */)a2;
- (void)getOriginalMatrialAfterEditFristFrameWithPublish:(id)a0 completion:(id /* block */)a1;
- (void)generateFrameExtractMaterialsForDraftRecoverWithPublishViewModel:(id)a0 completion:(id /* block */)a1;

@end
