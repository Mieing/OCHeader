@class MAGltfOverlay;

@interface MAGltfOverlayRenderer : MAOverlayRenderer

@property (readonly, nonatomic) MAGltfOverlay *glTFOverlay;
@property (nonatomic) BOOL fixedDisplaySize;

- (void)glRender;
- (void)initializeRendererBridge;
- (BOOL)shouldDecreaseFrame;
- (id)initWithGlTFModelOverlay:(id)a0;
- (id)objModelOverlay;
- (BOOL)responseToBeforePoint:(struct CGPoint { double x0; double x1; })a0;
- (void)onPanWithBeforePointPoint:(struct MAMapPoint { double x0; double x1; })a0 afterPoint:(struct MAMapPoint { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
