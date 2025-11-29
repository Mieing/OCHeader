@class NSString, AWEVideoPublishViewModel;
@protocol ACCEditServiceProtocol;

@interface AWEPublishAlbumImageProcessPhotoStage : AWEPublishBaseStage

@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (nonatomic) long long contentSourceType;
@property (nonatomic) struct CGSize { double width; double height; } canvasImageContainerSize;
@property (retain, nonatomic) NSString *errorMsg;
@property (nonatomic) BOOL isBlackEdge;

+ (struct CGSize { double x0; double x1; })maxExportSize;

- (void)p_updateProgress:(double)a0;
- (void)p_setup;
- (id)getCanvasSource;
- (struct CGSize { double x0; double x1; })exportSize;
- (id)initWithModel:(id)a0 editService:(id)a1 contentSourceType:(long long)a2;
- (void)p_run;
- (void)p_runAsCanvasSourceProcessStage;
- (void)p_runAsDualSourceProcessStage;
- (void)p_callbackSucceedWithResults:(id)a0;
- (void)p_callbackFaild;
- (void)p_exportImagesWithProgress:(id /* block */)a0 onSucceed:(id /* block */)a1 onFaild:(id /* block */)a2;
- (struct CGSize { double x0; double x1; })p_getVideoPlayerSize;
- (void)commitAndRenderIfNeededWithCompletion:(id /* block */)a0;
- (id)p_generateImageItemFromVideoWithOriginalImage:(id)a0 filePath:(id)a1;
- (BOOL)needGetProcessedPreviewImage:(id)a0;
- (void)p_covertVideoHDRToImageItem:(id)a0;
- (void)p_covertVideoFiterToImageItem:(id)a0;
- (void)p_covertVideoStickersToImageItem:(id)a0;
- (void)p_appendImageBlackEdgeIfNeedWithImageItem:(id)a0 stickers:(id)a1;
- (id)p_imageStickerModelFromVideoSticker:(id)a0 imageItemModel:(id)a1;
- (BOOL)isAllSticker:(id)a0 inImageSize:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;
- (void)run;

@end
