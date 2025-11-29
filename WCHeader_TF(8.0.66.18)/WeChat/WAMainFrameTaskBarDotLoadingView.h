@class UIView;

@interface WAMainFrameTaskBarDotLoadingView : MMUIView

@property (retain, nonatomic) UIView *centerDotLayer;
@property (retain, nonatomic) UIView *leftDotLayer;
@property (retain, nonatomic) UIView *rightDotLayer;
@property (nonatomic) double zoomOutBeginOffset;
@property (nonatomic) double zoomOutEndOffset;
@property (nonatomic) double spreadBeginOffset;
@property (nonatomic) double spreadEndOffset;
@property (nonatomic) double centerDotZoomOutRadius;
@property (nonatomic) double dotRadius;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)initSubViews;
- (id)dot;
- (void)updateStepOffset:(double)a0;
- (void)updateSpreadProgress:(double)a0;
- (void)updateZoomOutProgress:(double)a0;
- (void).cxx_destruct;

@end
