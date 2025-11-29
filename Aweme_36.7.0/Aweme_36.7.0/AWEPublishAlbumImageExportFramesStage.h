@class AWEVideoPublishViewModel;

@interface AWEPublishAlbumImageExportFramesStage : AWEPublishBaseStage

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (nonatomic) long long contentSourceType;

- (void)p_generateCanvasUploadFrameImagesWithCompletion:(id /* block */)a0;
- (id)p_getImageAlbumUploadFrameImages;
- (void)p_doCustomerStickerFramesSaveWithCompletion:(id /* block */)a0;
- (id)p_itemModelWithFilePath:(id)a0 isFullPath:(BOOL)a1 imageIndex:(long long)a2 type:(unsigned long long)a3;
- (id)initWithModel:(id)a0 contentSourceType:(long long)a1;
- (void).cxx_destruct;
- (void)run;

@end
