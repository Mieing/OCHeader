@class UIColor, CAShapeLayer;
@protocol MMCircleProgressViewDelegate;

@interface MMCircleProgressView : UIView

@property (retain, nonatomic) UIColor *finishedColor;
@property (retain, nonatomic) UIColor *unfinishedColor;
@property (retain, nonatomic) CAShapeLayer *unfinishedShapeLayer;
@property (retain, nonatomic) CAShapeLayer *finishedShapeLayer;
@property (retain, nonatomic) CAShapeLayer *leftShapeLayer;
@property (retain, nonatomic) CAShapeLayer *rightShapeLayer;
@property (nonatomic) double lineWidth;
@property (nonatomic) double progress;
@property (weak, nonatomic) id<MMCircleProgressViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)commonInit;
- (void)updateBgColor:(id)a0 progressColor:(id)a1;
- (void)setProgress:(double)a0 animated:(BOOL)a1;
- (double)getCurrentProgress;
- (void)viewDidTapped:(id)a0;
- (void).cxx_destruct;

@end
