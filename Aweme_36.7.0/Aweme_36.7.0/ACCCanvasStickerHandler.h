@class ACCStickerGeometryModel, NSMutableDictionary, AWEVideoPublishViewModel, AWEStudioEditCanvasGestureConfig;
@protocol ACCEditServiceProtocol, AWEEditKit;

@interface ACCCanvasStickerHandler : ACCStickerHandler

@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) ACCStickerGeometryModel *lastModel;
@property (retain, nonatomic) NSMutableDictionary *operations;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<AWEEditKit> editKit;
@property (retain, nonatomic) AWEStudioEditCanvasGestureConfig *canvasGestureFeatureConfig;

- (void)addInteractionStickerInfoToArray:(id)a0 idx:(long long)a1;
- (id)operationRecords;
- (id)initWithRepository:(id)a0;
- (BOOL)canHandleSticker:(id)a0;
- (void)apply:(id)a0 index:(unsigned long long)a1 doRender:(BOOL)a2;
- (BOOL)canRecoverSticker:(id)a0;
- (void)recoverSticker:(id)a0;
- (struct CGSize { double x0; double x1; })videoCanvasSize;
- (BOOL)supportCanvas;
- (id)setupCanvasSticker;
- (void)clearOperationRecords;
- (void)updateCanvas:(id)a0;
- (void)updatePinchScaleWithScale:(double)a0;
- (id)getCanvasSource;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfContentInCanvas;
- (void)acc_setFrameSafely:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forView:(id)a1;
- (struct CGSize { double x0; double x1; })handleCropWithContentSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })handleVerticesWithContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateVideoCanvas:(id)a0;
- (void)recordCanvasOperation:(id)a0;
- (void)addInteractionStickerInfoToArray:(id)a0 idx:(long long)a1 gropView:(id)a2;
- (void).cxx_destruct;
- (void)finish;
- (void)reset;
- (double)contentAspectRatio;

@end
