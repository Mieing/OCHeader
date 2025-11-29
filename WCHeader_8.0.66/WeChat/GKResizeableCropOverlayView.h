@class GKCropBorderView, UIView;

@interface GKResizeableCropOverlayView : GKImageCropOverlayView {
    struct CGSize { double width; double height; } _initialContentSize;
    BOOL _resizingEnabled;
    struct CGPoint { double x; double y; } _theAnchor;
    struct CGPoint { double x; double y; } _startPoint;
    struct { int widhtMultiplyer; int heightMultiplyer; int xMultiplyer; int yMultiplyer; } _resizeMultiplyer;
}

@property (retain, nonatomic) UIView *contentView;
@property (readonly, nonatomic) GKCropBorderView *cropBorderView;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andInitialContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)_addContentViews;
- (struct CGPoint { double x0; double x1; })_calcuateWhichBorderHandleIsTheAnchorPointFromHere:(struct CGPoint { double x0; double x1; })a0;
- (id)_getAllCurrentHandlePositions;
- (void)_resizeWithTouchPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_preventBorderFrameFromGettingTooSmallOrTooBig:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_resetFramesToThisOne:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_fillMultiplyer;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
