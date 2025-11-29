@class UIColor, NSString, SightFocusView, NSObject;
@protocol SightQRCodeScannerDelegate;

@interface SightPreviewViewF2 : MMUIView <SightPreviewView> {
    BOOL m_isReady;
    struct CGSize { double width; double height; } sizeInPixels;
    double inputWidth;
    double inputHeight;
    double m_currZoomLevel;
    int m_focusInAnim;
    BOOL m_supportQRFrame;
}

@property (retain, nonatomic) SightFocusView *focusView;
@property (retain, nonatomic) NSString *qrData;
@property (weak, nonatomic) NSObject<SightQRCodeScannerDelegate> *qrDelegate;
@property (nonatomic) double zoomLevel;
@property (nonatomic) BOOL showLightingAdjustBar;
@property (readonly, nonatomic) BOOL renderFirstFrame;
@property (readonly, nonatomic) BOOL isFocusActive;
@property (retain, nonatomic) UIColor *strokeColor;
@property (retain, nonatomic) UIColor *focusViewShadowColor;
@property (nonatomic) BOOL lightBoostOn;
@property (nonatomic) int videoStabilizationMode;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 previewLayer:(id)a1;
- (void)layoutSubviews;
- (BOOL)supportQRFrame;
- (void)setQRFrameEnable:(BOOL)a0;
- (BOOL)isReady;
- (void)setReady;
- (void)setZoomLevel:(double)a0 immediatly:(BOOL)a1;
- (void)setOutputWidth:(float)a0 andHeight:(float)a1;
- (struct CGPoint { double x0; double x1; })transformPointInView:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })transformPointToView:(struct CGPoint { double x0; double x1; })a0;
- (void)forceFocusAnimAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)startFocusAnimAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)removeFocusStroke;
- (BOOL)stratAdjustLighting;
- (double)increaseLightingBarPercent:(double)a0;
- (void)stopAdjustLighting;
- (void)onQRCodeFrame:(float *)a0 withData:(id)a1;
- (void)setQRScannerDelegate:(id)a0;
- (void).cxx_destruct;

@end
