@class AWEVideoPublishViewModel;
@protocol ACCEditServiceProtocol;

@interface AWEAIMattingStickerHandler : ACCStickerHandler

@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;

- (id)initWithRepository:(id)a0;
- (void)commitAndRender;
- (BOOL)canRecoverSticker:(id)a0;
- (void)recoverSticker:(id)a0;
- (double)containerViewScale;
- (struct CGSize { double x0; double x1; })boundingBoxSizeOf:(id)a0;
- (void)trackStickerAdjust:(id)a0 gesture:(id)a1 lastGeometry:(id)a2;
- (void)trackStickerClick:(id)a0;
- (void)handlePanWithWrapperView:(id)a0 point:(struct CGPoint { double x0; double x1; })a1;
- (void)handlePinchWithWrapperView:(id)a0 scale:(double)a1;
- (void)handleRotationWithWrapperView:(id)a0 rotation:(double)a1;
- (void)handleMirroActionWrapperView:(id)a0;
- (void)updateSlotFrameWithWrapperView:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })canvasSize;

@end
