@class UIColor, NSArray;

@interface BDASView : UIView {
    struct CGPath { } *_roundPathRef;
    struct CGPath { } *_borderPathRef;
    struct CGGradient { } *_gradientRef;
    struct { unsigned char needUpdateCornerRadius : 1; unsigned char needUpdateGradient : 1; unsigned char needUpdateBorder : 1; } _flags;
}

@property (retain, nonatomic) UIColor *fillColor;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long roundedCorners;
@property (nonatomic) BOOL enableContentsCornerRadius;
@property (nonatomic) BOOL enableBorderCornerRadius;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } gradientRect;
@property (copy, nonatomic) NSArray *gradientColors;
@property (copy, nonatomic) NSArray *gradientLocations;
@property (nonatomic) struct CGPoint { double x; double y; } gradientStartPoint;
@property (nonatomic) struct CGPoint { double x; double y; } gradientEndPoint;
@property (nonatomic) unsigned long long drawingPriority;
@property (nonatomic) BOOL displaysAsynchronously;
@property (nonatomic) BOOL reserveContentsBeforeNextDrawingComplete;
@property (nonatomic) BOOL clearContentsImmediatelyWhenDataChanged;
@property (nonatomic) BOOL clearContentsImmediatelyWhenSizeChanged;
@property (nonatomic) BOOL checkVisibilityBeforeRedraw;

+ (Class)layerClass;

- (id)displayQueue;
- (void)redrawAsynchronously:(BOOL)a0;
- (id)asyncLayer;
- (void)updateSilently:(id /* block */)a0 completion:(id /* block */)a1;
- (void)clearContentsImmediately;
- (id)drawParametersForAsyncLayer:(id)a0;
- (BOOL)hasValidContents;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withParameters:(id)a1 isCancelled:(id /* block */)a2;
- (void)didDisplayAsyncLayer:(id)a0 withParameters:(id)a1 isCancelled:(BOOL)a2;
- (id /* block */)displayBlockWithDrawParameters:(id)a0 isCancelledBlock:(id /* block */)a1;
- (void)willDisplayAsyncLayer:(id)a0 withParameters:(id)a1 asynchronously:(BOOL)a2;
- (void)drawCornerRadiusInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withParameters:(id)a1 isCancelled:(id /* block */)a2;
- (void)drawFillColorInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withParameters:(id)a1 isCancelled:(id /* block */)a2;
- (void)drawGradientInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withParameters:(id)a1 isCancelled:(id /* block */)a2;
- (void)drawBorderInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withParameters:(id)a1 isCancelled:(id /* block */)a2;
- (void).cxx_destruct;
- (void)setNeedsDisplay;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)displayLayer:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToWindow;

@end
