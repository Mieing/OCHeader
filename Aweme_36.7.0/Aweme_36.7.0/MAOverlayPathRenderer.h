@class UIImage, UIColor, MAPolylineEraseStyle;

@interface MAOverlayPathRenderer : MAOverlayRenderer {
    BOOL _needLoadFootPrintTexture;
    BOOL _needUpdateLineEraseStyle;
}

@property (retain, nonatomic) UIImage *footPrintImage;
@property (nonatomic) double footPrintGap;
@property (retain, nonatomic) MAPolylineEraseStyle *eraseStyle;
@property (nonatomic) struct CGSize { double width; double height; } footPrintTextureSize;
@property (retain, nonatomic) UIColor *fillColor;
@property (retain, nonatomic) UIColor *strokeColor;
@property (nonatomic) double lineWidth;
@property (nonatomic) int lineJoinType;
@property (nonatomic) int lineCapType;
@property (nonatomic) double miterLimit;
@property (nonatomic) int lineDashType;

- (BOOL)hitTest:(struct MAMapPoint { double x0; double x1; })a0 lineWidthInset:(double)a1;
- (void)initDefaultAttributes;
- (void)getCurrentlyUsedLinePoints:(struct MAMapPoint **)a0 count:(int *)a1;
- (void).cxx_destruct;
- (id)initWithOverlay:(id)a0;

@end
