@class UIColor, UIView;

@interface AWEEvaluationVideoIndexView : UIView

@property (nonatomic) double widthDiff;
@property (nonatomic) double alphaDiff;
@property (retain, nonatomic) UIColor *otherDotColor;
@property (retain, nonatomic) UIColor *currentDotColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double currentDotWidth;
@property (nonatomic) double currentAlpha;
@property (nonatomic) double otherAlpha;
@property (nonatomic) double otherDotWidth;
@property (nonatomic) double dotHeight;
@property (nonatomic) double dotSpace;
@property (retain, nonatomic) UIView *leftView;
@property (retain, nonatomic) UIView *rightView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)updateTitleView:(double)a0;

@end
