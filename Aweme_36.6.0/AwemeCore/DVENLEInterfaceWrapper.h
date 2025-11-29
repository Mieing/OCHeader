@class NSString, NLEInterface_OC;

@interface DVENLEInterfaceWrapper : NSObject <DVENLEInterfaceProtocol>

@property (weak, nonatomic) NLEInterface_OC *nle;
@property (copy, nonatomic) NSString *draftFolder;
@property (nonatomic) struct CGSize { double x0; double x1; } canvasSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })getstickerEditBoxSizeNormaliz:(long long)a0;
- (long long)setStickerPreviewMode:(id)a0 previewMode:(int)a1;
- (id)videoData;
- (void)setStickerEditMode:(BOOL)a0;
- (void)resetPlayerWithViews:(id)a0;
- (void)getProcessedPreviewImageAtTime:(double)a0 preferredSize:(struct CGSize { double x0; double x1; })a1 compeletion:(id /* block */)a2;
- (long long)stickerIdForSlot:(id)a0;
- (id)getBrushStickerInfoWithSlotId:(id)a0;
- (void)saveBrushStickerToPNGWithSlotId:(id)a0 savePath:(id)a1 completion:(id /* block */)a2;
- (void)setDisableAutoUpdateCanvasSize:(BOOL)a0;
- (id)getVideoProcess;
- (id)assetFromSlot:(id)a0;
- (int)updateStickerWithWithSlotId:(id)a0 segment:(id)a1;
- (id)getAbsolutePathWithResource:(id)a0;
- (id)initWithNLEInterface:(id)a0;
- (void).cxx_destruct;
- (void)setPreviewModeType:(int)a0;

@end
