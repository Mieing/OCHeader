@class CALayer, UIColor, CAShapeLayer;

@interface AWECountDownBarChartView : AWEScrollBarChartView

@property (retain, nonatomic) CALayer *recordedLayer;
@property (retain, nonatomic) CALayer *countDownLayer;
@property (retain, nonatomic) CAShapeLayer *recordedMaskLayer;
@property (retain, nonatomic) CAShapeLayer *countDownMaskLayer;
@property (nonatomic) double lastTimeBoundWidth;
@property (copy, nonatomic) id /* block */ updateMusicBlock;
@property (retain, nonatomic) UIColor *recordedColor;
@property (retain, nonatomic) UIColor *countDownColor;
@property (retain, nonatomic) UIColor *unReachedColor;
@property (nonatomic) double hasRecordedLocation;
@property (nonatomic) double countDownLocation;

- (void)updateBarWithHeights:(id)a0;
- (double)barCountForFullWidth;
- (void)addBarAtIndex:(int)a0 height:(double)a1 color:(id)a2 toLayer:(id)a3;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
