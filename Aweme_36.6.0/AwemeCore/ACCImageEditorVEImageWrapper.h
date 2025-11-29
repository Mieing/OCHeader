@class VEImage, NSString, UIView;

@interface ACCImageEditorVEImageWrapper : NSObject <ACCImageAlbumEditorProtocol>

@property (retain, nonatomic) VEImage *imageEditor;
@property (nonatomic) struct CGPoint { double x; double y; } previewCenter;
@property (readonly, nonatomic) UIView *preview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderLayerQueue;
- (void)scaleWithScale:(struct CGSize { double x0; double x1; })a0 anchor:(struct CGPoint { double x0; double x1; })a1;
- (void)setComposerSlideFilter:(id)a0 pathTwo:(id)a1 intensity:(double)a2 progress:(double)a3;
- (void)setColorPrimaries:(unsigned long long)a0 TransferFunction:(unsigned long long)a1 YCbCrMatrix:(unsigned long long)a2;
- (void)removeComposerWithoutUndoWithPath:(id)a0 tagName:(id)a1;
- (int)addInfoStickerTemplate:(id)a0 param:(id)a1;
- (int)updateInfoStickerTemplateParam:(int)a0 json:(id)a1;
- (id)nativeGetInfoStickerTemplateParam:(int)a0;
- (int)addStickerWithPath:(id)a0 param:(id)a1;
- (int)removeStickerWithIndex:(long long)a0;
- (int)stickerSetScaleWithIndex:(long long)a0 scale:(struct CGSize { double x0; double x1; })a1;
- (int)stickerSetPositonWithIndex:(long long)a0 point:(struct CGPoint { double x0; double x1; })a1;
- (int)stickerSetRotationWithIndex:(int)a0 rotation:(double)a1;
- (int)stickerSetAlphaWithIndex:(int)a0 alpha:(double)a1;
- (int)stickerSetOrderInLayer:(int)a0 order:(int)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })getStickerBoundingBoxWitnIndex:(int)a0 needScale:(BOOL)a1;
- (id)getCurrentImage:(BOOL)a0 isPanoramic:(BOOL)a1;
- (BOOL)applyTemplateFile:(id)a0 diffJson:(id)a1;
- (id)getNeedDownloadedResource;
- (id)exportTemplateInfoOnlyImage;
- (BOOL)userAddedLayerFlag:(id)a0;
- (int)updateTextStickerTextParams:(long long)a0 textParams:(id)a1;
- (int)setRedrawCallback:(id /* block */)a0 data:(id)a1;
- (id)getNLEImageWrapper;
- (long long)addTextSticker:(id)a0 params:(id)a1;
- (id)initImageEditorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)restoreTemplateDownloaderCache:(id)a0;
- (void)addImageLayerWithImage:(id)a0 imagePath:(id)a1 imageTemplateJsonInfo:(id)a2 enableHDR:(BOOL)a3;
- (void)replaceImageLayerWithImage:(id)a0 imagePath:(id)a1 imageTemplateJsonInfo:(id)a2 enableHDR:(BOOL)a3;
- (void)doAdjustAspectFitWidthTask:(id /* block */)a0 targetRenderSize:(struct CGSize { double x0; double x1; })a1;
- (void)enableLensHDR:(BOOL)a0;
- (void)initLensHDREngine:(id)a0 count:(int)a1 infoBuffer:(id)a2;
- (BOOL)applyTemplateFile:(id)a0 diffJson:(id)a1 retainMianLayer:(BOOL)a2;
- (void)updateImageTemplateInfoIfDownloadSuccess:(BOOL)a0;
- (id)saveImageTemplateInfoOnly;
- (struct CGSize { double x0; double x1; })getTemplateCanvasSize;
- (void)configPreviewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)renderEffect;

@end
