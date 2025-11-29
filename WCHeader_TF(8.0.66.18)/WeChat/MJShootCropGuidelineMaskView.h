@class MMUIView, CALayer, MJDashLine, MMUILabel;
@protocol MJShootCropGuidelineMaskViewDelegate;

@interface MJShootCropGuidelineMaskView : MMUIView

@property (nonatomic) struct CGSize { double width; double height; } canvasPointSize;
@property (retain, nonatomic) MMUIView *guidelineFrameContainerView;
@property (retain, nonatomic) CALayer *topBorder;
@property (retain, nonatomic) CALayer *bottomBorder;
@property (retain, nonatomic) CALayer *leftBorder;
@property (retain, nonatomic) CALayer *rightBorder;
@property (retain, nonatomic) MJDashLine *verticalLine;
@property (retain, nonatomic) MJDashLine *horizontalLine;
@property (retain, nonatomic) MMUIView *topOverlayView;
@property (retain, nonatomic) MMUIView *bottomOverlayView;
@property (retain, nonatomic) MMUIView *leftOverlayView;
@property (retain, nonatomic) MMUIView *rightOverlayView;
@property (retain, nonatomic) MMUILabel *tipLabel;
@property (weak, nonatomic) id<MJShootCropGuidelineMaskViewDelegate> delegate;
@property (readonly, nonatomic) unsigned long long snapType;

+ (id)snapTypeDescription:(unsigned long long)a0;

- (id)initWithCanvasPointSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupViews;
- (void)layoutGuidelineFrameContainerView;
- (void)setupGuidelines;
- (void)showVerticalGuidelineAnimated:(BOOL)a0;
- (void)dismissVerticalGuidelineAnimated:(BOOL)a0;
- (void)showHorizontalGuidelineAnimated:(BOOL)a0;
- (void)dismissHorizontalGuidelineAnimated:(BOOL)a0;
- (void)setupBorders;
- (void)resetBordersFrame;
- (void)highlightTopBorder;
- (void)unhighlightTopBorder;
- (void)highlightLeftBorder;
- (void)unhighlightLeftBorder;
- (void)highlightBottomBorder;
- (void)unhighlightBottomBorder;
- (void)highlightRightBorder;
- (void)unhighlightRightBorder;
- (void)setupOverlays;
- (void)showOverlayAnimated:(BOOL)a0;
- (void)dismissOverlayAnimated:(BOOL)a0;
- (void)showOverlayExclusivelyAnimated:(BOOL)a0;
- (void)setupAccessorViews;
- (void)setSnapType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
