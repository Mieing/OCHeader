@class NSString, ACCStickerContainerView, ABKBaseStickerConfig;
@protocol AEKBaseStickerEditor, AEKPreviewEditor, AEKRuntimeStickerEditor;

@interface ACCBaseStickerEditorImpl : AEKEditAbility <ACCBaseStickerAbility>

@property (nonatomic) BOOL isMoving;
@property (nonatomic) BOOL isAdjusting;
@property (retain, nonatomic) ABKBaseStickerConfig *baseStickerConfig;
@property (weak, nonatomic) ACCStickerContainerView *stickerContainer;
@property (weak, nonatomic) id<AEKBaseStickerEditor> baseStickerEditor;
@property (weak, nonatomic) id<AEKRuntimeStickerEditor> runtimeSticker;
@property (weak, nonatomic) id<AEKPreviewEditor> preview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSticker:(id)a0 alpha:(double)a1;
- (void)resetHead:(id /* block */)a0;
- (id)stickerWithId:(id)a0;
- (void)removeWithStickerId:(id)a0;
- (void)renderStickerViewWithStickerId:(id)a0;
- (id)stickerDataWithStickerId:(id)a0;
- (void)removeNativeViewWithId:(id)a0;
- (void)setSticker:(id)a0 layer:(long long)a1;
- (double)stickerContainerScale;
- (id)stickerViewWithId:(id)a0;
- (void)setSticker:(id)a0 anchor:(struct CGPoint { double x0; double x1; })a1;
- (void)setSticker:(id)a0 rotation:(double)a1;
- (void)setSticker:(id)a0 scale:(double)a1;
- (void)setSticker:(id)a0 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 endTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)bringToFrontWithStickerId:(id)a0;
- (void)removeNLEStickerWithStickerId:(id)a0;
- (void)removeAllStickers;
- (void)adaptAllStickerLocationsInVideo;
- (void)adaptAllStickerDurationsInVideo;
- (void)updateEdgeInsetsWithWrapperView:(id)a0;
- (void)updateEdgeInsetsWithWrapperView:(id)a0 minmumSize:(struct CGSize { double x0; double x1; })a1;
- (void)panSticker:(id)a0 anchor:(struct CGPoint { double x0; double x1; })a1;
- (void)pinchSticker:(id)a0 scaleFactor:(double)a1;
- (void)rotationSticker:(id)a0 rotation:(double)a1;
- (id)stickerDataAtPosition:(struct CGPoint { double x0; double x1; })a0;
- (id)stickerIdAtPosition:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })absolutePointWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setupUIConfig:(id)a0 stickerId:(id)a1 abkConfig:(id)a2 gestureBlockType:(unsigned long long)a3;
- (BOOL)hasStickerWithStickerId:(id)a0;
- (void)updateSticker:(id)a0 abkConfig:(id)a1;
- (void).cxx_destruct;
- (void)commit;
- (void)render;

@end
