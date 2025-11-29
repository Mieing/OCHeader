@class NSString, StrokeView;
@protocol LiteAppCameraPreviewDelegate;

@interface LiteAppCameraPreview : GPUImageView <SightPreviewView> {
    BOOL m_isReady;
    struct CGSize { double width; double height; } sizeInPixels;
    double inputWidth;
    double inputHeight;
    double m_currZoomLevel;
    int m_focusInAnim;
    StrokeView *m_focusStroke;
    BOOL m_supportQRFrame;
    BOOL m_isPinching;
    BOOL m_forbidGesture;
}

@property (retain, nonatomic) NSString *qrData;
@property (nonatomic) double m_lastZoomScale;
@property (weak, nonatomic) id<LiteAppCameraPreviewDelegate> m_delegate;
@property (nonatomic) double zoomLevel;
@property (readonly, nonatomic) BOOL renderFirstFrame;
@property (nonatomic) BOOL lightBoostOn;
@property (nonatomic) int videoStabilizationMode;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 previewLayer:(id)a1;
- (void)setupGesture:(BOOL)a0;
- (void)handleFocusTap:(id)a0;
- (void)handlePinchGesture:(id)a0;
- (void)focusCenter;
- (BOOL)supportQRFrame;
- (void)setQRFrameEnable:(BOOL)a0;
- (BOOL)isReady;
- (void)setReady;
- (void)setZoomLevel:(double)a0 immediatly:(BOOL)a1;
- (void)forceSetLastZoomScale:(double)a0;
- (void)setOutputWidth:(float)a0 andHeight:(float)a1;
- (struct CGPoint { double x0; double x1; })transformPointInView:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })transformPointToView:(struct CGPoint { double x0; double x1; })a0;
- (void)forceFocusAnimAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)startFocusAnimAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)removeFocusStroke;
- (void)hideFocusFrame;
- (id)getShineAnim:(double)a0 count:(unsigned int)a1;
- (void).cxx_destruct;

@end
