@class ACCImageAlbumExportFramesResult, NSMutableDictionary, AWEVideoPublishViewModel;

@interface AWEPublishInfiniReviewImageExportStage : AWEPublishBaseStage

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) NSMutableDictionary *runtimeCustomStickFrames;
@property (retain, nonatomic) ACCImageAlbumExportFramesResult *result;

- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (void)p_generateCanvasUploadFrameImagesWithCompletion:(id /* block */)a0;
- (void)p_doCustomerStickerFramesSaveWithCompletion:(id /* block */)a0;
- (id)p_itemModelWithFilePath:(id)a0 isFullPath:(BOOL)a1 imageIndex:(long long)a2 type:(unsigned long long)a3;
- (void)p_getImageAlbumUploadFrameImagesWithCompletion:(id /* block */)a0;
- (BOOL)p_isImageEnabled:(id)a0;
- (id)allStickersWithProject:(id)a0;
- (id)p_itemModelWithImageInfo:(id)a0 imageIndex:(long long)a1;
- (id)imagesInMultiSlotPicTemplateWith:(id)a0 imageIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)run;

@end
