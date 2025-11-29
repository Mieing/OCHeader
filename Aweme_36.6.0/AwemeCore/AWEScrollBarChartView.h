@class UIColor, NSString, CAShapeLayer, UIScrollView, CALayer;

@interface AWEScrollBarChartView : UIView <UIScrollViewDelegate>

@property (nonatomic) double maxLength;
@property (nonatomic) double currentLength;
@property (readonly, nonatomic) struct _HTSAudioRange { double x0; double x1; } range;
@property (nonatomic) double barWidth;
@property (nonatomic) double space;
@property (retain, nonatomic) UIColor *drawColor;
@property (retain, nonatomic) UIColor *barDefaultColor;
@property (nonatomic) double maxBarHeight;
@property (nonatomic) double minBarHeight;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) CALayer *cavasLayer;
@property (retain, nonatomic) CALayer *progressLayer;
@property (retain, nonatomic) CAShapeLayer *progressMaskLayer;
@property (nonatomic) double time;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)updateBarWithHeights:(id)a0;
- (double)barCountForFullWidth;
- (void)addBarAtIndex:(int)a0 height:(double)a1 color:(id)a2 toLayer:(id)a3;
- (void)notifyRangeChanged:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)setupUI;
- (void)setRangeStart:(double)a0;

@end
